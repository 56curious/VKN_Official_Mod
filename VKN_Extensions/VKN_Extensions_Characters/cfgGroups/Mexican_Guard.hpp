class O_MexicoGuard {
    name = "VKN - Mexican National Guard";

    class Infantry {
        name = "Infantry";

        class o_mexicoguard_infantry_squad {
            name = "Squad (8)";
            side = 0;
            faction = "O_MexicoGuard";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_MexicoGuard_Squad_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Rifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Grenadier_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Auto_Rifleman_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "O_MexicoGuard_Team_Leader_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Rifleman_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Marksman_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Rifleman_01";
            };
        };

        class o_mexicoguard_infantry_sentry {
            name = "Sentry (2)";
            side = 0;
            faction = "O_MexicoGuard";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "O_MexicoGuard_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Grenadier_01";
            };
        };

        class o_mexicoguard_infantry_fireteam {
            name = "Fireteam (4)";
            side = 0;
            faction = "O_MexicoGuard";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_MexicoGuard_Team_Leader_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Grenadier_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "O_MexicoGuard_Rifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Marksman_01";
            };
        };

    };

    class SpecOps {
        name = "Special Forces";

    };

    class Motorized {
        name = "Motorized Infantry";

    };

    class Motorized_MTP {
        name = "Motorized Infantry (MTP)";

    };

    class Support {
        name = "Support Infantry";

    };

    class Mechanized {
        name = "Mechanized Infantry";

        class o_mexicoguard_infantry_mechanized_infantry {
            name = "Mechanized Infantry";
            side = 0;
            faction = "O_MexicoGuard";
            icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 0;
                vehicle = "O_MexicoGuard_M2A3_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_MexicoGuard_Team_Leader_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Grenadier_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Auto_Rifleman_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_Rifleman_01";
            };
        };

    };

    class Armored {
        name = "Armor";

        class o_mexicoguard_armored_m2a3_section {
            name = "M2A3 Section (4)";
            side = 0;
            faction = "O_MexicoGuard";
            icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_MexicoGuard_M2A3_01";
            };
            class Unit1 {
                position[] = {9,-13,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_M2A3_01";
            };
            class Unit2 {
                position[] = {-9,-13,0};
                rank = "CORPORAL";
                side = 0;
                vehicle = "O_MexicoGuard_M2A3_01";
            };
            class Unit3 {
                position[] = {18,-22,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_MexicoGuard_M2A3_01";
            };
        };

    };

    class Artillery {
        name = "Artillery";

    };

    class Naval {
        name = "Naval";

    };

    class Air {
        name = "Air";

    };


};