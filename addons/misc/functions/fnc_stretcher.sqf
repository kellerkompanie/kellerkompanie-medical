#include "script_component.hpp"
/*
 * Author: Katalam
 * Init function for stretcher
 *
 * Arguments:
 * 0: Stretcher <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call kat_aceMisc_fnc_stretcher;
 *
 * Public: No
 */

params [["_object", objNull, [objNull]]];

if !(_object isKindOf QGVAR(stretcher)) exitWith {false};

[_object] call ace_dragging_fnc_initObject;

[_object, 0, ["ACE_MainActions"],
    [QGVAR(disassemble), localize LSTRING(disassemble_stretcher_display), "", {
        params [["_object", objNull, [objNull]]];
        QGVAR(stretcher_bag) createVehicle (getPos _object);
        deleteVehicle _object;
    }, {
        params [["_object", objNull, [objNull]]];
        if ((count crew _object > 0) || !(isNull attachedTo _object)) exitWith {false};
        true;
    }] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

[_object, 0, ["ACE_MainActions"],
    [QGVAR(attach), localize LSTRING(disassemble_attach_display), "", {}, {true}, {[_target] call FUNC(attachStretcher)}] call ace_interact_menu_fnc_createAction
] call ace_interact_menu_fnc_addActionToObject;

true
