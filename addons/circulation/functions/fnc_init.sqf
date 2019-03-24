#include "script_component.hpp"
/*
 * Author: Katalam
 * Initializes unit variables.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_aceCirculation_fnc_init;
 *
 * Public: No
 */

params ["_unit"];

//private _BLOOD_TYPES = ["O", "A", "B", "AB"];
//private _type = _BLOOD_TYPES select random(3);

//_unit setVariable ["kat_aceCirculation_bloodtype", _type, true];
_unit setVariable [QGVAR(IV_counts), 0, true];
_unit setVariable [QGVAR(X), false, true];
_unit setVariable [QGVAR(X_sound1), QPATHTOF(sounds\noheartrate.wav), true];
_unit setVariable [QGVAR(X_sound2), QPATHTOF(sounds\heartrate.wav), true];
_unit setVariable [QGVAR(use), false, true];
/*
 * kat_aceCirculation_loadout
 * You can add your unit class in the variable above and it will show up at the dog tag. If you don't it will take the localized displayName of the unit.
 */
