class CfgFunctions {
    class ADDON {
        tag = "ace_dogtags";
        class ace_dogtags {
            class getDogtagData {
                file = QPATHTOF(functions\fn_getDogtagData.sqf);
            };
            class canCheckDogtag {
                file = QPATHTOF(functions\fn_canCheckDogtag.sqf);
            };
        };
    };
};
