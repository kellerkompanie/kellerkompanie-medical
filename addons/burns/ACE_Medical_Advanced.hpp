class ACE_Medical_Advanced {
    class Injuries {
        class wounds {
            class Burn {
                name = CSTRING(burnWound);
                selections[] = {"All"};
                bleedingRate = 0.02;
                pain = 0.3;
                causes[] = {"grenade", "explosive", "shell", "backblast", "ropeburn", "burn"};
                minDamage = 0.2;
                class Minor {
                    name = CSTRING(burnWoundMinor);
                    minDamage = 0.1;
                    maxDamage = 0.2;
                };
                class Medium {
                    name = CSTRING(burnWoundMedium);
                    minDamage = 0.2;
                    maxDamage = 0.3;
                };
                class Large {
                    name = CSTRING(burnWoundLarge);
                    minDamage = 0.3;
                };
            };
        };
        class damageTypes {
            class burn {
                thresholds[] = {{0.1, 1}};
                selectionSpecific = 1;
                lethalDamage = 1;
            };
        };
    };

    class Treatment {
        class Bandaging {
            class Bandage {
                class Burn { effectiveness = 0; };
            };
            class FieldDressing {
                class Burn { effectiveness = 0; };
                class BurnMinor: Burn { effectiveness = 0; };
                class BurnMedium: Burn { effectiveness = 0; };
                class BurnLarge: Burn { effectiveness = 0; };
            };
            class PackingBandage {
                class Burn { effectiveness = 0; };
                class BurnMinor: Burn { effectiveness = 0; };
                class BurnMedium: Burn { effectiveness = 0; };
                class BurnLarge: Burn { effectiveness = 0; };
            };
            class ElasticBandage {
                class Burn { effectiveness = 0; };
                class BurnMinor: Burn { effectiveness = 0; };
                class BurnMedium: Burn { effectiveness = 0; };
                class BurnLarge: Burn { effectiveness = 0; };
            };
            class QuikClot {
                class Burn { effectiveness = 0; };
                class BurnMinor: Burn { effectiveness = 0; };
                class BurnMedium: Burn { effectiveness = 0; };
                class BurnLarge: Burn { effectiveness = 0; };
            };
            class BurnsBandage {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
                class Burn {
                    effectiveness = 1;
                };
                class BurnMinor: Burn {
                    effectiveness = 1;
                };
                class BurnMedium: Burn {
                    effectiveness = 0.8;
                };
                class BurnLarge: Burn {
                    effectiveness = 0.5;
                };
            };
        };
    };
};
