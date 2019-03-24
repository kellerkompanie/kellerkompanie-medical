#include "script_component.hpp"

params ["_caller", "_target", "_selection"];

// Gets the ace medical num of selection
private _selectionNumber = [_selection] call ace_medical_fnc_selectionNameToNumber;

private _hitArray = [_selectionNumber] call FUNC(getHitSelection);
_hitArray params ["", "", "", "_string"];

private _bodyPartStatus = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
private _burnsBandages = _target getVariable [QGVAR(burnsBandages),[0,0,0,0,0,0]];

_bodyPartStatus set [_selectionNumber, 0];
_burnsBandages set [_selectionNumber, 1];

_target setVariable ["ace_medical_bodypartstatus", _bodyPartStatus ,true];
_target setVariable [QGVAR(burnsBandages), _burnsBandages, true];

private _nameCaller = [_caller, false, true] call ace_common_fnc_getName;
private _nameTarget = [_caller, false, true] call ace_common_fnc_getName;

[_target, "activity", localize LSTRING(applied), [_nameCaller, _nameTarget, _string]] call ace_medical_fnc_addToLog;
[_target, "activity_view", localize LSTRING(applied), [_nameCaller, _nameTarget, _string]] call ace_medical_fnc_addToLog;

true;
