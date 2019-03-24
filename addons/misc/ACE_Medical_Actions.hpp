class ACE_Medical_Actions {
    class Advanced {
        class SalineIV;
        class SalineIV_Stand: SalineIV {
            displayName = CSTRING(Display_IVStand);
            requiredMedic = 0;
            condition = "params ['_player'];[_player, 1000] call keko_medical_misc_fnc_conditionIV"; // no idea why here is a params needed
            items[] = {};
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV', ['ACE_salineIV']] call keko_medical_misc_fnc_treatmentIV";
            itemConsumed = 0;
        };
        class SalineIV_Stand_500: SalineIV_Stand {
            displayName = CSTRING(Display_IVStand_500);
            condition = "params ['_player'];[_player, 500] call keko_medical_misc_fnc_conditionIV";
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV_500', ['ACE_salineIV_500']] call keko_medical_misc_fnc_treatmentIV";
        };
        class SalineIV_Stand_250: SalineIV_Stand {
            displayName = CSTRING(Display_IVStand_250);
            condition = "params ['_player'];[_player, 250] call keko_medical_misc_fnc_conditionIV";
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV_250', ['ACE_salineIV_250']] call keko_medical_misc_fnc_treatmentIV";
        };
        class PersonalAidKit;
        class LimitWounds: PersonalAidKit {
            displayName = CSTRING(LIMITWOUNDS_Display);
            displayNameProgress = CSTRING(LIMITWOUNDS_Display);
            patientStateCondition = "keko_medical_misc_limitWounds_condition";
            condition = "[_target] call keko_medical_misc_fnc_getNumOpenWounds > 5 && (missionNamespace getVariable ['keko_medical_misc_limitWounds_enable', true])";
            treatmentTime = 8;
            callbackSuccess = "[_target] call keko_medical_misc_fnc_limitWounds";
        };
    };
};
