class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class KAT_Pulseoximeter: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceBreathing_Pulseoximeter_Desc_Short";
        descriptionShort = "$STR_kat_aceBreathing_Pulseoximeter_Desc_Short";
        descriptionUse = "$STR_kat_aceBreathing_Pulseoximeter_Desc_Use";
        picture = "\kat_aceBreathing\images\Pulseoximeter_normal.paa";
        model = "\kat_aceBreathing\pulseox\pulseox.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class KAT_ChestSeal: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName= "$STR_kat_aceBreathing_chestseal_display";
        descriptionShort = "$STR_kat_aceBreathing_chestseal_desc";
        descriptionUse = "$STR_kat_aceBreathing_chestseal_desc";
        picture = "\kat_aceBreathing\images\chest-seal.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
