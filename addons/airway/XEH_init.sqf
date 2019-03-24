#include "script_component.hpp"

params ["_unit"];

if !(kat_aceAirway_enable) exitWith {};

//_unit addEventHandler ["HandleDamage", {_this call kat_aceAirway_fnc_handleDamage_airway;}];
_unit addEventHandler ["Respawn", {_this call kat_aceAirway_fnc_handleDie;}];
_unit addEventHandler ["Killed", {_this call kat_aceAirway_fnc_handleDie;}];
_unit call kat_aceAirway_fnc_init;
