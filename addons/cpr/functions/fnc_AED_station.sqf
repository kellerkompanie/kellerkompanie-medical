#include "script_component.hpp"

params ["_caller"];

playsound3d [QPATHTOF(sounds\bump.ogg), _caller,false,getPosASL _caller,8,1,15];

_this call FUNC(AED_action);

_caller setVariable [QGVAR(usedAEDStation), false];

nil
