#include "script_component.hpp"

waitUntil {!isNil QGVAR(AED_stationType) && time > 1};

private _items = missionNamespace getVariable [QGVAR(AED_stationType),"""Land_Defibrillator_F"""];
private _items_array = [_items,"CfgVehicles"] call FUNC(getList);
private _useOwnObject = {_x == "Land_Defibrillator_F"} count _items_array > 0;
if ( _useOwnObject ) then {
    _items_array pushBackUnique "keko_AEDItem";
};

//create action
GVAR(aed_stationAction) = [
    QGVAR(AED_stationary),
    localize LSTRING(AED_STATION_ACTION),
    QPATHTOF(ui\defib_action.paa),
    {
        params ["_target","_caller"];
        [_caller,_target] call FUNC(useAEDStation)
    },
    {
        params ["","_caller"];
        missionNamespace getVariable [QGVAR(enable),true] && {!(_caller getVariable [QGVAR(usedAEDStation),false]) && (_caller getVariable ['ace_medical_medicClass',0]) > 0}
    },
    nil,[],[0,0,0]
] call ace_interact_menu_fnc_createAction;

//adding the action to all:
{
    [_x , 0, ["ACE_MainActions"], GVAR(aed_stationAction),false] call ace_interact_menu_fnc_addActionToClass;
} forEach _items_array;

//adding a put evh, so carryable AED get's action as well:
if ( hasInterface && _useOwnObject ) then {
    GVAR(EVH_aed_station) = player addEventHandler ["Put", {
        params ["", "_container", "_item"];
        if (typeOf _container == "GroundWeaponHolder" && _item == "keko_AED") exitWith {
            [_container,0,["ACE_MainActions", QGVAR(AED_stationary)]] call ace_interact_menu_fnc_removeActionFromObject;

            [_container , 0, ["ACE_MainActions"], GVAR(aed_stationAction)] call ace_interact_menu_fnc_addActionToObject;
            _container addEventHandler ["ContainerClosed", {
                params ["_container"];
                if ( {_x == "keko_AED"} count (itemCargo _container) isEqualTo 0 ) exitWith {
                    [_container,0,["ACE_MainActions", QGVAR(AED_stationary)]] call ace_interact_menu_fnc_removeActionFromObject;
                };
            }];
        };
    }];
};

nil
