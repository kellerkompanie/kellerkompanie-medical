#include "script_component.hpp"
/*
 * Author: Katalam
 * Initializes unit variables.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call kat_aceAirway_fnc_init;
 *
 * Public: No
 */

params ["_unit"];

// ace_medical_airwayCollapsed
// ace_medical_airwayOccluded
_unit setVariable ["kat_aceAirway_obstruction", false, true];
_unit setVariable ["kat_aceAirway_airway", false, true];
_unit setVariable ["kat_aceAirway_airway_item", "", true];
_unit setVariable ["kat_aceAirway_overstretch", false, true];
//_unit setVariable ["kat_aceAirway_swollen", false, true]; // useful for kat_aceDisability
//_unit setVariable ["kat_aceAirway_sound", false, true];
_unit setVariable ["kat_aceAirway_startTime", 0, true];
