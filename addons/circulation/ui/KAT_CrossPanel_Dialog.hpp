class KAT_CrossPanel_Dialog {
    idd = -1;
    movingEnable = 1;
    onLoad = "uiNamespace setVariable ['CrossPanel_Display', (_this select 0)]";
    onUnload = "_this call kat_aceCirculation_fnc_onCloseDialog";
    objects[] = {};

    class controls {
        class BACKGROUND {
            moving=1;
            type=0;
            font="TahomaB";
            SizeEX=0.025;
            idc=-1;
            style=48;
            x="safezoneX";
            y="safezoneY+0.181889";
            w="1.62727*3/4";
            h="1.62727";
            colorBackground[]={1,1,1,1};
            colorText[]={1,1,1,1};
            text = "\kat_acecirculation\images\crosspanel.paa";
        };
    };
};