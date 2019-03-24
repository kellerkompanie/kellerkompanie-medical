#include "script_component.hpp"

class CfgPatches {
    class ADDON    {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        units[] = {
            "KAT_PulseoximeterItem",
            "KAT_ChestSealItem"
        };
        weapons[] = {
            "KAT_Pulseoximeter",
            "KAT_ChestSeal"
        };
        magazines[] = {};
        requiredAddons[] = {
            "ace_medical",
            "kat_aceAirway",
            "kat_aceCirculation",
            "cba_settings"
        };
        author = ECSTRING(common,Schwaggot);
        authors[] = {"Schwaggot"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
};

class CfgHints    {
    class KAT_Hint    {
        class KAT_Breathing    {
            displayName = $STR_kat_aceBreathing_hint_name;
            description = $STR_kat_aceBreathing_hint_desc;
            tip = $STR_kat_aceBreathing_hint_tip;
            arguments[] = {};
            image = "kat_aceAirway\images\larynx.paa";
        };
    };
};

class CfgFunctions {
    class kat_aceBreathing {
        file = "kat_aceBreathing\functions";
        class functions {
            class adjustSpo2{};
            class events{};
            class handleBreathing{};
            class handleInit{};
            class handlePulmoHit{};
            class init{};
            class registerSettings{};
            class treatmentAdvanced_chestSeal{};
            class treatmentAdvanced_chestSealLocal{};
            class treatmentAdvanced_pulseoximeter{};
            class treatmentAdvanced_pulseoximeterLocal{};
            class treatmentAdvanced_removePulseoximeter{};
        };
    };
};

class Extended_PreInit_EventHandlers {
    class kat_aceBreathing_preInit {
        init = "call kat_aceBreathing_fnc_registerSettings";
    };
};
class Extended_Init_EventHandlers {
    class CAManBase {
        class kat_aceBreathing_init {
            init = "_this call kat_aceBreathing_fnc_handleInit";
        };
    };
};
class Extended_PostInit_EventHandlers {
    class kat_aceBreathing_postInit {
        init = "call kat_aceBreathing_fnc_events";
    };
};


class cfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class KAT_Pulseoximeter: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceBreathing_Pulseoximeter_Desc_Short";
        descriptionShort = "$STR_kat_aceBreathing_Pulseoximeter_Desc_Short";
        descriptionUse = "$STR_kat_aceBreathing_Pulseoximeter_Desc_Use";
        picture = "\kat_aceBreathing\images\Pulseoximeter_normal.paa";
        model = "\kat_aceBreathing\pulseox\pulseox.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class KAT_ChestSeal: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceBreathing_chestseal_display";
        descriptionShort = "$STR_kat_aceBreathing_chestseal_desc";
        descriptionUse = "$STR_kat_aceBreathing_chestseal_desc";
        picture = "\kat_aceBreathing\images\chest-seal.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};

class cfgVehicles {
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

class ACE_Medical_Actions {
    class Advanced {
        class Pulseoximeter {
            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display;
            displayNameProgress = $STR_kat_aceBreathing_placing;
            category = "examine";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"hand_l", "hand_r"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 2;
            items[] = {"KAT_Pulseoximeter"};
            condition = "missionNamespace getVariable 'kat_aceBreathing_enable'";
            patientStateCondition = 0;
            callbackSuccess = "[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_pulseoximeter";
            callbackFailure = "";
            callbackProgress = "";
            itemConsumed = 1;
            animationPatient = "";
            animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
            animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
            animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
            animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
            animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
            animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
            litter[] = {};
        };
        class RemovePulseoximeter {
            displayName = $STR_kat_aceBreathing_Pulseoximeter_Display_Remove;
            displayNameProgress = $STR_kat_aceBreathing_remove;
            category = "examine";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"hand_l", "hand_r"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 2;
            items[] = {};
            condition = "_target getVariable ['kat_aceBreathing_pulseoximeter', false]";
            patientStateCondition = 0;
            callbackSuccess = "[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_removePulseoximeter";
            callbackFailure = "";
            callbackProgress = "";
            itemConsumed = 0;
            animationPatient = "";
            animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
            animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
            animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
            animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
            animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
            animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
            litter[] = {};
        };
        class ChestSeal {
            displayName = $STR_kat_aceBreathing_pneumothorax_display;
            displayNameProgress = $STR_kat_aceBreathing_treating;
            category = "advanced";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"body"};
            allowSelfTreatment = 0;
            requiredMedic = 2;
            treatmentTime = 7;
            items[] = {"KAT_ChestSeal"};
            condition = "_target getVariable ['ace_medical_airwayCollapsed', false]";
            patientStateCondition = 0;
            callbackSuccess = "[_player, _target] call kat_aceBreathing_fnc_treatmentAdvanced_chestSeal";
            callbackFailure = "";
            callbackProgress = "";
            itemConsumed = 1;
            animationPatient = "";
            animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
            animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
            animationCaller = "AinvPknlMstpSlayWrflDnon_medicOther";
            animationCallerProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
            animationCallerSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
            animationCallerSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";
            litter[] = {};
        };
    };
};
