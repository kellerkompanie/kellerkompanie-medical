#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            keko_painkillerItem,
            keko_X_AEDItem,
            keko_bloodBankCrate
        };
        weapons[] = {
            keko_painkiller,
            keko_bloodIV_O,
            keko_bloodIV_A,
            keko_bloodIV_B,
            keko_bloodIV_AB,
            keko_bloodIV_O_500,
            keko_bloodIV_A_500,
            keko_bloodIV_B_500,
            keko_bloodIV_AB_500,
            keko_bloodIV_O_250,
            keko_bloodIV_A_250,
            keko_bloodIV_B_250,
            keko_bloodIV_AB_250,
            keko_painkillerItem,
            keko_X_AED,
            keko_crossPanel
        };
        magazines[] = { };
        requiredAddons[] = {
            "ace_medical",
            "ace_dogtags",
            "cba_settings",
            "keko_medical_main",
            "keko_medical_cpr"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"
#include "ui\CrossPanel_Dialog.hpp"
