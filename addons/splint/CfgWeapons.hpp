class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class keko_splint: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(DISPLAYNAME);
        descriptionShort = CSTRING(DESCRIPTION);
        descriptionUse = CSTRING(DESCRIPTION);
        picture = QPATHTOF(ui\splint.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 3;
        };
    };
    class keko_splint_used: keko_splint {
        scope = 0;
        displayName = CSTRING(DISPLAYNAME_USED);
    };
};
