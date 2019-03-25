#include "script_component.hpp"

params ["_caller", "_target"];

//count the total blood loss amounting from every wound the player has:
private _totalBloodLoss = 0;
{
    _totalBloodLoss = _totalBloodLoss + ((_x select 4) * (_x select 3));
} forEach (_target getVariable ["ace_medical_openWounds", []]);

//diagnostics:
[_caller,format ["the patient has a bloodloss of %1",_totalBloodLoss]] call FUNC(diag);

//return
_totalBloodLoss;
