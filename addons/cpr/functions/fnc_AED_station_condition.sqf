#include "script_component.hpp"

params ["_caller", "_target"];

private _items = missionNamespace getVariable [QGVAR(AED_stationType),"Land_Defibrillator_F"];
private _items_array = [_items,"CfgVehicles"] call FUNC(getList);

private _return = !([_target] call ace_common_fnc_isAwake) && {missionNamespace getVariable [QGVAR(enable),true] && count (_target nearEntities [_items_array, 5]) > 0 && _caller getVariable [QGVAR(usedAEDStation),false]};
_return
