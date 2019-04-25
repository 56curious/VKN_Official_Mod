class O_CHArmy_WDL {
    name = "C.S.L.A";

    class Infantry {
        name = "Infantry";

        class o_charmy_infantry_rifleman_squad_wdl {
            name = "Rifleman Squad";
            side = 0;
            faction = "O_CHArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHArmy_Advanced_Rifleman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Autorifleman_WDL_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Medic_WDL_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
        };

        class o_charmy_infantry_light_at_squad_wdl {
            name = "Light AT Squad";
            side = 0;
            faction = "O_CHArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHArmy_Advanced_Rifleman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_Light_AT_WDL_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_Light_AT_WDL_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
        };

        class o_charmy_infantry_heavy_at_squad_wdl {
            name = "Heavy AT Squad";
            side = 0;
            faction = "O_CHArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHArmy_Advanced_Rifleman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_WDL_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Rifleman_Heavy_AT_WDL_01";
            };
        };

        class o_charmy_infantry_autorifleman_team_wdl {
            name = "Autorifleman Team";
            side = 0;
            faction = "O_CHArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHArmy_Autorifleman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Autorifleman_WDL_01";
            };
        };

        class o_charmy_infantry_marksman_team_wdl {
            name = "Marksman Team";
            side = 0;
            faction = "O_CHArmy_WDL";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_CHArmy_Marksman_WDL_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_CHArmy_Marksman_WDL_01";
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