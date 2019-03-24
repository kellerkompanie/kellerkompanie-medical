#include "BIS_AddonInfo.hpp"
class CfgPatches {
    class kat_usaf {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.80;
        requiredAddons[] = {
            "kat_aceMisc"
        };
        version = "0.1";
        versionStr = "0.1";
        author = "Katalam";
        authorUrl = "https://github.com/Katalam/kat_aceAdvMedical";
    };
};

class cfgVehicles {
    #include "vehicle_stretcher.hpp"
};
