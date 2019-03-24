class ACE_Medical_Actions {
    class Advanced {
        class CutOfClothes {
            displayName = "$STR_kat_aceDisability_Action_Display";
            displayNameProgress = $STR_kat_aceDisability_Action_Display;
            category = "advanced";
            treatmentLocations[] = {"All"};
            allowedSelections[] = {"body"};
            allowSelfTreatment = 0;
            requiredMedic = 1;
            treatmentTime = 15;
            items[] = {};
            condition = "!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable ['kat_aceDisability_enable',true]) && !(uniform _target isEqualTo '')";
            patientStateCondition = 0;
            callbackSuccess = "[_player, _target] call kat_aceDisability_fnc_treatmentAdvanced_clothes";
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
        class fasttraumasearch: CutOfClothes {
            displayName = "$STR_kat_aceDisability_Action_Display_fasttraumasearch";
            displayNameProgress = $STR_kat_aceDisability_Action_Progress_fasttraumasearch;
            condition = "!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable ['kat_aceDisability_enable',true]) && (uniform _target isEqualTo '')";
            callbackSuccess = "[_player, _target] call kat_aceDisability_fnc_treatmentAdvanced_clothes";
        };
        class tracheaCut: CutOfClothes {
            displayName = "$STR_kat_aceDisability_Action_tracheaCut_Display";
            displayNameProgress = $STR_kat_aceDisability_Action_tracheaCut_Action;
            treatmentTime = 60;
            allowedSelections[] = {"head"};
            requiredMedic = 2;
            items[] = {"ACE_surgicalKit"};
            condition = "!([_target] call ace_common_fnc_isAwake) && (missionNamespace getVariable ['kat_aceDisability_enable',true]) && _target getVariable ['kat_aceDisability_checked', false]";
            category = "airway";
            callbackSuccess = "[_player, _target] call kat_aceDisability_fnc_treatmentAdvanced_trachea";
        };
    };
};
