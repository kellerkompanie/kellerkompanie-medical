#include "script_component.hpp"
/*
 * Author: Katalam
 * Called when a unit is damaged.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Selection <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget, "body", 1, ""] call kat_aceBreathing_fnc_handlePulmoHit;
 *
 * Public: No
 */

params ["_unit", "_selection", "_damage", "_projectile"];

if !(kat_aceBreathing_enable) exitWith {};
if (kat_aceBreathing_pneumothorax == 0) exitWith {};
if !(_selection isEqualTo "body") exitWith {};
if (_damage < 0.7) exitWith {};
if !(_projectile isKindOF "BulletBase") exitWith {};

if (random (100) <= kat_aceBreathing_pneumothorax) then {
    // add breathing sound
    [_unit, 0.5] call ace_medical_fnc_adjustPainLevel;
    [_unit, CBA_missionTime] call kat_aceBreathing_fnc_handleBreathing;
    _unit setVariable ["ace_medical_airwayCollapsed", true, true];
};
