#include "script_component.hpp"

params ["_caller","_target","_selection"];

//execute custom splint local to the unit:
call {
    if (local _target) exitWith {
        //splint call:
        [QGVAR(evh_splint), [_caller, _target, _selection]] call CBA_fnc_localEvent;
    };

    //splint call:
    [QGVAR(evh_splint), [_caller, _target, _selection], _target] call CBA_fnc_targetEvent;
};

nil
