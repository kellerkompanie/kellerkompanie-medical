#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            GVAR(stretcher),
            GVAR(stretcher_bag)
        };
        weapons[] = { };
        magazines[] = { };
        requiredAddons[] = {
            "ace_medical",
            "cba_settings",
            "A3_Static_F"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgMoves.hpp"
#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
