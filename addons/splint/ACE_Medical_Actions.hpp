class ACE_Medical_Actions {
    class Advanced {
        class fieldDressing;
        class splint: fieldDressing {
            displayName = CSTRING(ACTION);
            displayNameProgress = CSTRING(PROGRESS);
            items[] = {"keko_splint"};
            allowedSelections[] = {"hand_l", "hand_r", "leg_l", "leg_r"};
            condition = QUOTE([ARR_2(_this select 1, _this select 2)] call FUNC(canSplint));
            allowSelfTreatment = 1;
            patientStateCondition = QGVAR(patientCondition);
            treatmentTime = 8;
            requiredMedic = 0;
            itemConsumed = 1;
            callbackSuccess = QFUNC(splint);
        };
        class CheckLimbs: fieldDressing {
            displayName = CSTRING(ACTION_CHECKLIMBS);
            displayNameProgress = CSTRING(CHECKLIMBS_PROGRESS);
            items[] = {};
            category = "examine";
            allowedSelections[] = {"hand_l", "hand_r", "leg_l", "leg_r"};
            allowSelfTreatment = 1;
            treatmentTime = 3;
            callbackSuccess = QFUNC(checkLimbs);
            callbackFailure = "";
            callbackProgress = "";
            condition = QUOTE(missionNamespace getVariable [ARR_2(QQGVAR(enable),false)] && !(missionNamespace getVariable [ARR_2('ace_medical_healHitPointAfterAdvBandage',true)]));
            itemConsumed = 0;
            litter[] = {};
        };
    };
};
