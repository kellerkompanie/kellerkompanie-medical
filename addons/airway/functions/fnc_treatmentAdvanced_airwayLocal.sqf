#include "script_component.hpp"
/*
 * Author: Katalam
 * Airway Management for collapsing local
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Treatment classname <STRING>
 *
 * Return Value:
 * Succesful treatment <BOOL>
 *
 * Example:
 * [player, cursorTarget, "Larynxtubus"] call kat_aceAirway_fnc_treatmentAdvanced_airwayLocal;
 *
 * Public: No
 */

params ["_caller", "_target", "_className"];

if (_target getVariable ["ace_medical_airwayOccluded", false]) exitWith {
    private _output = localize "STR_kat_aceAirway_Airway_NA";
    [_output, 1.5, _caller] call ace_common_fnc_displayTextStructured;
    false;
};

if (_target getVariable ["kat_aceAirway_airway_item", ""] isEqualTo "larynx") exitWith {
    private _output = localize "STR_kat_aceAirway_Airway_already";
    [_output, 1.5, _caller] call ace_common_fnc_displayTextStructured;
    false;
};
if (_target getVariable ["kat_aceAirway_airway_item", ""] isEqualTo "guedel" && (_className isEqualTo "Guedeltubus")) exitWith {
    private _output = localize "STR_kat_aceAirway_Airway_already";
    [_output, 1.5, _caller] call ace_common_fnc_displayTextStructured;
    false;
};
if ((random 100 < 5) && (_className isEqualTo "Guedeltubus")) exitWith {
    private _output = localize "STR_kat_aceAirway_Airway_NA";
    [_output, 1.5, _caller] call ace_common_fnc_displayTextStructured;
    false;
};

_target setVariable ["kat_aceAirway_airway", true, true];
_target setVariable ["kat_aceAirway_obstruction", false, true];

private _item = "STR_kat_aceAirway_Larynx_Display";
_target setVariable ["kat_aceAirway_airway_item", "larynx", true];

if (_className isEqualTo "Guedeltubus") then {
    _item = "STR_kat_aceAirway_Guedel_Display";
    _target setVariable ["kat_aceAirway_airway_item", "guedel", true];
};

[_target, _item] call ace_medical_fnc_addToTriageCard;
[_target, "activity", "STR_kat_aceAirway_airway_log", [[_caller] call ace_common_fnc_getName, _item]] call ace_medical_fnc_addToLog;
[_target, "activity_view", "STR_kat_aceAirway_airway_log", [[_caller] call ace_common_fnc_getName, _item]] call ace_medical_fnc_addToLog;

true;
