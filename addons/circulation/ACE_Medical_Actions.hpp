class ACE_Medical_Actions {
    class Advanced {
        class FieldDressing;
        class Morphine;
        class CheckPulse;
        class CPR;

        class Painkillers: Morphine {
            displayName = CSTRING(Inject_Box_Painkillers);
            displayNameProgress = CSTRING(Using);
            allowedSelections[] = {"head"};
            items[] = {};
            callbackSuccess = "['keko_medical_circulation_Painkiller', _player, _target, _selectionName, 'Painkillers'] call keko_medical_circulation_fnc_removeItemfromMag";
            condition = "('keko_medical_circulation_Painkiller' in (magazines _player) || 'keko_medical_circulation_Painkiller' in (magazines _target))";
            litter[] = {};
        };
        class CheckDogtags: checkPulse {
            displayName = CSTRING(DogTag);
            displayNameProgress = CSTRING(DogTag_Action);
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
            items[] = {{"keko_AED", "keko_X_AED"}};
            treatmentTime = 10;
            callbackProgress = "call keko_medical_circulation_fnc_AED_sound";
        };
        class X_Defibrillator: CPR {
            displayName = CSTRING(X_Action_Use);
            displayNameProgress = CSTRING(X_Action_Progress);
            items[] = {"keko_X_AED"};
            condition = "!(_player getVariable ['keko_medical_circulation_use',false])";
            treatmentTime = 2;
            requiredMedic = 1;
            callbackProgress = "";
            callbackSuccess = "[_player, _target] call keko_medical_circulation_fnc_treatmentAdvanced_X";
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic3";
        };
        class Remove_X_Defibrillator: X_Defibrillator {
            displayName = CSTRING(X_Action_Remove);
            items[] = {};
            condition = "_target getVariable ['keko_medical_circulation_X', true]";
            treatmentTime = 2;
            callbackProgress = "";
            callbackSuccess = "_target setVariable ['keko_medical_circulation_X', false, true]; _player setVariable ['keko_medical_circulation_use', false, true]";
        };
    };
};
