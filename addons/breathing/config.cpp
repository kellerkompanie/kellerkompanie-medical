#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "KAT_PulseoximeterItem",
            "KAT_ChestSealItem"
        };
        weapons[] = {
            "KAT_Pulseoximeter",
            "KAT_ChestSeal"
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "kat_aceAirway",
            "kat_aceCirculation",
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

#include "CfgHints.hpp"
#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
