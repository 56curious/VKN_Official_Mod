class B_VKN_PMC_SIF {
    name = "VKN - VIKING PMC - SIF";

    class Infantry {
        name = "Infantry";

        class B_VKN_SIF_SQUAD_PMC_01 {
            name = "Squad";
            side = 1;
            faction = "B_VKN_PMC_SIF";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_SIF_SQL_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_RADIOMAN_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_MEDIC_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_RIFLEMAN_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AR_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_RIFLEMAN_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_DEMO_PMC_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_RIFLEMAN_PMC_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AT_PMC_01";
            };
        };

        class B_VKN_SIF_SUPPORT_PMC_01 {
            name = "Support";
            side = 1;
            faction = "B_VKN_PMC_SIF";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_SIF_SQL_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_RADIOMAN_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_DEMO_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_MEDIC_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AR_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AT_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AA_PMC_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AT_PMC_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_AR_PMC_01";
            };
            class Unit9 {
                position[] = {25,-25,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_MEDIC_PMC_01";
            };
        };

    };

    class SpecOps {
        name = "Special Forces";

    };

    class Motorized {
        name = "Motorized Infantry";

        class B_VKN_SIF_HUMVEEPAIR_PMC_01 {
            name = "Humvee Pair";
            side = 1;
            faction = "B_VKN_PMC_SIF";
            icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_SIF_HUMVEE_PMC_01";
            };
            class Unit1 {
                position[] = {5,-8,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_HUMVEE_PMC_01";
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

        class B_VKN_SIF_MARINE_PMC_01 {
            name = "Marine Assualt";
            side = 1;
            faction = "B_VKN_PMC_SIF";
            icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_SIF_BADGER_PMC_01";
            };
            class Unit1 {
                position[] = {-9,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_IFV_PMC_01";
            };
        };

    };

    class Armored {
        name = "Armor";

    };

    class Artillery {
        name = "Artillery";

    };

    class Naval {
        name = "Naval";

        class B_VKN_SIF_BEACHHEAD_PMC_01 {
            name = "Beachhead Assualt";
            side = 1;
            faction = "B_VKN_PMC_SIF";
            icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_SIF_SOC_PMC_01";
            };
            class Unit1 {
                position[] = {11,-49,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_SIF_SOC_PMC_01";
            };
        };

    };

    class Air {
        name = "Air";

    };


};