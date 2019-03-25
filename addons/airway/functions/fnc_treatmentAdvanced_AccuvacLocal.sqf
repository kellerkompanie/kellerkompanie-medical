#include "script_component.hpp"
/*
 * Author: Katalam
 * Airway Management for occluding local
 *
 * Arguments:
 * 0: Patient <OBJECT>
 * 1: Item classname <STRING>
 *
 * Return Value:
 * Succesful treatment <BOOL>
 *
 * Example:
 * [player, "Accuvac"] call keko_medical_airway_fnc_treatmentAdvanced_accuvacLocal;
 *
 * Public: No
 */

params ["_target", "_item"];

if (_target getVariable ["ace_medical_airwayOccluded", false]) then {
    _target setVariable ["ace_medical_airwayOccluded", false, true];
};

[_target, _Item] call ace_medical_fnc_addToTriageCard;

true;
