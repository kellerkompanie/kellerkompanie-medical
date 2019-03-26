class ACE_Medical_Actions {
    class Advanced {
        class Larynxtubus {
            displayName = CSTRING(Larynx_Display);
            displayNameProgress = CSTRING(action_placing);
            category = "airway";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"head"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 5;
            items[] = {"keko_larynx"};
            condition = QUOTE(!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
            patientStateCondition = 0;
            callbackSuccess = QUOTE([ARR_3(_player, _target, 'Larynxtubus')] call FUNC(treatmentAdvanced_airway));
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
            displayName = CSTRING(Guedel_Display);
            requiredMedic = 0;
            items[] = {"keko_guedel"};
            callbackSuccess = QUOTE([ARR_3(_player, _target, 'Guedeltubus')] call FUNC(treatmentAdvanced_airway));
        };
        class Accuvac: larynxtubus {
            displayName = "Accuvac";
            treatmentTime = 8;
            items[] = {"keko_accuvac"};
            itemConsumed = 0;
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_accuvac));
            callbackProgress = QUOTE(_this call FUNC(accuvacSound));
        };
        class Overstretch: larynxtubus {
            displayName = CSTRING(overstretch);
            displayNameProgress = CSTRING(overstretching);
            treatmentTime = 2;
            requiredMedic = 0;
            items[] = {};
            condition = QUOTE(!([_target] call ace_common_fnc_isAwake) && !(_target getVariable [ARR_2(QQGVAR(overstretch), false)]) && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_overstretchHead));
        };
        class TurnAround: larynxtubus {
            displayName = CSTRING(turnaround);
            displayNameProgress = CSTRING(turnaround_action);
            treatmentTime = 5;
            requiredMedic = 0;
            items[] = {};
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_turnaroundHead));
        };
        class CheckPulse;
        class CheckAirway: checkPulse {
            displayName = CSTRING(checkAirway);
            displayNameProgress = CSTRING(action_checking);
            treatmentTime = 5;
            allowedSelections[] = {"head"};
            allowSelfTreatment = 0;
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(checkAirway));
            condition = QUOTE(!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]));
        };
    };
};
