class CfgVehicles {
    class Item_Base_F;

    class keko_splintItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(DISPLAYNAME);
        author = "[SeL] Belbo";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(keko_splint,1);
        };
    };
    class keko_splintItem_used: keko_splintItem {
        scope = 0;
        scopeCurator = 0;
        displayName = CSTRING(DISPLAYNAME_USED);
        class TransportItems {
            MACRO_ADDITEM(keko_splint_used,1);
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
            MACRO_ADDITEM(keko_splint,20);
        };
    };
};
