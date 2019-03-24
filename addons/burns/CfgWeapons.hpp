class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(burnsBandage): ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(displayName);
        descriptionShort = CSTRING(desc);
        descriptionUse = CSTRING(desc);
        picture = QPATHTOF(ui\sterile_gauze.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class GVAR(burnsBandage_used): GVAR(burnsBandage) {
        scope = 0;
        displayName = CSTRING(displayNameUsed);
    };
};
