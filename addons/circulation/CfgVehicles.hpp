class CfgVehicles {
    class WeaponHolder_Single_limited_item_F;
    class keko_AEDItem;
    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
        class TransportMagazines;
    };

    class keko_painkillerItem: WeaponHolder_Single_limited_item_F {
        scope = 2;
        scopeCurator = 2;
        displayName= CSTRING(Painkillers_Box_Display);
        author = "Katalam";
        vehicleClass = "Magazines";
        class TransportItems {
            MACRO_ADDITEM(keko_painkiller,1);
        };
    };
    class keko_X_AEDItem: keko_AEDItem {
        scope = 2;
        scopeCurator = 2;
        displayName = CSTRING(X_Display);
        author = "Katalam";
        class TransportItems {
            MACRO_ADDITEM(keko_X_AED,1);
        };
    };



    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(keko_X_AED,1);
        };
        class TransportMagazines: TransportMagazines {
            MACRO_ADDMAGAZINE(keko_painkiller,10);
        };
    };
    class keko_bloodBankCrate: ACE_medicalSupplyCrate {
        displayName = CSTRING(bloodbank);
        class TransportItems: TransportItems {
            MACRO_ADDITEM(keko_CrossPanel,5);
            MACRO_ADDITEM(keko_bloodIV_O,5);
            MACRO_ADDITEM(keko_bloodIV_A,10);
            MACRO_ADDITEM(keko_bloodIV_B,10);
            MACRO_ADDITEM(keko_bloodIV_AB,10);
            MACRO_ADDITEM(keko_bloodIV_O_500,5);
            MACRO_ADDITEM(keko_bloodIV_A_500,10);
            MACRO_ADDITEM(keko_bloodIV_B_500,10);
            MACRO_ADDITEM(keko_bloodIV_AB_500,10);
            MACRO_ADDITEM(keko_bloodIV_O_250,5);
            MACRO_ADDITEM(keko_bloodIV_A_250,10);
            MACRO_ADDITEM(keko_bloodIV_B_250,10);
            MACRO_ADDITEM(keko_bloodIV_AB_250,10);
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
                    displayName = CSTRING(Inject_Box_Painkillers);
                    condition = QUOTE(('keko_painkiller' in (magazines _player) || 'keko_painkiller' in (magazines _target)));
                    statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                    showDisabled = 0;
                    exceptions[] = {"isNotSitting"};
                    icon = QPATHTOF(ui\icon_painkillers_action.paa);
                };
            };
            class ACE_Torso {
                class CPR;
                class keko_X_AED: CPR {
                    displayName = CSTRING(X_Action_Use);
                    condition = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    icon = QPATHTOF(ui\X_Series-Device_W.paa);
                };
                class GVAR(R_X_AED): CPR {
                    displayName = CSTRING(X_Action_Remove);
                    condition = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    icon = QPATHTOF(ui\X_Series-Device_W.paa);
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
                            displayName = CSTRING(Inject_Box_Painkillers);
                            condition = QUOTE('keko_painkiller' in (magazines _player) || 'keko_painkiller' in (magazines _target)));
                            statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                            showDisabled = 0;
                            exceptions[] = {"isNotSitting"};
                            icon = QPATHTOF(ui\icon_painkillers_action.paa);
                        };
                    };
                    class ACE_Torso {
                        class CPR;
                        class keko_X_AED: CPR {
                            displayName = CSTRING(X_Action_Use);
                            condition = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'X_Defibrillator'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            icon = QPATHTOF(ui\X_Series-Device_W.paa);
                        };
                        class GVAR(R_X_AED): CPR {
                            displayName = CSTRING(X_Action_Remove);
                            condition = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'Remove_X_Defibrillator'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            icon = QPATHTOF(ui\X_Series-Device_W.paa);
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
                        displayName = CSTRING(Inject_Box_Painkillers);
                        condition = "'keko_painkiller' in (magazines _player)";
                        statement = "[_player, _target, 'head', 'Painkillers'] call ace_medical_fnc_treatment";
                        showDisabled = 0;
                        exceptions[] = {"isNotInside", "isNotSitting"};
                        icon = QPATHTOF(ui\icon_painkillers_action.paa);
                    };
                };
            };
            class ACE_Equipment {
                class removeSound {
                    displayName = CSTRING(X_Action_removeSound);
                    condition = QUOTE('keko_X_AED' in (items _player) && !((_player getVariable QQGVAR(X_sound1)) isEqualTo ''));
                    statement = QUOTE(_player setVariable [ARR_3(QQGVAR(X_sound1), '', true)]; _player setVariable [ARR_3(QQGVAR(X_sound2), '', true)];);
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
                class addSound {
                    displayName = CSTRING(X_Action_addSound);
                    condition = QUOTE('keko_X_AED' in (items _player) && ((_player getVariable QQGVAR(X_sound1)) isEqualTo ''));
                    statement = QUOTE(_player setVariable [ARR_3(QQGVAR(X_sound1), QQPATHTOF(sounds\noheartrate.wav), true)]; _player setVariable [ARR_3(QQGVAR(X_sound2), QQPATHTOF(sounds\heartrate.wav), true)];);
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
                class openCrossPanel {
                    displayName = CSTRING(open_crosspanel);
                    condition = "('keko_crossPanel' in (uniformItems _player)) || ('keko_crossPanel' in (vestItems _player))";
                    statement = QUOTE(createDialog QQGVAR(CrossPanel_Dialog));
                    showDisabled = 0;
                    exceptions[] = {"isNotInside", "isNotSitting"};
                    icon = "";
                };
            };
        };
    };
};
