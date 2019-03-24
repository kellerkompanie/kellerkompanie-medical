class CfgVehicles {
    class Item_Base_F;

    class KAT_PulseoximeterItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "$STR_kat_aceBreathing_Pulseoximeter_Desc_Short";
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_Pulseoximeter,1);
        };
    };

    class KAT_ChestSealItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "$STR_kat_aceBreathing_chestseal_display";
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_ChestSeal,1);
        };
    };

    class NATO_Box_Base;
        class ACE_medicalSupplyCrate: NATO_Box_Base {
            class TransportItems;
        };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(KAT_Pulseoximeter,3);
            MACRO_ADDITEM(KAT_ChestSeal,25);
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Torso {
                class ChestSeal {
                    displayName = $STR_kat_aceBreathing_pneumothorax_display;
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
                    displayName = $STR_kat_aceBreathing_Pulseoximeter_Display;
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
                class RemovePulseoximeter {
                    displayName = $STR_kat_aceBreathing_Pulseoximeter_Display_Remove;
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
                    displayName = $STR_kat_aceBreathing_Pulseoximeter_Display;
                    distance = 2.0;
                    condition = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
                class RemovePulseoximeter {
                    displayName = $STR_kat_aceBreathing_Pulseoximeter_Display_Remove;
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
                            displayName = $STR_kat_aceBreathing_pneumothorax_display;
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
                            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display;
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_l', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                        class RemovePulseoximeter {
                            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display_Remove;
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
                            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display;
                            distance = 2.0;
                            condition = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'hand_r', 'Pulseoximeter'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                        class RemovePulseoximeter {
                            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display_Remove;
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
