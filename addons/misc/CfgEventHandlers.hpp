class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_Init_EventHandlers {
    class CAManBase {
        class kat_aceMisc_init {
            init = "_this call kat_aceMisc_fnc_handleInit";
        };
    };
    class Land_IntravenStand_01_empty_F {
        class kat_aceMisc_init_0bag {
            init = "(_this select 0) setVariable ['kat_aceMisc_stand', [], true]";
        };
    };
    class Land_IntravenStand_01_1bag_F {
        class kat_aceMisc_init_1bag {
            init = "(_this select 0) setVariable ['kat_aceMisc_stand', [1000], true]";
        };
    };
    class Land_IntravenStand_01_2bags_F {
        class kat_aceMisc_init_2bag {
            init = "(_this select 0) setVariable ['kat_aceMisc_stand', [1000, 1000], true]";
        };
    };
};
class Extended_PostInit_EventHandlers {
    class kat_aceMisc_postInit {
        init = "call kat_aceMisc_fnc_events";
    };
};
