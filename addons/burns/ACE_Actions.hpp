class ACE_Head {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'head', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'head', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('head')
};
class ACE_Torso {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'body', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'body', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('body')
};
class ACE_ArmLeft {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'hand_l', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'hand_l', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('hand_l')
};
class ACE_ArmRight {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'hand_r', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'hand_r', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('hand_r')
};
class ACE_LegLeft {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'leg_l', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'leg_l', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('leg_l')
};
class ACE_LegRight {
    class FieldDressing;
    class BurnsBandage: FieldDressing {
        displayName = CSTRING(action);
        condition = "[_player, _target, 'leg_r', 'burnsBandage'] call ace_medical_fnc_canTreatCached";
        statement = "[_player, _target, 'leg_r', 'burnsBandage'] call ace_medical_fnc_treatment";
        EXCEPTIONS
        icon = QPATHTOF(ui\sterile_gauze.paa);
    };
    MACRO_CHECKACTION('leg_r')
};
