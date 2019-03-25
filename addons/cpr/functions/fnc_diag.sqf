#include "script_component.hpp"

params [
    "_target"
    ,"_log"
];

//exit if diagnostics is not activated:
if !(missionNamespace getVariable [QGVAR(diag),false]) exitWith {false};

//log event local to the caller:
private _str = format ["keko_medical_cpr - %1",_log];
systemChat _str;
if !(player diarySubjectExists QGVAR(log)) then {
    player createDiarySubject [QGVAR(log),"Kellerkompanie Medical: CPR"];
};
player createDiaryRecord [QGVAR(log), ["Log", _str]];
call {
    if (local _target) exitWith {
        [QGVAR(evh_log), [_str]] call CBA_fnc_localEvent;
    };
    [QGVAR(evh_log), [_str]] call CBA_fnc_localEvent;
    [QGVAR(evh_log), [_str], _target] call CBA_fnc_targetEvent;
};

true;
