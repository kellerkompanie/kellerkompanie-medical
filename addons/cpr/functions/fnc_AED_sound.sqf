#include "script_component.hpp"

(_this select 0) params ["_caller", "_target"];

if !(_caller getVariable [QGVAR(soundplayed),false]) then {
    _caller setVariable [QGVAR(soundplayed),true];
    (_this select 0) spawn {
        params ["_caller", "_target"];
        sleep 5.4;
        playsound3d [QPATHTOF(sounds\defib.ogg), _caller,false,getPosASL _caller,8,1,15];
        sleep 3;
        _caller setVariable [QGVAR(soundplayed),false];
    };
};

//return:
private _return = if !( [_target] call ace_common_fnc_isAwake ) then {true} else {false};
_return;
