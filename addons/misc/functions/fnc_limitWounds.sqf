#include "script_component.hpp"
/*
 * Author: Schwaggot EDIT: Katalam
 * Will limit the wounds for the given player for realistic treatment.
 *
 * Arguments:
 * 0: Player <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_aceMisc_fnc_limitWounds;
 *
 * Public: Yes
 */

params [["_unit", objNull, [objNull]]];
if (!local _unit) exitWith {};

switch (true) do {
    case (isNull _unit): {};
    case (!alive _unit): {};
    default {
        // Get the open wounds for this unit
        private _numOpenWounds = [_unit] call kat_aceMisc_fnc_getNumOpenWounds;

        while {_numOpenWounds > 5} do {
            [_unit] call kat_aceMisc_fnc_bandageRandomWound;
            _numOpenWounds = [_unit] call kat_aceMisc_fnc_getNumOpenWounds;
        };
    };
};
