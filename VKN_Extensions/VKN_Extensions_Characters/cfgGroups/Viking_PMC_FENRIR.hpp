class B_VKN_PMC_FENRIR {
    name = "VKN - VIKING PMC - FENRIR";

    class Infantry {
        name = "Infantry";

        class B_VKN_FENRIR_FIRETEAM_PMC_01 {
            name = "Fireteam";
            side = 1;
            faction = "B_VKN_PMC_FENRIR";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 1;
                vehicle = "B_VKN_FENRIR_COMMANDER_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CREW_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CREW_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CREW_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CREW_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CREW_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_MORTARB_PMC_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_MORTART_PMC_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_MORTARB_PMC_01";
            };
            class Unit9 {
                position[] = {25,-25,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_MORTART_PMC_01";
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

        class B_VKN_FENRIR_AA_PMC_01 {
            name = "AA";
            side = 1;
            faction = "B_VKN_PMC_FENRIR";
            icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_FENRIR_BARDELAS_PMC_01";
            };
        };

        class B_VKN_FENRIR_HVYARTY_PMC_01 {
            name = "Heavy Artillery ";
            side = 1;
            faction = "B_VKN_PMC_FENRIR";
            icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_FENRIR_SHOLEF_PMC_01";
            };
            class Unit1 {
                position[] = {10,-17,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_SHOLEF_PMC_01";
            };
            class Unit2 {
                position[] = {-10,-17,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_SHOLEF_PMC_01";
            };
        };

        class B_VKN_FENRIR_ATCANNON_PMC_01 {
            name = "AT Cannon";
            side = 1;
            faction = "B_VKN_PMC_FENRIR";
            icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_FENRIR_CANNON_PMC_01";
            };
            class Unit1 {
                position[] = {9,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CANNON_PMC_01";
            };
            class Unit2 {
                position[] = {-9,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_CANNON_PMC_01";
            };
        };

        class B_VKN_FENRIR_MORTARGROUP_PMC_01 {
            name = "Mortar Group";
            side = 1;
            faction = "B_VKN_PMC_FENRIR";
            icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_FENRIR_M252_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_FENRIR_M252_PMC_01";
            };
        };

    };

    class Naval {
        name = "Naval";

    };

    class Air {
        name = "Air";

    };


};