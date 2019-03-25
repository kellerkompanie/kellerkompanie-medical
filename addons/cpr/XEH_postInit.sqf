#include "script_component.hpp"

//register the eventhandlers:
//evh for the CPR:
[QGVAR(evh_CPR_local), { _this call FUNC(CPR_local) }] call CBA_fnc_addEventHandler;
//evh for the addition of revive time:
[QGVAR(evh_addTime), { _this call FUNC(addTime) }] call CBA_fnc_addEventHandler;
//evh for showing the pulse after AED:
[QGVAR(evh_showPulse), { _this call ace_medical_fnc_actionCheckPulse }] call CBA_fnc_addEventHandler;
//evh for the AED:
[QGVAR(evh_AED_local), { _this call FUNC(AED_local) }] call CBA_fnc_addEventHandler;

//for diagnostic purposes only:
[QGVAR(evh_log), { diag_Log (format ["%1", _this]) }] call CBA_fnc_addEventHandler;

GVAR(diag) = false;
