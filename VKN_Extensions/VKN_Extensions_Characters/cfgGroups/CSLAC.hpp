class O_CHRArmy_WDL {
    name = "VKN - C.S.L.A.C";

    class Infantry {
        name = "Infantry";

        class o_chrarmy_infantry_light_patrol_wdl {
            name = "Light Patrol";
            side = 0;
            faction = "O_CHRArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHRArmy_Officer_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
        };

        class o_chrarmy_infantry_heavy_patrol_wdl {
            name = "Heavy Patrol";
            side = 0;
            faction = "O_CHRArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHRArmy_Officer_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Autorifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Autorifleman_WDL_01";
            };
        };

        class o_chrarmy_infantry_squad_wdl {
            name = "Squad";
            side = 0;
            faction = "O_CHRArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHRArmy_Officer_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Autorifleman_WDL_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Rifleman_WDL_01";
            };
        };

        class o_chrarmy_infantry_marksman_team_wdl {
            name = "Marksman Team";
            side = 0;
            faction = "O_CHRArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHRArmy_Marksman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHRArmy_Marksman_WDL_01";
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

    };

    class Armored {
        name = "Armor";

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
