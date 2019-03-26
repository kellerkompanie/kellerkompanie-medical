#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            keko_AEDItem
        };
        weapons[] = {
            keko_AED
        };
        magazines[] = {};
        requiredAddons[] = {
            "keko_medical_main",
            "ace_medical",
            "cba_settings"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#define MACRO_AED_STATION class ACE_Actions { \
    class ACE_MainActions { \
        condition = "true"; \
        displayName = "Interactions"; \
        distance = 2; \
        selection = ""; \
        class GVAR(aed_station) { \
            priority = -1; \
            showDisabled = 0; \
            displayName = CSTRING(AED_STATION_ACTION); \
            condition = QUOTE(missionNamespace getVariable [ARR_2(QQGVAR(enable),true)] && !(_player getVariable [ARR_2(QQGVAR(usedAEDStation),false)]) && (_player getVariable [ARR_2('ace_medical_medicClass',0)]) > 0); \
            statement = QUOTE([ARR_2(_player,_target)] call FUNC(useAEDStation)); \
            exceptions[] = {"isNotInside"}; \
            icon = QPATHTOF(ui\defib_action.paa); \
        };\
    };\
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
