class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
        disableModuload = true;
    };
};

class Extended_PreInit_EventHandlers {
    class kat_aceCirculation_preInit {
        init = "call kat_aceCirculation_fnc_registerSettings";
    };
};
class Extended_Init_EventHandlers {
    class CAManBase {
        class kat_aceCirculation_init {
            init = "_this call kat_aceCirculation_fnc_handleInit";
        };
    };
};
class Extended_PostInit_EventHandlers {
    class kat_aceCirculation_postInit {
        init = "call kat_aceCirculation_fnc_events";
    };
};
