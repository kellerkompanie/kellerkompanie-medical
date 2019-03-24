#include "script_component.hpp"

params ["_caller", "_target", "_selection", "_treatment", "_item"];

// Execute burnsBandage input local to unit
if (local _target) then {
    // burnsBandage call
    [QGVAR(evh_burnsBandage), [_caller, _target, _selection]] call CBA_fnc_localEvent;
} else {
    // burnsBandage call
    [QGVAR(evh_burnsBandage), [_caller, _target, _selection], _target] call CBA_fnc_targetEvent;
};

true;
