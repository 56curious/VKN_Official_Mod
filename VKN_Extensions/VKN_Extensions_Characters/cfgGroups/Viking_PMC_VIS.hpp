class B_VKN_PMC_VIS {
    name = "VKN - VIKING PMC - VIS";

    class Infantry {
        name = "Infantry";

        class B_VKN_VIS_ECHOSQUAD_PMC_01 {
            name = "Strike Team Echo";
            side = 1;
            faction = "B_VKN_PMC_VIS";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_ECHO_PMC_01";
            };
        };

        class B_VKN_VIS_UNDERCOVER_PMC_01 {
            name = "Undercover pair";
            side = 1;
            faction = "B_VKN_PMC_VIS";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VIS_AGENT2_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_AGENT7_PMC_01";
            };
        };

    };

    class SpecOps {
        name = "Special Forces";

    };

    class Motorized {
        name = "Motorized Infantry";

        class B_VKN_VIS_UNDERCOVERCONVOY_PMC_01 {
            name = "Undercover Convoy";
            side = 1;
            faction = "B_VKN_PMC_VIS";
            icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VIS_OFFROAD_PMC_01";
            };
            class Unit1 {
                position[] = {6,-13,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_URAL_PMC_01";
            };
            class Unit2 {
                position[] = {-6,-13,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VIS_LANDROVER_PMC_01";
            };
        };

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