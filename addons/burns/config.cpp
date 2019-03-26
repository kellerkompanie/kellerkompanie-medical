#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            keko_sterileGauze,
            keko_sterileGauze_used
        };
        weapons[] = {
            keko_sterileGauze,
            keko_sterileGauze_used
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

#define EXCEPTIONS exceptions[] = {};

#define MACRO_CHECKACTION(LIMB) class CheckLimb: fieldDressing {\
    displayName = CSTRING(actionCheckLimbs);\
    condition = "[_player, _target, LIMB, 'CheckLimbs'] call ace_medical_fnc_canTreatCached";\
    statement = "[_player, _target, LIMB, 'CheckLimbs'] call ace_medical_fnc_treatment";\
    EXCEPTIONS\
    showDisabled = 0;\
    icon = "";\
};

#include "CfgEventHandlers.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "ACE_Medical_Actions.hpp"
#include "ACE_Medical_Advanced.hpp"
