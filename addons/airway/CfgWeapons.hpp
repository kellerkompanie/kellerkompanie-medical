class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class KAT_larynx: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceAirway_Larynx_Display";
        descriptionShort = "$STR_kat_aceAirway_Larynx_Desc_Short";
        descriptionUse = "$STR_kat_aceAirway_Larynx_Desc_Use";
        picture = "\kat_aceAirway\images\larynx_normal.paa";
        model = "\kat_aceAirway\larynx_tube\tube.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    class KAT_guedel: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceAirway_Guedel_Display";
        descriptionShort =  "$STR_kat_aceAirway_Guedel_Desc_Short";
        descriptionUse = "$STR_kat_aceAirway_Guedel_Desc_Use";
        picture = "\kat_aceAirway\images\guedel_normal.paa";
        model = "\kat_aceAirway\guedel\guedel.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    class KAT_accuvac: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "Accuvac";
        descriptionShort = "$STR_kat_aceAirway_Accuvac_Desc_Short";
        descriptionUse = "$STR_kat_aceAirway_Accuvac_Desc_Use";
        picture = "\kat_aceAirway\images\accuvac_normal.paa";
        model = "\kat_aceAirway\accuvac\accuvac.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 7;
        };
    };
};
