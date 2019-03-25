class ACE_ArmLeft {
    class fieldDressing;
    class GVAR(splint): fieldDressing {
        displayName = CSTRING(ACTION);
        condition = "[_player, _target, 'hand_l', 'splint'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'hand_l', 'splint'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\splint_action.paa);
    };
    MACRO_CHECKACTION('hand_l')
};
class ACE_ArmRight {
    class fieldDressing;
    class GVAR(splint): fieldDressing {
        displayName = CSTRING(ACTION);
        condition = "[_player, _target, 'hand_r', 'splint'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'hand_r', 'splint'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\splint_action.paa);
    };
    MACRO_CHECKACTION('hand_r')
};
class ACE_LegLeft {
    class fieldDressing;
    class GVAR(splint): fieldDressing {
        displayName = CSTRING(ACTION);
        condition = "[_player, _target, 'leg_l', 'splint'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'leg_l', 'splint'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\splint_action.paa);
    };
    MACRO_CHECKACTION('leg_l')
};
class ACE_LegRight {
    class fieldDressing;
    class GVAR(splint): fieldDressing {
        displayName = CSTRING(ACTION);
        condition = "[_player, _target, 'leg_r', 'splint'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'leg_r', 'splint'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\splint_action.paa);
    };
    MACRO_CHECKACTION('leg_r')
};
