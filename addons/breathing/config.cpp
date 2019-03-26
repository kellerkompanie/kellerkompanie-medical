#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            keko_pulseOximeterItem,
            keko_chestSealItem
        };
        weapons[] = {
            keko_pulseOximeter,
            keko_chestSeal
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "keko_medical_main",
            "keko_medical_airway",
            "keko_medical_circulation",
            "cba_settings"
        };
        author = "Schwaggot";
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgHints.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
