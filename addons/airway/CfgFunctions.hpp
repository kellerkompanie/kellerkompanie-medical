class CfgFunctions {
    class kat_aceAirway {
        file = "kat_aceAirway\functions";
        class functions {
            class accuvacSound{};
            class checkAirway{};
            class events{};
            class handleAirway{};
            class handleDie{};
            class handleInit{};
            class handlePuking{};
            class handleTimer{};
            class init{};
            class registerSettings{};
            class treatmentAdvanced_accuvac{};
            class treatmentAdvanced_accuvacLocal{};
            class treatmentAdvanced_airway{};
            class treatmentAdvanced_airwayLocal{};
            class treatmentAdvanced_overstretchHead{};
            class treatmentAdvanced_turnaroundHead{};
        };
    };
    class kat_aceMedical_Menu {
        tag = "ace_medical_menu";
        class ace_medical_menu {
            class updateUIInfo {
                file = "kat_aceAirway\functions\fn_updateUIInfo.sqf";
            };
        };
    };
    class kat_aceMedical {
        tag = "ace_medical";
        class ace_medical {
            class displayPatientInformation {
                file = "kat_aceAirway\functions\fn_displayPatientInformation.sqf";
            };
        };
    };
};
