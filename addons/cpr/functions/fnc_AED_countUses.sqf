#include "script_component.hpp"

params ["_unit"];

_caller setVariable [QGVAR(aed_usedVar),0];
_caller setVariable [QGVAR(aed_items),[]];

_unit addEventHandler ["Take", {
    params ["_unit", "_container", "_item"];
    if (toLower _item isEqualTo "keko_aed") exitWith {
        private _items = getVariable [QGVAR(aed_items),[]];
        _items pushBack _usesMax;
        private _removedNils = _items arrayIntersect _items;
        _unit setVariable [QGVAR(aed_items),_removedNils];
    };
    nil
}];

_unit addEventHandler ["Put", {
    params ["_unit", "_container", "_item"];
    if (toLower _item isEqualTo "keko_aed") exitWith {
        private _items = getVariable [QGVAR(aed_items),[]];
        private _removedNils = _items arrayIntersect _items;
        _removedNils resize (count _removedNils)-1;
        _unit setVariable [QGVAR(aed_items),_removedNils];
    };
    nil
}];
