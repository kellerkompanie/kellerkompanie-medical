#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

//Reopen Chance
[
    QGVAR(enable),
    "CHECKBOX",
    localize LSTRING(SETTING_ENABLE),
    CBA_SETTINGS_CAT,
    [true],
    true
] call CBA_Settings_fnc_init;

//Patient Condition
[
    QGVAR(patientCondition),
    "LIST",
    localize LSTRING(SETTING_PATIENT_CONDITION),
    CBA_SETTINGS_CAT,
    [
        [
            0,
            1
        ],
        [
            LSTRING(SETTING_PATIENT_CONDITION_NO),
            LSTRING(SETTING_PATIENT_CONDITION_YES)
        ],
        1
    ],
    true
] call CBA_Settings_fnc_init;

//Reopen Chance (MEDICS)
[
    QGVAR(reopenChance_medic),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_MED),
    CBA_SETTINGS_CAT,
    [0,100,0,0],
    true
] call CBA_Settings_fnc_init;

//Reopen Chance (REGULAR)
[
    QGVAR(reopenChance_regular),
    "SLIDER",
    localize LSTRING(SETTING_CHANCE_REG),
    CBA_SETTINGS_CAT,
    [0,100,30,0],
    true
] call CBA_Settings_fnc_init;

//Reopen Time
[
    QGVAR(reopenTime),
    "SLIDER",
    localize LSTRING(SETTING_TIME),
    CBA_SETTINGS_CAT,
    [30,1200,600,0],
    true
] call CBA_Settings_fnc_init;

//Reuse Chance
[
    QGVAR(reuseChance),
    "SLIDER",
    localize LSTRING(SETTING_REUSE),
    CBA_SETTINGS_CAT,
    [0,100,80,0],
    true
] call CBA_Settings_fnc_init;

ADDON = true;
