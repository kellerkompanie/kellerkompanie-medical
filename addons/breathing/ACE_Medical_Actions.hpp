class ACE_Medical_Actions {
    class Advanced {
        class Pulseoximeter {
            displayName = CSTRING(Pulseoximeter_Display);
            displayNameProgress = CSTRING(placing);
            category = "examine";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"hand_l", "hand_r"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 2;
            items[] = {"keko_pulseOximeter"};
            condition = QGVAR(enable);
            patientStateCondition = 0;
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_pulseoximeter));
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
            displayName = CSTRING(Pulseoximeter_Display_Remove);
            displayNameProgress = CSTRING(remove);
            category = "examine";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"hand_l", "hand_r"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 2;
            items[] = {};
            condition = QUOTE(_target getVariable [ARR_2(QQGVAR(pulseoximeter), false)]);
            patientStateCondition = 0;
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_removePulseoximeter));
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
            displayName = CSTRING(pneumothorax_display);
            displayNameProgress = CSTRING(treating);
            category = "advanced";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"body"};
            allowSelfTreatment = 0;
            requiredMedic = 2;
            treatmentTime = 7;
            items[] = {"keko_chestSeal"};
            condition = "_target getVariable ['ace_medical_airwayCollapsed', false]";
            patientStateCondition = 0;
            callbackSuccess = QUOTE([ARR_2(_player, _target)] call FUNC(treatmentAdvanced_chestSeal));
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
