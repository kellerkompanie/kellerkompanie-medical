#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

#define CBA_SETTINGS_CAT "KAT - ACE Circulation"

//Enable aceCirculation things
[
    "kat_aceCirculation_enable",
    "CHECKBOX",
    localize "STR_kat_aceCirculation_SETTING_ENABLE",
    CBA_SETTINGS_CAT,
    [true],
    true
] call CBA_Settings_fnc_init;

//Enable aceCirculation things

private _type = round random(3);

[
    "kat_aceCirculation_bloodgroup",
    "LIST",
    localize "STR_KAT_aceCirculation_client_bt",
    CBA_SETTINGS_CAT,
    [["A", "B", "AB", "O"], ["A", "B", "AB", "O"], _type],
    2,
    {
        player setVariable ["kat_aceCirculation_bloodtype", _this, true];
        player setVariable ["ace_dogtags_dogtagData", nil, true];
    }
] call CBA_Settings_fnc_init;

ADDON = true;
