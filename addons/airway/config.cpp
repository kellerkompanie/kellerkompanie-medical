#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            GVAR(guedelItem),
            GVAR(larynxItem),
            GVAR(accuvacItem),
            GVAR(vomit)
        };
        weapons[] = {
            GVAR(guedel),
            GVAR(larynx),
            GVAR(accuvac)
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

#include "CfgSounds.hpp"
#include "CfgHints.hpp"
#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
