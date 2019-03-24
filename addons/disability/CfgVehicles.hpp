class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_Actions {
            class ACE_Torso {
                class CutOfClothes {
                    displayName = "$STR_kat_aceDisability_Action_Display";
                    distance = 2.0;
                    condition = "[_player, _target, 'body', 'CutOfClothes'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'CutOfClothes'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
                class fasttraumasearch {
                    displayName = "$STR_kat_aceDisability_Action_Display_fasttraumasearch";
                    distance = 2.0;
                    condition = "[_player, _target, 'body', 'fasttraumasearch'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'body', 'fasttraumasearch'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
            };
            class ACE_Head {
                class tracheaCut {
                    displayName = "$STR_kat_aceDisability_Action_tracheaCut_Display";
                    distance = 2.0;
                    condition = "[_player, _target, 'head', 'tracheaCut'] call ace_medical_fnc_canTreatCached";
                    statement = "[_player, _target, 'head', 'tracheaCut'] call ace_medical_fnc_treatment";
                    exceptions[] = {""};
                    showDisabled = 0;
                    icon = "";
                };
            };
            class ACE_MainActions {
                class Medical {
                    class ACE_Torso {
                        class CutOfClothes {
                            displayName = "$STR_kat_aceDisability_Action_Display";
                            distance = 2.0;
                            condition = "[_player, _target, 'body', 'CutOfClothes'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'CutOfClothes'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                        class fasttraumasearch {
                            displayName = "$STR_kat_aceDisability_Action_Display_fasttraumasearch";
                            distance = 2.0;
                            condition = "[_player, _target, 'body', 'fasttraumasearch'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'body', 'fasttraumasearch'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                    };
                    class ACE_Head {
                        class tracheaCut {
                            displayName = "$STR_kat_aceDisability_Action_tracheaCut_Display";
                            distance = 2.0;
                            condition = "[_player, _target, 'head', 'tracheaCut'] call ace_medical_fnc_canTreatCached";
                            statement = "[_player, _target, 'head', 'tracheaCut'] call ace_medical_fnc_treatment";
                            exceptions[] = {""};
                            showDisabled = 0;
                            icon = "";
                        };
                    };
                };
            };
        };
    };

    class Logic;

    class Module_F: Logic {
        class EventHandlers;
        class ModuleDescription;
        class AttributesBase {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };
    };
    class kat_aceDisability_moduleBase: Module_F {
        author = "Katalam";
        displayName = "Test";
        category = kat_aceDisability_base;
        function = "";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 0;
        scope = 1;
        scopeCurator = 2;
    };
    class kat_aceDisability_moduleBase3den: Module_F {
        author = "Katalam";
        displayName = "Base Module";
        category = kat_aceDisability_base;
        function = "";
        functionPriority = 1;
        isGlobal = 1;
        isTriggerActivated = 1;
        isDisposable = 0;
        scope = 2;
        scopeCurator = 1;
    };

    class kat_aceDisability_moduleBee: kat_aceDisability_moduleBase {
        displayName = "Create Bees";
        function = "kat_aceDisability_fnc_moduleBee";
        curatorCanAttach = 1;
    };

    class kat_aceDisability_moduleAllergical: kat_aceDisability_moduleBase {
        displayName = "Spawn allergical reaction";
        function = "kat_aceDisability_fnc_moduleAllergical";
        curatorCanAttach = 1;
    };

    class NATO_Box_Base;
    class ACE_medicalSupplyCrate: NATO_Box_Base {
        class TransportItems;
    };
    class ACE_medicalSupplyCrate_advanced: ACE_medicalSupplyCrate {
        class TransportItems: TransportItems {
            MACRO_ADDITEM(U_B_CombatUniform_mcam_tshirt,5);
        };
    };
}; // Close CfgVehicles
