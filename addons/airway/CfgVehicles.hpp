class CfgVehicles {
    class Item_Base_F;

    class KAT_larynxItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "$STR_kat_aceAirway_Larynx_Display";
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_larynx,1);
        };
    };
    class KAT_guedelItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "$STR_kat_aceAirway_Guedel_Display";
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_guedel,1);
        };
    };
    class KAT_accuvacItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "Accuvac";
        author = "Katalam";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(KAT_accuvac,1);
        };
    };
    class BloodSplatter_01_Small_Old_F;
    class KAT_Vomit: BloodSplatter_01_Small_Old_F {
        displayName = $STR_kat_aceAirway_Vomit_Display;
        hiddenSelectionsTextures[] = {"kat_aceAirway\images\vomit.paa"};
    };

    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(KAT_larynx,15);
            MACRO_ADDITEM(KAT_guedel,15);
            MACRO_ADDITEM(KAT_accuvac,1);
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Head {
                class intubating {
                    displayName = "$STR_kat_aceAirway_intubating";
                    icon = "";
                    class Larynxtubus {
                        displayName = "$STR_kat_aceAirway_Larynx_Display";
                        distance = 2.0;
                        condition = "[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
                        statement = "[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
                        exceptions[] = {""};
                        showDisabled = 0;
                        icon = "\kat_aceAirway\images\larynx.paa";
                    };
                    class Guedeltubus: Larynxtubus {
                        displayName = "$STR_kat_aceAirway_Guedel_Display";
                        condition = "[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
                        statement = "[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
                        exceptions[] = {""};
                        icon = "\kat_aceAirway\images\guedel.paa";
                    };
                    class Overstretch: Larynxtubus {
                        displayName = "$STR_kat_aceAirway_overstretch";
                        condition = "[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_canTreatCached";
                        statement = "[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_treatment";
                        exceptions[] = {""};
                        icon = "";
                    };
                };
                class vacuum {
                    displayName = "$STR_kat_aceAirway_vacuum";
                    icon = "";
                    class Accuvac {
                        displayName = "Accuvac";
                        distance = 2.0;
                        condition = "[_player, _target, 'head', 'Accuvac'] call ace_medical_fnc_canTreatCached";
                        statement = "[_player, _target, 'head', 'Accuvac'] call ace_medical_fnc_treatment";
                        exceptions[] = {""};
                        showDisabled = 0;
                        icon = "\kat_aceAirway\images\accuvac.paa";
                    };
                    class TurnAround: Accuvac {
                        displayName = "$STR_kat_aceAirway_turnaround";
                        condition = "[_player, _target, 'head', 'TurnAround'] call ace_medical_fnc_canTreatCached";
                        statement = "[_player, _target, 'head', 'TurnAround'] call ace_medical_fnc_treatment";
                        exceptions[] = {""};
                        icon = "";
                    };
                };
                class CheckPulse;
                class CheckAirway: CheckPulse {
                    displayName = "$STR_kat_aceAirway_checkAirway";
                    condition = "[_player, _target, 'head', 'CheckAirway'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'head', 'CheckAirway'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    icon = "";
                };
            };
            class ACE_MainActions {
                class Medical {
                    class ACE_Head {
                        class intubating {
                            displayName = "$STR_kat_aceAirway_intubating";
                            icon = "";
                            class Larynxtubus {
                                displayName = "$STR_kat_aceAirway_Larynx_Display";
                                distance = 2.0;
                                condition = "[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_canTreatCached";
                                statement = "[_player, _target, 'head', 'Larynxtubus'] call ace_medical_fnc_treatment";
                                exceptions[] = {""};
                                showDisabled = 0;
                                icon = "\kat_aceAirway\images\larynx.paa";
                            };
                            class Guedeltubus: Larynxtubus {
                                displayName = "$STR_kat_aceAirway_Guedel_Display";
                                condition = "[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_canTreatCached";
                                statement = "[_player, _target, 'head', 'Guedeltubus'] call ace_medical_fnc_treatment";
                                exceptions[] = {""};
                                icon = "\kat_aceAirway\images\guedel.paa";
                            };
                            class Overstretch: Larynxtubus {
                                displayName = "$STR_kat_aceAirway_overstretch";
                                condition = "[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_canTreatCached";
                                statement = "[_player, _target, 'head', 'Overstretch'] call ace_medical_fnc_treatment";
                                exceptions[] = {""};
                                icon = "";
                            };
                        };
                        class vacuum {
                            displayName = "$STR_kat_aceAirway_vacuum";
                            icon = "";
                            class Accuvac {
                                displayName = "Accuvac";
                                distance = 2.0;
                                condition = "[_player, _target, 'head', 'Accuvac'] call ace_medical_fnc_canTreatCached";
                                statement = "[_player, _target, 'head', 'Accuvac'] call ace_medical_fnc_treatment";
                                exceptions[] = {""};
                                showDisabled = 0;
                                icon = "\kat_aceAirway\images\accuvac.paa";
                            };
                            class TurnAround: Accuvac {
                                displayName = "$STR_kat_aceAirway_turnaround";
                                condition = "[_player, _target, 'head', 'TurnAround'] call ace_medical_fnc_canTreatCached";
                                statement = "[_player, _target, 'head', 'TurnAround'] call ace_medical_fnc_treatment";
                                exceptions[] = {""};
                                icon = "";
                            };
                        };
                        class CheckPulse;
                        class CheckAirway: CheckPulse {
                            displayName = "$STR_kat_aceAirway_checkAirway";
                            condition = "[_player, _target, 'head', 'CheckAirway'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'head', 'CheckAirway'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            icon = "";
                        };
                    };
                };
            };
        };
    };
};
