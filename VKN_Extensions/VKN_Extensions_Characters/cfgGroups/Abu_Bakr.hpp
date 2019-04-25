class O_Abu_Bakr {
    name = "Abu Bakr";

    class Infantry {
        name = "Infantry";

        class o_abu_infantry_qrf_bakr {
            name = "QRF (4)";
            side = 0;
            faction = "O_Abu_Bakr";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Bomber_Bakr_01";
            };
            class Unit2 {
                position[] = {-5,-15,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Machine_Gunner_Bakr_01";
            };
            class Unit3 {
                position[] = {10,-20,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_03";
            };
        };

        class o_abu_infantry_qrf_4vehicle_bakr {
            name = "QRF (4 + Vehicle)";
            side = 0;
            faction = "O_Abu_Bakr";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_Abu_Offroader_Armed_Bakr_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Bonesetter_Bakr_01";
            };
            class Unit3 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Machine_Gunner_Bakr_01";
            };
            class Unit4 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_02";
            };
        };

        class o_abu_infantry_fireteam_bakr {
            name = "Fireteam";
            side = 0;
            faction = "O_Abu_Bakr";
            icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_03";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Machine_Gunner_Bakr_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Gunner_Bakr_02";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Bomber_Bakr_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 0;
                vehicle = "O_Abu_Marksman_Bakr_01";
            };
        };

    };
};