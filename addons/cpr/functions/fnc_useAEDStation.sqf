#include "script_component.hpp"

params ["_caller", "_target"];

[_caller, _target] spawn {
    params ["_caller", "_target"];

    if !(_caller getVariable [QGVAR(usedAEDStation),false]) then {
        sleep 1;

        playsound3d [QPATHTOF(sounds\load.ogg), _target, false, getPosASL _target, 8, 1, 15];

        _caller setVariable [QGVAR(usedAEDStation), true];
        [localize LSTRING(AED_STATION_HINT_ON), 2] call ace_common_fnc_displayTextStructured;

        sleep 12;

        private _animState = toLower (animationState _caller);
        if ( _animState in ["ainvpknlmstpsnonwnondnon_medic3", "ainvpknlmstpsnonwnondnon_medicend"] ) exitWith {};
        if ( _caller getVariable QGVAR(usedAEDStation) ) then {
            _caller setVariable [QGVAR(usedAEDStation), false];
            playsound3d [QPATHTOF(sounds\fuse.ogg), _target, false, getPosASL _target, 8, 1, 15];
            [localize LSTRING(AED_STATION_HINT_OFF), 2] call ace_common_fnc_displayTextStructured;
        };
    };
};

nil
