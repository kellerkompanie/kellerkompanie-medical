#include "script_component.hpp"

params ["_selectionNumber", "_selection"];

private _return = call {
    if ( _selectionNumber isEqualTo 2 ) exitWith { ["hithands","hitleftarm","hand_l",localize LSTRING(ARM)] };
    if ( _selectionNumber isEqualTo 3 ) exitWith { ["hithands","hitrightarm","hand_r",localize LSTRING(ARM)] };
    if ( _selectionNumber isEqualTo 4 ) exitWith { ["hitlegs","hitleftleg","leg_l",localize LSTRING(LEG)] };
    if ( _selectionNumber isEqualTo 5 ) exitWith { ["hitlegs","hitrightleg","leg_r",localize LSTRING(LEG)] };
    ["", "", _selection]
};

_return
