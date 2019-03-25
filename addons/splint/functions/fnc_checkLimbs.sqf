#include "script_component.hpp"

params ["_caller","_target"];

private _genericMessages = [localize LSTRING(CHECKLIMBS_MESSAGE),[_target] call ace_common_fnc_getName];

if ( _target getHitPointDamage "HitLegs" < 0.5 ) then {
    _genericMessages pushBack (format [localize LSTRING(CHECKLIMBS_NOTHIT),localize LSTRING(LEGS)]);
} else {
    _genericMessages pushBack (format [localize LSTRING(CHECKLIMBS_HIT), localize LSTRING(LEGS)]);
};

if ( _target getHitPointDamage "HitHands" < 0.5 ) then {
    _genericMessages pushBack (format [localize LSTRING(CHECKLIMBS_NOTHIT),localize LSTRING(ARMS)]);
} else {
    _genericMessages pushBack (format [localize LSTRING(CHECKLIMBS_HIT),localize LSTRING(ARMS)]);
};

["ace_common_displayTextStructured", [_genericMessages, 3.0, _caller], [_caller]] call CBA_fnc_targetEvent;
