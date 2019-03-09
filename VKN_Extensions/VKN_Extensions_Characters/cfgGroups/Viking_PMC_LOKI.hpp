class B_VKN_PMC_LOKI {
    name = "VKN - VIKING PMC - LOKI";

    class Infantry {
        name = "Infantry";

    };

    class SpecOps {
        name = "Special Forces";

        class B_VKN_LOKI_FIRETEAM_PMC_01 {
            name = "Fireteam";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_RIFLEMAN_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_BREACHER_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_MEDIC_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_GRENADIER_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_RIFLEMAN_PMC_01";
            };
        };

        class B_VKN_LOKI_SQUAD_PMC_01 {
            name = "Squad";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "CAPTAIN";
                side = 1;
                vehicle = "B_VKN_LOKI_LEADER_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_RIFLEMAN_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_RIFLEMAN_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_OPERATOR_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_BREACHER_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_RADIOMAN_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_SNIPER_PMC_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_MEDIC_PMC_01";
            };
            class Unit8 {
                position[] = {-20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_GRENADIER_PMC_01";
            };
        };

    };

    class Motorized {
        name = "Motorized Infantry";

        class B_VKN_LOKI_CIVILIAN_PMC_01 {
            name = "Civilian";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_JEEP_PMC_01";
            };
            class Unit1 {
                position[] = {5,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_OFFROAD_PMC_01";
            };
        };

        class B_VKN_LOKI_ARMOURED_PMC_01 {
            name = "Armoured";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_HUMVEE_PMC_01";
            };
            class Unit1 {
                position[] = {5,-8,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_HUMVEE_PMC_01";
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

        class B_VKN_LOKI_NAVAL_PMC_01 {
            name = "Naval team";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_naval.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_Dingy_PMC_01";
            };
            class Unit1 {
                position[] = {6,-7,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_LOKI_Dingy_PMC_01";
            };
        };

    };

    class Air {
        name = "Air";

        class B_VKN_LOKI_QRF_PMC_01 {
            name = "QRF";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_LITTLEBIRD_PMC_01";
            };
        };

        class B_VKN_LOKI_AIR_PMC_01 {
            name = "Air Assualt";
            side = 1;
            faction = "B_VKN_PMC_LOKI";
            icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_LOKI_BLACKHAWK_PMC_01";
            };
        };

    };


};