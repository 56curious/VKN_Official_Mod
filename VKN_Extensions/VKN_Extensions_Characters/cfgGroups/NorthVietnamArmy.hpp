class O_NorthVietnamArmy {
    name = "VKN - North Vietnamese Army";

    class Infantry {
        name = "Infantry";

        class o_north_vietnamarmy_infantry_rifle_squad {
            name = "Rifle Squad";
            side = 0;
            faction = "O_NorthVietnamArmy";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Automatic_Rifleman_01";
            };
        };

        class o_north_vietnamarmy_infantry_sniper_team {
            name = "Sniper Team";
            side = 0;
            faction = "O_NorthVietnamArmy";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_North_VietnamArmy_Automatic_Rifleman_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Marksman_01";
            };
        };

        class o_north_vietnamarmy_infantry_anti_tank_team {
            name = "Anti Tank Team";
            side = 0;
            faction = "O_NorthVietnamArmy";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_Rifleman_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_North_VietnamArmy_AT_Specialist_01";
            };
        };

    };

};
