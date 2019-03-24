#include "script_component.hpp"

[QGVAR(evh_needle), { _this call FUNC(burnsBandage_local) }] call CBA_fnc_addEventHandler;

missionNamespace setVariable [QGVAR(diagnostic), false];
