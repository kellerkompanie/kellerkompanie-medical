class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing;
        class Morphine;
        class CheckPulse;
        class CPR;

        class Painkillers: Morphine {
            displayName = $STR_KAT_aceCirculation_Inject_Box_Painkillers;
            displayNameProgress = $STR_KAT_aceCirculation_Using;
            allowedSelections[] = {"head"};
            items[] = {};
            callbackSuccess = "['KAT_Painkiller', _player, _target, _selectionName, 'Painkillers'] call kat_aceCirculation_fnc_removeItemfromMag";
            condition = "('KAT_Painkiller' in (magazines _player) || 'KAT_Painkiller' in (magazines _target))";
            litter[] = {};
        };
        class CheckDogtags: checkPulse {
            displayName = $STR_KAT_aceCirculation_DogTag;
            displayNameProgress = $STR_KAT_aceCirculation_DogTag_Action;
            treatmentTime = 2;
            allowedSelections[] = {"head"};
            allowSelfTreatment = 1;
            callbackSuccess = "[_player, _target] call ace_dogtags_fnc_checkDogtag";
            condition = "true";
        };
        class CheckBloodPressure: CheckPulse { // Remove the ability to check blood pressure at the head
            allowedSelections[] = {"hand_l", "hand_r", "leg_l", "leg_r"};
        };

        #include "Blood_Medical.hpp"

        class Defibrillator: CPR {
            items[] = {{"adv_aceCPR_AED", "KAT_X_AED"}};
            treatmentTime = 10;
            callbackProgress = "call kat_acecirculation_fnc_AED_sound";
        };
        class X_Defibrillator: CPR {
            displayName = $STR_KAT_aceCirculation_X_Action_Use;
            displayNameProgress = $STR_KAT_aceCirculation_X_Action_Progress;
            items[] = {"KAT_X_AED"};
            condition = "!(_player getVariable ['kat_aceCirculation_use',false])";
            treatmentTime = 2;
            requiredMedic = 1;
            callbackProgress = "";
            callbackSuccess = "[_player, _target] call kat_aceCirculation_fnc_treatmentAdvanced_X";
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic3";
        };
        class Remove_X_Defibrillator: X_Defibrillator {
            displayName = $STR_KAT_aceCirculation_X_Action_Remove;
            items[] = {};
            condition = "_target getVariable ['kat_aceCirculation_X', true]";
            treatmentTime = 2;
            callbackProgress = "";
            callbackSuccess = "_target setVariable ['kat_aceCirculation_X', false, true]; _player setVariable ['kat_aceCirculation_use', false, true]";
        };
    };
};
