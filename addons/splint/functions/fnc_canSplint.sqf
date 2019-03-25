#include "script_component.hpp"

params ["_target","_selection"];

private _hhpaab = missionNamespace getVariable ["ace_medical_healHitPointAfterAdvBandage",false];
private _enable = missionNamespace getVariable [QGVAR(enable),true];

if ( _hhpaab || !_enable ) exitWith { false };

private _hitPoint = call {
    if ( (toLower _selection) in ["hand_l","hand_r"] ) exitWith {"HitHands"};
    if ( (toLower _selection) in ["leg_l","leg_r"] ) exitWith {"HitLegs"};
    _selection
};

if ((_target getHitPointDamage _hitPoint) < 0.5) exitWith { false };

true
