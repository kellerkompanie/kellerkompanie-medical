class CfgVehicles {
    class Item_Base_F;

    class GVAR(burnsBandageItem): Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(displayName);
        author = "Schwaggot";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(burnsBandage),1);
        };
    };
    class GVAR(burnsBandageItem_used): GVAR(burnsBandageItem) {
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(displayNameUsed);
        class TransportItems {
            MACRO_ADDITEM(GVAR(burnsBandage_used), 1);
        };
    };

    //ace_medical_actions:
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            #include "ACE_Actions.hpp"
            class ACE_MainActions {
                class Medical {
                    #undef EXCEPTIONS
                    #define EXCEPTIONS exceptions[] = {"isNotInside"};
                    #include "ACE_Actions.hpp"
                };
            };
        };
        class ACE_SelfActions {
            class Medical {
                #include "ACE_Actions.hpp"
            };
        };
    };

    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(GVAR(burnsBandage), 20);
        };
    };
};
