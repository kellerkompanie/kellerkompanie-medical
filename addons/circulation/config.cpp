#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            GVAR(PainkillerItem),
            GVAR(X_AEDItem),
            GVAR(medicalSupplyCrate)
        };
        weapons[] = {
            GVAR(Painkiller),
            GVAR(bloodIV_O),
            GVAR(bloodIV_A),
            GVAR(bloodIV_B),
            GVAR(bloodIV_AB),
            GVAR(bloodIV_O_500),
            GVAR(bloodIV_A_500),
            GVAR(bloodIV_B_500),
            GVAR(bloodIV_AB_500),
            GVAR(bloodIV_O_250),
            GVAR(bloodIV_A_250),
            GVAR(bloodIV_B_250),
            GVAR(bloodIV_AB_250),
            GVAR(Painkiller_Item),
            GVAR(X_AED),
            GVAR(CrossPanel)
        };
        magazines[] = { };
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

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgSounds.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"
#include "ui\CrossPanel_Dialog.hpp"
