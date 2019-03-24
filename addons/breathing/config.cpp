#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            QGVAR(PulseoximeterItem),
            QGVAR(ChestSealItem)
        };
        weapons[] = {
            QGVAR(Pulseoximeter),
            QGVAR(ChestSeal)
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "keko_medical_airway",
            "keko_medical_circulation",
            "cba_settings"
        };
        author = ECSTRING(common,Schwaggot);
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
