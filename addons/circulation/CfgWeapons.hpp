class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_bloodIV;
    class adv_aceCPR_AED;

    class KAT_bloodIV_O: ACE_bloodIV {
        displayName = $STR_KAT_aceCirculation_BloodIV_O;
    };
    class KAT_bloodIV_A: ACE_bloodIV {
        displayName = $STR_KAT_aceCirculation_BloodIV_A;
    };
    class KAT_bloodIV_B: ACE_bloodIV {
        displayName = $STR_KAT_aceCirculation_BloodIV_B;
    };
    class KAT_bloodIV_AB: ACE_bloodIV {
        displayName = $STR_KAT_aceCirculation_BloodIV_AB;
    };
    class ACE_bloodIV_500;
    class KAT_bloodIV_O_500: ACE_bloodIV_500 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_O_500";
    };
    class KAT_bloodIV_A_500: ACE_bloodIV_500 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_A_500";
    };
    class KAT_bloodIV_B_500: ACE_bloodIV_500 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_B_500";
    };
    class KAT_bloodIV_AB_500: ACE_bloodIV_500 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_AB_500";
    };
    class ACE_bloodIV_250;
    class KAT_bloodIV_O_250: ACE_bloodIV_250 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_O_250";
    };
    class KAT_bloodIV_A_250: ACE_bloodIV_250 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_A_250";
    };
    class KAT_bloodIV_B_250: ACE_bloodIV_250 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_B_250";
    };
    class KAT_bloodIV_AB_250: ACE_bloodIV_250 {
        displayName = "$STR_KAT_aceCirculation_BloodIV_AB_250";
    };
    class KAT_Painkiller_Item: ACE_ItemCore {
        scope = 1; // no mistake, just a placeholder, cause ACE can't handle magazines. DO NOT USE!
        author = "Katalam";
        displayName = "$STR_KAT_aceCirculation_Painkillers_Box_Display";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };
    class KAT_X_AED: adv_aceCPR_AED {
        scope = 2;
        author = "Katalam";
        displayName = $STR_KAT_aceCirculation_X_Display;
        picture = "\kat_acecirculation\images\x-series.paa";
        model = "\kat_aceCirculation\aedx\aedx.p3d";
        descriptionShort = $STR_KAT_aceCirculation_X_Desc;
        descriptionUse = $STR_KAT_aceCirculation_X_Desc;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };
    class KAT_CrossPanel: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName = "$STR_KAT_aceCirculation_crosspanel";
        descriptionShort = "$STR_KAT_aceCirculation_desc_crosspanel";
        picture = "\kat_acecirculation\images\crosspanel.paa";
        icon = "";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
