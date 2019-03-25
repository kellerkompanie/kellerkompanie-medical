#include "script_component.hpp"

params ["_caller", "_target", "_selectionName", "_className", "_items"];

private _enable = missionNamespace getVariable [QGVAR(enable), true];

//if revive is enabled execute the custom cpr action:
if ( _enable ) exitWith {
    if (local _target) exitWith {
        //cpr call:
        [QGVAR(evh_CPR_local), [_caller, _target]] call CBA_fnc_localEvent;
    };

    //cpr call:
    [QGVAR(evh_CPR_local), [_caller, _target], _target] call CBA_fnc_targetEvent;

    true;
};

//execute the regular ace-cpr action:
[_caller,_target,_selectionName,_className,_items] call ace_medical_fnc_treatmentAdvanced_CPR;

//return:
false;
