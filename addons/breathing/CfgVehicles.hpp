class CfgVehicles {
    class Item_Base_F;

    class GVAR(PulseoximeterItem): Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= CSTRING(Pulseoximeter_Desc_Short);
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_Pulseoximeter,1);
        };
    };

    class GVAR(ChestSealItem): Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= CSTRING(chestseal_display);
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(GVAR(ChestSeal),1);
        };
    };

    class NATO_Box_Base;
        class ACE_medicalSupplyCrate: NATO_Box_Base {
            class TransportItems;
        };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(GVAR(Pulseoximeter),3);
            MACRO_ADDITEM(GVAR(ChestSeal),25);
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Torso {
                class ChestSeal {
                    displayName = CSTRING(pneumothorax_display);
                    distance = 2.0;
                    condition = "[_player, _target, 'body', 'ChestSeal'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'ChestSeal'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
            };
            class ACE_ArmLeft {
                class Pulseoximeter {
                    displayName = CSTRING(Pulseoximeter_Display);
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
                class RemovePulseoximeter {
                    displayName = CSTRING(Pulseoximeter_Display_Remove);
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_l', 'RemovePulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_l', 'RemovePulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
            };
            class ACE_ArmRight {
                class Pulseoximeter {
                    displayName = CSTRING(Pulseoximeter_Display);
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
                class RemovePulseoximeter {
                    displayName = CSTRING(Pulseoximeter_Display_Remove);
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_r', 'RemovePulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_r', 'RemovePulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
            };
            class ACE_MainActions {
                class Medical {
                    class ACE_Torso {
                        class ChestSeal {
                            displayName = CSTRING(pneumothorax_display);
                            distance = 2.0;
                            condition = "[_player, _target, 'body', 'ChestSeal'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'ChestSeal'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                    };
                    class ACE_ArmLeft {
                        class Pulseoximeter {
                            displayName = CSTRING(Pulseoximeter_Display);
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                        class RemovePulseoximeter {
                            displayName = CSTRING(Pulseoximeter_Display_Remove);
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_l', 'RemovePulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_l', 'RemovePulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                    };
                    class ACE_ArmRight {
                        class Pulseoximeter {
                            displayName = CSTRING(Pulseoximeter_Display);
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                        class RemovePulseoximeter {
                            displayName = CSTRING(Pulseoximeter_Display_Remove);
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_r', 'RemovePulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_r', 'RemovePulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                    };
                };
            };
        };
    };
};
