class CfgMovesBasic {
    class ManActions {
        GVAR(stretcher) = QGVAR(stretcher);
    };
};

class CfgMovesMaleSdr: CfgMovesBasic {
    class States {
        class Crew;
        class GVAR(stretcher): crew {
            file = "a3\anims_f\data\anim\sdr\inj\ainjppnemstpsnonwnondnon.rtm";
            interpolateTo[] = {"Unconscious", 0.02};
            leftHandIKCurve[] = {};
            rightHandIKCurve[] = {};
        };
    };
};
