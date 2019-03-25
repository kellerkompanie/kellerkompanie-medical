class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class keko_AED: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(AED_DISPLAYNAME);
        picture = QPATHTOF(ui\defib.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = CSTRING(AED_DESCRIPTION);
        descriptionUse = CSTRING(AED_DESCRIPTION);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
    };
    class keko_AED_used: ACE_ItemCore {
        scope = 1;
        displayName = CSTRING(AED_USED_DISPLAYNAME);
        picture = QPATHTOF(ui\defib.paa);
        model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = CSTRING(AED_DESCRIPTION);
        descriptionUse = CSTRING(AED_DESCRIPTION);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
    };
};
