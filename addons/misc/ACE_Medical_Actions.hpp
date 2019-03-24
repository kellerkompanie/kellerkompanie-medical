class ACE_Medical_Actions {
    class Advanced {
        class SalineIV;
        class SalineIV_Stand: SalineIV {
            displayName = "$STR_kat_aceMisc_Display_IVStand";
            requiredMedic = 0;
            condition = "params ['_player'];[_player, 1000] call kat_aceMisc_fnc_conditionIV"; // no idea why here is a params needed
            items[] = {};
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV', ['ACE_salineIV']] call kat_aceMisc_fnc_treatmentIV";
            itemConsumed = 0;
        };
        class SalineIV_Stand_500: SalineIV_Stand {
            displayName = "$STR_kat_aceMisc_Display_IVStand_500";
            condition = "params ['_player'];[_player, 500] call kat_aceMisc_fnc_conditionIV";
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV_500', ['ACE_salineIV_500']] call kat_aceMisc_fnc_treatmentIV";
        };
        class SalineIV_Stand_250: SalineIV_Stand {
            displayName = "$STR_kat_aceMisc_Display_IVStand_250";
            condition = "params ['_player'];[_player, 250] call kat_aceMisc_fnc_conditionIV";
            callbackSuccess = "[_player, _target, _selectionName, 'SalineIV_250', ['ACE_salineIV_250']] call kat_aceMisc_fnc_treatmentIV";
        };
        class PersonalAidKit;
        class LimitWounds: PersonalAidKit {
            displayName = $STR_kat_aceMisc_LIMITWOUNDS_Display;
            displayNameProgress = $STR_kat_aceMisc_LIMITWOUNDS_Display;
            patientStateCondition = "kat_aceMisc_limitWounds_condition";
            condition = "[_target] call kat_aceMisc_fnc_getNumOpenWounds > 5 && (missionNamespace getVariable ['kat_aceMisc_limitWounds_enable', true])";
            treatmentTime = 8;
            callbackSuccess = "[_target] call kat_aceMisc_fnc_limitWounds";
        };
    };
};
