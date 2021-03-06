#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            keko_guedelItem,
            keko_larynxItem,
            keko_accuvacItem,
            keko_vomit
        };
        weapons[] = {
            keko_guedel,
            keko_larynx,
            keko_accuvac
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "cba_settings",
            "keko_medical_main"
        };
        author = "Schwaggot";
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
