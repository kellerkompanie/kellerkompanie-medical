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
            "keko_medical_misc" // TODO add RHS USAF dependency
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
