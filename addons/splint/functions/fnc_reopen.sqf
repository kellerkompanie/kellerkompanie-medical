#include "script_component.hpp"

private _handle = _this spawn {

    params ["_caller", "_target", "_oldBPS", "_oldGetHitPoint", "_oldGetHitPoint_BP", "_hitPointArray", "_selectionNumber"];

    _hitPointArray params ["_hitpoint", "_bodyPart"];

    private _chance_medic = (missionNamespace getVariable [QGVAR(reopenChance_medic), 0]) min 100;
    private _chance_regular = (missionNamespace getVariable [QGVAR(reopenChance_regular), 0]) min 100;
    private _isMedic = _caller getVariable ["ACE_medical_medicClass", 0];
    private _chance = if ( _isMedic > 0 ) then { _chance_medic } else { _chance_regular };
    private _reuse = (missionNamespace getVariable [QGVAR(reuseChance),80]) min 100;
    private _reopenTime = missionNamespace getVariable [QGVAR(reopenTime),600];
    private _time = (_reopenTime + ( round(random 60)-30 )) max 30;

    if ( ceil random 100 <= _chance ) exitWith {
        //make sure we exit, if PAK is used:
        _target setVariable [QGVAR(reopenUndo), false];
        private _pakHandle = ["ace_medical_treatmentAdvanced_fullHealLocal", {
            params ["", "_target"];
            if (local _target) exitWith {
                _target setVariable [QGVAR(reopenUndo), true];
                _target setVariable [QGVAR(splints), [0,0,0,0,0,0]];
            };
        }] call CBA_fnc_addEventHandler;

        sleep _time;

        ["ace_medical_treatmentAdvanced_fullHealLocal", _pakHandle] call CBA_fnc_removeEventHandler;
        if ( _target getVariable [QGVAR(reopenUndo),false] || (_target getVariable [QGVAR(splints),[0,0,0,0,0,0]]) isEqualTo [0,0,0,0,0,0] ) exitWith {
            _target setVariable [QGVAR(splints), [0,0,0,0,0,0]];
            nil
        };

        private _bps = _target getVariable ["ace_medical_bodypartstatus",[0,0,0,0,0,0]];
        _bps set [_selectionNumber,_oldBPS];
        _target setVariable ["ace_medical_bodypartstatus",_bps,true];

        private _splints = _target getVariable [QGVAR(splints),[0,0,0,0,0,0]];
        _splints set [_selectionNumber,0];
        _target setVariable [QGVAR(splints),_splints,true];

        [_target, _hitpoint, _oldGetHitPoint,false] call ace_medical_fnc_setHitPointDamage;
        [_target, _bodyPart, _oldGetHitPoint_BP,false] call ace_medical_fnc_setHitPointDamage;

        if ( ceil random 100 <= _reuse ) then {
            [localize LSTRING(REOPEN_HINT_LOST), QPATHTOF(ui\splint.paa), nil, _target, 2.7] call ace_common_fnc_displayTextPicture;
        } else {
            [localize LSTRING(REOPEN_HINT), QPATHTOF(ui\splint.paa), nil, _target, 2.7] call ace_common_fnc_displayTextPicture;
            _target addItem "keko_splint";
        };

        [_target, "activity", localize LSTRING(ACESPLINT_REOPEN), []] call ace_medical_fnc_addToLog;
        [_target, "activity_view", localize LSTRING(ACESPLINT_REOPEN), []] call ace_medical_fnc_addToLog;
    };
};

_handle
