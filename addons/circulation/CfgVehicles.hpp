class CfgVehicles {
    class WeaponHolder_Single_limited_item_F;
    class adv_aceCPR_AEDItem;
    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
        class TransportMagazines;
    };

    class KAT_PainkillerItem: WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName= "$STR_KAT_aceCirculation_Painkillers_Box_Display";
        author = "Katalam";
        vehicleClass = "Magazines";
        class TransportItems {
            MACRO_ADDITEM(KAT_Painkiller,1);
        };
    };
    class KAT_X_AEDItem: adv_aceCPR_AEDItem {
        scope = 2;
        scopeCurator = 2;
        displayName = "$STR_KAT_aceCirculation_X_Display";
        author = "Katalam";
        class TransportItems {
            MACRO_ADDITEM(KAT_X_AED,1);
        };
    };



    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(KAT_X_AED,1);
        };
        class TransportMagazines: TransportMagazines {
            MACRO_ADDMAGAZINE(KAT_Painkiller,10);
        };
    };
    class KAT_medicalSupplyCrate: ACE_medicalSupplyCrate {
        displayName = $STR_KAT_aceCirculation_bloodbank;
        class TransportItems: TransportItems {
            MACRO_ADDITEM(KAT_CrossPanel,5);
            MACRO_ADDITEM(KAT_bloodIV_O,5);
            MACRO_ADDITEM(KAT_bloodIV_A,10);
            MACRO_ADDITEM(KAT_bloodIV_B,10);
            MACRO_ADDITEM(KAT_bloodIV_AB,10);
            MACRO_ADDITEM(KAT_bloodIV_O_500,5);
            MACRO_ADDITEM(KAT_bloodIV_A_500,10);
            MACRO_ADDITEM(KAT_bloodIV_B_500,10);
            MACRO_ADDITEM(KAT_bloodIV_AB_500,10);
            MACRO_ADDITEM(KAT_bloodIV_O_250,5);
            MACRO_ADDITEM(KAT_bloodIV_A_250,10);
            MACRO_ADDITEM(KAT_bloodIV_B_250,10);
            MACRO_ADDITEM(KAT_bloodIV_AB_250,10);
        };
    };

    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Dogtag {
                condition = "[_player, _target] call ace_dogtags_fnc_canCheckDogtag";
            };
            class ACE_Head {
                class CheckBloodPressure {}; // Remove the ability to check blood pressure at the head
                class Painkillers {
                    displayName = "$STR_KAT_aceCirculation_Inject_Box_Painkillers";
                    condition = "('KAT_Painkiller' in (magazines _player) || 'KAT_Painkiller' in (magazines _target))";
                    statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                    showDisabled = 0;
                    exceptions[] = {"isNotSitting"};
                    icon = "kat_aceCirculation\images\icon_painkillers_action.paa";
                };
            };
            class ACE_Torso {
                class CPR;
                class KAT_X_AED: CPR {
                    displayName = $STR_KAT_aceCirculation_X_Action_Use;
                    condition = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    icon = "kat_aceCirculation\images\X_Series-Device_W.paa";
                };
                class KAT_R_X_AED: CPR {
                    displayName = $STR_KAT_aceCirculation_X_Action_Remove;
                    condition = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    icon = "kat_aceCirculation\images\X_Series-Device_W.paa"; // this is ugly xD should be changed
                };
            };
            class ACE_ArmLeft {
                #include "Blood_ArmL.hpp"
            };
            class ACE_ArmRight {
                #include "Blood_ArmR.hpp"
            };
            class ACE_LegLeft {
                #include "Blood_LegL.hpp"
            };
            class ACE_LegRight {
                #include "Blood_LegR.hpp"
            };
            class ACE_MainActions {
                class Medical {
                    class ACE_Head {
                        class CheckBloodPressure {}; // Remove the ability to check blood pressure at the head
                        class Painkillers {
                            displayName = "$STR_KAT_aceCirculation_Inject_Box_Painkillers";
                            condition = "('KAT_Painkiller' in (magazines _player) || 'KAT_Painkiller' in (magazines _target))";
                            statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                            showDisabled = 0;
                            exceptions[] = {"isNotSitting"};
                            icon = "kat_aceCirculation\images\icon_painkillers_action.paa";
                        };
                    };
                    class ACE_Torso {
                        class CPR;
                        class KAT_X_AED: CPR {
                            displayName = $STR_KAT_aceCirculation_X_Action_Use;
                            condition = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            icon = "kat_aceCirculation\images\X_Series-Device_W.paa";
                        };
                        class KAT_R_X_AED: CPR {
                            displayName = $STR_KAT_aceCirculation_X_Action_Remove;
                            condition = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            icon = "kat_aceCirculation\images\X_Series-Device_W.paa";
                        };
                    };
                    class ACE_ArmLeft {
                        #include "Blood_ArmL.hpp"
                    };
                    class ACE_ArmRight {
                        #include "Blood_ArmR.hpp"
                    };
                    class ACE_LegLeft {
                        #include "Blood_LegL.hpp"
                    };
                    class ACE_LegRight {
                        #include "Blood_LegR.hpp"
                    };
                };
            };
        };
        class ACE_SelfActions {
            class Medical {
                class ACE_Head {
                    class CheckBloodPressure {};
                    class Painkillers {
                        displayName = "$STR_KAT_aceCirculation_Inject_Box_Painkillers";
                        condition = "'KAT_Painkiller' in (magazines _player)";
                        statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                        showDisabled = 0;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        icon = "kat_aceCirculation\images\icon_painkillers_action.paa";
                    };
                };
            };
            class ACE_Equipment {
                class removeSound {
                    displayName = "$STR_KAT_aceCirculation_X_Action_removeSound";
                    condition = "'KAT_X_AED' in (items _player) && !((_player getVariable 'kat_aceCirculation_X_sound1') isEqualTo '')";
                    statement = "_player setVariable ['kat_aceCirculation_X_sound1', '', true]; _player setVariable ['kat_aceCirculation_X_sound2', '', true];";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
                class addSound {
                    displayName = "$STR_KAT_aceCirculation_X_Action_addSound";
                    condition = "'KAT_X_AED' in (items _player) && ((_player getVariable 'kat_aceCirculation_X_sound1') isEqualTo '')";
                    statement = "_player setVariable ['kat_aceCirculation_X_sound1', 'kat_aceCirculation\sounds\noheartrate.wav', true]; _player setVariable ['kat_aceCirculation_X_sound2', 'kat_aceCirculation\sounds\heartrate.wav', true];";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
                class openCrossPanel {
                    displayName = "$STR_KAT_aceCirculation_open_crosspanel";
                    condition = "('KAT_CrossPanel' in (uniformItems _player)) || ('KAT_CrossPanel' in (vestItems _player))";
                    statement = "createDialog 'KAT_CrossPanel_Dialog'";
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
            };
        };
    };
};
