class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(larynx): ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= CSTRING(Larynx_Display);
        descriptionShort = CSTRING(Larynx_Desc_Short);
        descriptionUse = CSTRING(Larynx_Desc_Use);
        picture = QPATHTOF(ui\larynx_normal.paa);
        model = QPATHOF(models\larynx_tube\tube.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    class GVAR(guedel): ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= CSTRING(Guedel_Display);
        descriptionShort =  CSTRING(Guedel_Desc_Short);
        descriptionUse = CSTRING(Guedel_Desc_Use);
        picture = QPATHTOF(ui\guedel_normal.paa);
        model = QPATHTOF(models\guedel\guedel.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.5;
        };
    };
    class GVAR(accuvac): ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "Accuvac";
        descriptionShort = CSTRING(Accuvac_Desc_Short);
        descriptionUse = CSTRING(Accuvac_Desc_Use);
        picture = QPATHTOF(ui\accuvac_normal.paa);
        model = QPAHTOF(models\accuvac\accuvac.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 7;
        };
    };
};
