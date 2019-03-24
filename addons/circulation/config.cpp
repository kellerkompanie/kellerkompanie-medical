#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "KAT_PainkillerItem",
            "KAT_X_AEDItem",
            "KAT_medicalSupplyCrate"
        };
        weapons[] = {
            "KAT_Painkiller",
            "KAT_bloodIV_O",
            "KAT_bloodIV_A",
            "KAT_bloodIV_B",
            "KAT_bloodIV_AB",
            "KAT_bloodIV_O_500",
            "KAT_bloodIV_A_500",
            "KAT_bloodIV_B_500",
            "KAT_bloodIV_AB_500",
            "KAT_bloodIV_O_250",
            "KAT_bloodIV_A_250",
            "KAT_bloodIV_B_250",
            "KAT_bloodIV_AB_250",
            "KAT_Painkiller_Item",
            "KAT_X_AED",
            "KAT_CrossPanel"
        };
        magazines[] = {
            QGVAR(canteen)
        };
        requiredAddons[] = {
            "ace_medical",
            "ace_dogtags",
            "adv_aceCPR",
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

#define MACRO_ADDMAGAZINE(MAGAZINE,COUNT) class _xx_##MAGAZINE { \
    magazine = #MAGAZINE; \
    count = COUNT; \
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"
#include "ui/KAT_CrossPanel_Dialog.hpp"
