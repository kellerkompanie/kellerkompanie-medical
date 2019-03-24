class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class ADDON {
            init = QUOTE(_this call COMPILE_FILE(XEH_init));
        };
    };
    class Land_IntravenStand_01_empty_F {
        class ADDON {
            init = "(_this select 0) setVariable ['keko_medical_misc_stand', [], true]";
        };
    };
    class Land_IntravenStand_01_1bag_F {
        class ADDON {
            init = "(_this select 0) setVariable ['keko_medical_misc_stand', [1000], true]";
        };
    };
    class Land_IntravenStand_01_2bags_F {
        class ADDON {
            init = "(_this select 0) setVariable ['keko_medical_misc_stand', [1000, 1000], true]";
        };
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_postInit));
    };
};
