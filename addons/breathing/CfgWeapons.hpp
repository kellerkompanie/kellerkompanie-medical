class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(Pulseoximeter): ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= CSTRING(Pulseoximeter_Desc_Short);
        descriptionShort = CSTRING(Pulseoximeter_Desc_Short);
        descriptionUse = CSTRING(Pulseoximeter_Desc_Use);
        picture = QPATHTOF(ui\Pulseoximeter_normal.paa);
        model = QPATHTOF(models\pulseox\pulseox.p3d);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class GVAR(ChestSeal): ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= CSTRING(chestseal_display);
        descriptionShort = CSTRING(chestseal_desc);
        descriptionUse = CSTRING(chestseal_desc);
        picture = QPATHTOF(ui\chest-seal.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
