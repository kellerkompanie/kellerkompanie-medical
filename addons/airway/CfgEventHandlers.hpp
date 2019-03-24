class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PreInit_EventHandlers {
    class kat_aceAirway_preInit {
        init = "call kat_aceAirway_fnc_registerSettings";
    };
};
class Extended_Init_EventHandlers {
    class CAManBase {
        class kat_aceAirway_init {
            init = "_this call kat_aceAirway_fnc_handleInit";
        };
    };
};
class Extended_PostInit_EventHandlers {
    class kat_aceAirway_postInit {
        init = "call kat_aceAirway_fnc_events";
    };
};
