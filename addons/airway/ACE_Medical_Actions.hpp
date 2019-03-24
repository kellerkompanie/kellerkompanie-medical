class ACE_Medical_Actions {
    class Advanced {
        class Larynxtubus {
            displayName = "$STR_kat_aceAirway_Larynx_Display";
            displayNameProgress = $STR_kat_aceAirway_action_placing;
            category = "airway";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"head"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 5;
            items[] = {"KAT_larynx"};
            condition = "!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable ['kat_aceAirway_enable',true])";
            patientStateCondition = 0;
            callbackSuccess = "[_player, _target, 'Larynxtubus'] call kat_aceAirway_fnc_treatmentAdvanced_airway";
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
        class Guedeltubus: larynxtubus {
            displayName = $STR_kat_aceAirway_Guedel_Display;
            requiredMedic = 0;
            items[] = {"KAT_guedel"};
            callbackSuccess = "[_player, _target, 'Guedeltubus'] call kat_aceAirway_fnc_treatmentAdvanced_airway";
        };
        class Accuvac: larynxtubus {
            displayName = "Accuvac";
            treatmentTime = 8;
            items[] = {"KAT_accuvac"};
            itemConsumed = 0;
            callbackSuccess = "[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_accuvac";
            callbackProgress = "_this call kat_aceAirway_fnc_accuvacSound";
        };
        class Overstretch: larynxtubus {
            displayName = "$STR_kat_aceAirway_overstretch";
            displayNameProgress = $STR_kat_aceAirway_overstretching;
            treatmentTime = 2;
            requiredMedic = 0;
            items[] = {};
            condition = "!([_target] call ace_common_fnc_isAwake) && !(_target getVariable ['kat_aceAirway_overstretch', false]) && (missionNamespace getVariable ['kat_aceAirway_enable',true])";
            callbackSuccess = "[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_overstretchHead";
        };
        class TurnAround: larynxtubus {
            displayName = "$STR_kat_aceAirway_turnaround";
            displayNameProgress = $STR_kat_aceAirway_turnaround_action;
            treatmentTime = 5;
            requiredMedic = 0;
            items[] = {};
            callbackSuccess = "[_player, _target] call kat_aceAirway_fnc_treatmentAdvanced_turnaroundHead";
        };
        class CheckPulse;
        class CheckAirway: checkPulse {
            displayName = "$STR_kat_aceAirway_checkAirway";
            displayNameProgress = $STR_kat_aceAirway_action_checking;
            treatmentTime = 5;
            allowedSelections[] = {"head"};
            allowSelfTreatment = 0;
            callbackSuccess = "[_player, _target] call kat_aceAirway_fnc_checkAirway";
            condition = "!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable ['kat_aceAirway_enable',true])";
        };
    };
};
