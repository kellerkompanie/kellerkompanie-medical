#include "script_component.hpp"

params ["_caller", "_target"];

private _inCardiac = _target getVariable ["ace_medical_inCardiacArrest",false];
private _inRevive = _target getVariable ["ace_medical_inReviveState",false];

//pain will be added to all units standing too close to caller or target.
private _bystanders = ( allUnits select {_x distance _target < 1.7} ) - [_caller];
{ [_x, 0.2] remoteExec ["ace_medical_fnc_adjustPainLevel",_x]; nil; } count _bystanders;

//if necessary execute the custom cpr action:
if ( _inCardiac || _inRevive ) exitWith {
    //execute aed treatment local to the target:
    if (local _target) exitWith {
        //diagnostics
        [_target,"target is local"] call FUNC(diag);

        //aed event:
        [QGVAR(evh_AED_local), [_caller, _target]] call CBA_fnc_localEvent;
    };

    //diagnostics:
    [_target,"target is not local to the caller"] call FUNC(diag);

    //aed event:
    [QGVAR(evh_AED_local), [_caller, _target], _target] call CBA_fnc_targetEvent;
};

//log the AED usage to the treatment log:
[_target, "activity", localize LSTRING(AED_EXECUTE), [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize LSTRING(AED_EXECUTE), [[_caller, false, true] call ace_common_fnc_getName]] call ace_medical_fnc_addToLog;

//return:
false;
