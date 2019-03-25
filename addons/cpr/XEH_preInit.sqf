#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;


#define CBA_SETTINGS_CAT "Kellerkompanie Medical: CPR"

GVAR(propabilities) = [40,15,5,85];

[
    QGVAR(enable),
    "CHECKBOX",
    localize LSTRING(SETTING_ENABLE),
    CBA_SETTINGS_CAT,
    [true],
    true
] call CBA_Settings_fnc_init;

//Added time with CPR
[
    QGVAR(addTime),
    "SLIDER",
    localize LSTRING(SETTING_ADDTIME),
    CBA_SETTINGS_CAT,
    [15,40,20,0],
    true
] call CBA_Settings_fnc_init;

//CPR possible until
[
    QGVAR(maxTime),
    "SLIDER",
    localize LSTRING(SETTING_MAXTIME),
    CBA_SETTINGS_CAT,
    [0,3600,1200,0],
    true
] call CBA_Settings_fnc_init;

//Chance for medicClass == 2
[
    QGVAR(chance_2),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_2),
    CBA_SETTINGS_CAT,
    [0,100,40,0],
    true,
    {
        params ["_value"];
        GVAR(probabilities) set [0,round _value];
    }
] call CBA_Settings_fnc_init;

//Chance for medicClass == 1
[
    QGVAR(chance_1),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_1),
    CBA_SETTINGS_CAT,
    [0,100,15,0],
    true,
    {
        params ["_value"];
        GVAR(probabilities) set [1,round _value];
    }
] call CBA_Settings_fnc_init;

//Chance for medicClass == 0
[
    QGVAR(chance_0),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_0),
    CBA_SETTINGS_CAT,
    [0,100,5,0],
    true,
    {
        params ["_value"];
        GVAR(probabilities) set [2, round _value];
    }
] call CBA_Settings_fnc_init;

//Chance for AED
[
    QGVAR(chance_aed),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_AED),
    CBA_SETTINGS_CAT,
    [0,100,85,0],
    true,
    {
        params ["_value"];
        GVAR(probabilities) set [3, round _value];
    }
] call CBA_Settings_fnc_init;

//location for AED:
[
    QGVAR(useLocation_AED),
    "LIST",
    [localize LSTRING(SETTING_LOCATION_AED), localize LSTRING(SETTING_LOCATION_AED_DESCRIPTION)],
    CBA_SETTINGS_CAT,
    [
        [
            0,
            1,
            2,
            3
        ],
        [
            "STR_ACE_Medical_AdvancedMedicalSettings_anywhere",
            "STR_ACE_Medical_AdvancedMedicalSettings_vehicle",
            "STR_ACE_Medical_AdvancedMedicalSettings_facility",
            "STR_ACE_Medical_AdvancedMedicalSettings_vehicleAndFacility"
        ],
        0
    ],
    true
] call CBA_Settings_fnc_init;

//stationary AED objects:
[
    QGVAR(AED_stationType),
    "EDITBOX",
    [localize LSTRING(SETTING_STATION), localize LSTRING(SETTING_STATION_DESCRIPTION)],
    CBA_SETTINGS_CAT,
    """Land_Defibrillator_F""",
    true
] call CBA_Settings_fnc_init;

ADDON = true;
