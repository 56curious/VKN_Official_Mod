class B_VKN_PMC_VALKYRIE {
    name = "VKN - VIKING PMC - VALKYRIE";

    class Infantry {
        name = "Infantry";

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

        class B_VKN_VALKYRIE_F16G_PMC_01 {
            name = "F-16 Group";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_F16_PMC_01";
            };
            class Unit1 {
                position[] = {16,-32,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_F16_PMC_01";
            };
        };

        class B_VKN_VALKYRIE_F22G_PMC_01 {
            name = "F-22 Group";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_F22_PMC_01";
            };
            class Unit1 {
                position[] = {21,-35,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_F22_PMC_01";
            };
        };

        class B_VKN_VALKYRIE_A10CAS_PMC_01 {
            name = "A-10 CAS";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_plane.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_A10_PMC_01";
            };
            class Unit1 {
                position[] = {26,-24,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_A10_PMC_01";
            };
        };

        class B_VKN_VALKYRIE_AH64CAS_PMC_01 {
            name = "AH-64 CAS";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_AH64D_PMC_01";
            };
            class Unit1 {
                position[] = {20,-26,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_AH64D_PMC_01";
            };
        };

        class B_VKN_VALKYRIE_BHPAIR_PMC_01 {
            name = "Blackhawk Pair";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_UH60M_PMC_01";
            };
            class Unit1 {
                position[] = {24,-29,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_UH60M_PMC_01";
            };
        };

        class B_VKN_VALKYRIE_UH60MO_PMC_01 {
            name = "Blackhawk Overwatch";
            side = 1;
            faction = "B_VKN_PMC_VALKYRIE";
            icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_UH60M_PMC_01";
            };
            class Unit1 {
                position[] = {24,-29,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_UH60M_PMC_01";
            };
            class Unit2 {
                position[] = {-24,-29,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_VALKYRIE_UH60M_PMC_01";
            };
        };

    };


};