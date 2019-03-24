class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing;
        class BurnsBandage: FieldDressing {
            displayName = CSTRING(action);
            displayNameProgress = CSTRING(progress);
            items[] = {"keko_sterileGauze"};
            allowedSelections[] = {"All"};
            category = "bandage";
            allowSelfTreatment = 1;
            treatmentTime = 6;
            requiredMedic = 0;
            itemConsumed = 1;
            callbackSuccess = "ace_medical_fnc_treatmentAdvanced_bandage";
        };
    };
};
