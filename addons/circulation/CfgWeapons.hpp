class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_bloodIV;
    class keko_AED;

    class keko_bloodIV_O: ACE_bloodIV {
        displayName = CSTRING(BloodIV_O);
    };
    class keko_bloodIV_A: ACE_bloodIV {
        displayName = CSTRING(BloodIV_A);
    };
    class keko_bloodIV_B: ACE_bloodIV {
        displayName = CSTRING(BloodIV_B);
    };
    class keko_bloodIV_AB: ACE_bloodIV {
        displayName = CSTRING(BloodIV_AB);
    };
    class ACE_bloodIV_500;
    class keko_bloodIV_O_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_O_500);
    };
    class keko_bloodIV_A_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_A_500);
    };
    class keko_bloodIV_B_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_B_500);
    };
    class keko_bloodIV_AB_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_AB_500);
    };
    class ACE_bloodIV_250;
    class keko_bloodIV_O_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_O_250);
    };
    class keko_bloodIV_A_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_A_250);
    };
    class keko_bloodIV_B_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_B_250);
    };
    class keko_bloodIV_AB_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_AB_250);
    };
    class keko_painkillerItem: ACE_ItemCore {
        scope = 1; // no mistake, just a placeholder, cause ACE can't handle magazines. DO NOT USE!
        author = "Katalam";
        displayName = CSTRING(Painkillers_Box_Display);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };
    class keko_X_AED: keko_AED {
        scope = 2;
        author = "Katalam";
        displayName = CSTRING(X_Display);
        picture = QPATHTOF(ui\x-series.paa);
        model = QPATHTOF(models\aedx\aedx.p3d);
        descriptionShort = CSTRING(X_Desc);
        descriptionUse = CSTRING(X_Desc);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };
    class keko_crossPanel: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName = CSTRING(crosspanel);
        descriptionShort = CSTRING(desc_crosspanel);
        picture = QPATHTOF(ui\crosspanel.paa);
        icon = "";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
