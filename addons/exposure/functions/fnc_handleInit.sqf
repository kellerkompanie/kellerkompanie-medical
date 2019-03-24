#include "script_component.hpp"
/*
 * Author: Katalam
 * Called when a unit is initialized via XEH_init
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_aceExposure_fnc_handleInit;
 *
 * Public: No
 */

params ["_unit"];

_unit call kat_aceExposure_fnc_init;
