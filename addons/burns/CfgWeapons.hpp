class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class keko_sterileGauze: ACE_ItemCore {
        scope = 2;
        displayName = CSTRING(displayName);
        descriptionShort = CSTRING(desc);
        descriptionUse = CSTRING(desc);
        picture = QPATHTOF(ui\sterile_gauze.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class keko_sterileGauze_used: keko_sterileGauze {
        scope = 0;
        displayName = CSTRING(displayNameUsed);
    };
};
