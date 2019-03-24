#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "KAT - ACE Breathing"

//Enable aceBreathing
[
    "kat_aceBreathing_enable",
    "CHECKBOX",
    localize "STR_kat_aceBreathing_SETTING_ENABLE",
    CBA_SETTINGS_CAT,
    [true],
    true
] call CBA_Settings_fnc_init;

//Enable aceBreathing death timer for airway injuries
[
    "kat_aceBreathing_death_timer_enable",
    "CHECKBOX",
    localize "kat_aceBreathing_SETTING_death_timer_enable",
    CBA_SETTINGS_CAT,
    [false],
    true
] call CBA_Settings_fnc_init;

// aceBreathing SpO2 add & remove value small
[
    "kat_aceBreathing_spo2_small_value",
    "SLIDER",
    localize "STR_kat_aceBreathing_SETTING_Value_Before",
    CBA_SETTINGS_CAT,
    [0, 100, 2, 0],
    true
] call CBA_Settings_fnc_init;

// aceBreathing SpO2 add % remove value big
[
    "kat_aceBreathing_spo2_big_value",
    "SLIDER",
    localize "STR_kat_aceBreathing_SETTING_Value_After",
    CBA_SETTINGS_CAT,
    [0, 100, 5, 0],
    true
] call CBA_Settings_fnc_init;

// aceBreathing probability for a pneumothorax
// a pneumothorax is the presence of air or gas in the cavity between the lungs and the chest wall
[
    "kat_aceBreathing_pneumothorax",
    "SLIDER",
    localize "STR_kat_aceBreathing_SETTING_pneumothorax",
    CBA_SETTINGS_CAT,
    [0, 100, 0, 0],
    true
] call CBA_Settings_fnc_init;

ADDON = true;
