#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "KAT_guedelItem",
            "KAT_larynxItem",
            "KAT_accuvacItem",
            "KAT_Vomit"
        };
        weapons[] = {
            "KAT_guedel",
            "KAT_larynx",
            "KAT_accuvac"
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "cba_settings"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};

#include "CfgSounds.hpp"
#include "CfgHints.hpp"
#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
