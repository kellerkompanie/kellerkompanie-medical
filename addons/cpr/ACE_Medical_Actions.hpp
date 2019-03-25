class ACE_Medical_Actions {
    class Advanced {
        class fieldDressing;
        class CPR: fieldDressing {
            callbackSuccess = QFUNC(CPR_action);
            animationCaller = "AinvPknlMstpSnonWnonDr_medic0";
            animationPatientUnconscious = "AinjPpneMstpSnonWrflDnon_rolltoback";
            animationPatientUnconsciousExcludeOn[] = {"ainjppnemstpsnonwrfldnon"};
        };
        class Defibrillator: CPR {
            displayName = CSTRING(AED_DISPLAYNAME);
            displayNameProgress = CSTRING(AED_PROGRESS);
            items[] = {keko_AED};
            condition = QUOTE(!([_target] call ace_common_fnc_isAwake) && missionNamespace getVariable [ARR_2(QQGVAR(enable),true)]);
            treatmentTime = 8;
            requiredMedic = 1;
            callbackSuccess = QFUNC(AED_action);
            callbackProgress = QFUNC(AED_sound);
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic3";
            treatmentLocations[] = {QGVAR(useLocation_AED)};
        };
        class Defibrillator_station: Defibrillator {
            items[] = {};
            condition = QUOTE([ARR_2(_player,_target)] call FUNC(AED_station_condition));
            callbackSuccess = QFUNC(AED_station);
            callbackProgress = "";
            animationCaller = "AinvPknlMstpSnonWnonDnon_medic3";
            treatmentLocations[] = {"All"};
        };
    };
};
