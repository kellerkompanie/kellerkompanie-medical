#include "script_component.hpp"
/*
 * Author: Katalam
 * CBA Events function
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * call kat_aceBreathing_fnc_events;
 *
 * Public: No
 */

["treatmentPulseoximeter", {_this call kat_aceBreathing_fnc_treatmentAdvanced_pulseoximeterLocal}] call CBA_fnc_addEventHandler;
["treatmentChestSeal", {_this call kat_aceBreathing_fnc_treatmentAdvanced_chestSealLocal}] call CBA_fnc_addEventHandler;
["handleBreathing", {_this call kat_aceBreathing_fnc_handleBreathing}] call CBA_fnc_addEventHandler;
