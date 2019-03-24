#include "script_component.hpp"
/*
 * Author: Katalam
 * Remove clothes function
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, cursorTarget] call kat_aceDisability_fnc_treatmentAdvanced_clothesLocal;
 *
 * Public: No
 */

params ["_player", "_target"];

// ground container
private _a = getMagazineCargo uniformContainer _target; // gets uniform cargo
private _d = getItemCargo uniformContainer _target; // different between items and magazines

_a params ["_itemsMagazine", "_countsMagazine"];
_d params ["_itemsItem", "_countsItem"];

private _items = _itemsMagazine + _itemsItem; // adds both arrays
private _counts = _countsMagazine + _countsItem;

private _groundHolder = createVehicle ["WeaponHolderSimulated", _target, [], 0.5, "CAN_COLLIDE"];

{
  private _b = _items select _forEachIndex;
  private _c = _counts select _forEachIndex;
  _groundHolder addItemCargoGlobal [_b, _c];
} forEach _items;

// condition for trachea cut, ther will be NO trachea cut without a complete body check
_target setVariable ["kat_aceDisability_checked", true, true];

// message output
private _string = "STR_kat_aceDisability_Action_Message_1_nothing";
switch ((_target getVariable "kat_aceDisability_allergicalreaction") select 0) do {
  case "HoneyBee": {
    _string = "STR_kat_aceDisability_Action_Message_1_bee";
  };
  default {};
};

// medical menu output
[_target, "quick_view", localize "STR_kat_aceDisability_cut_log", [[_player] call ace_common_fnc_getName, localize _string]] call ace_medical_fnc_addToLog;

// player hint
private _message = format [localize "STR_kat_aceDisability_Action_Message", localize _string];
[_message, 2, _player] call ace_common_fnc_displayTextStructured;

// remove uniform is there is one
if !(uniform _target isEqualTo "") then {
  removeUniform _target;
};
