class cfgVehicles {
    class Item_Base_F;

    class keko_AEDItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(AED_DISPLAYNAME);
        author = "[SeL] Belbo";
        vehicleClass = "Items";
        model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        class TransportItems {
            MACRO_ADDITEM(keko_AED,1);
        };
    };

    //ace_medical_actions:
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Torso {
                class CPR;
                class GVAR(AED): CPR {
                    displayName = CSTRING(AED_ACTION);
                    condition = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator')] call ace_medical_fnc_canTreatCached && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
                    statement = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator')] call ace_medical_fnc_treatment);
                    exceptions[] = {""};
                    icon = QPATHTOF(ui\defib_action.paa);
                };
                class GVAR(AED_station): GVAR(AED) {
                    condition = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator_station')] call ace_medical_fnc_canTreatCached && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
                    statement = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator_station')] call ace_medical_fnc_treatment);
                };
            };
            class ACE_MainActions {
                class Medical {
                    class ACE_Torso {
                        class CPR;
                        class GVAR(AED): CPR {
                            displayName = CSTRING(AED_ACTION);
                            condition = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator')] call ace_medical_fnc_canTreatCached && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
                            statement = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator')] call ace_medical_fnc_treatment);
                            exceptions[] = {"isNotInside"};
                            icon = QPATHTOF(ui\defib_action.paa);
                        };
                        class GVAR(AED_station): GVAR(AED) {
                            condition = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator_station')] call ace_medical_fnc_canTreatCached && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
                            statement = QUOTE([ARR_4(_player, _target, 'body', 'Defibrillator_station')] call ace_medical_fnc_treatment);
                        };
                    };
                };
            };
        };
    };

    class Items_base_F;
    class Land_Defibrillator_F: Items_base_F {
        //MACRO_AED_STATION
        ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0,1,1};
        ace_dragging_carryDirection = 270;
        ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
    };

    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(keko_AED,1);
        };
    };
};
