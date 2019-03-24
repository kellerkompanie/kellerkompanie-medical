#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "kat_aceDisability_ModuleBee",
            "kat_aceDisability_ModuleAllergical"
        };
        weapons[] = {};
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "cba_settings",
            "A3_Modules_F",
            "A3_Modules_F_Curator"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgFactionClasses.hpp"

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
