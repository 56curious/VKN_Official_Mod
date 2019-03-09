class B_VKN_ODIN_PMC {
    name = "VKN - VIKING PMC ODIN";

    class Infantry {
        name = "Infantry";

        class B_VKN_ODIN_infantry_platoon_command_pmc {
            name = "Platoon Command";
            side = 1;
            FACTION = "B_VKN_ODIN_PMC_ODIN";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "COLONEL";
                side = 1;
                vehicle = "B_VKN_ODIN_Platoon_Commander_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Field_Doctor_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_OPERATOR_PMC_01";
            };
        };

        class B_VKN_ODIN_infantry_squad_pmc {
            name = "Squad (8)";
            side = 1;
            FACTION = "B_VKN_ODIN_PMC_ODIN";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_ODIN_Squad_Leader_PMC_01";
            };
            class Unit1 {
                position[] = {5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_OPERATOR_PMC_01";
            };
            class Unit2 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Grenadier_PMC_01";
            };
            class Unit3 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Marksman_PMC_01";
            };
            class Unit4 {
                position[] = {-10,-10,0};
                rank = "CORPORAL";
                side = 1;
                vehicle = "B_VKN_ODIN_Team_Leader_PMC_01";
            };
            class Unit5 {
                position[] = {15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Automatic_Rifle_Operator_PMC_01";
            };
            class Unit6 {
                position[] = {-15,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_OPERATOR_PMC_01";
            };
            class Unit7 {
                position[] = {20,-20,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Paramedic_PMC_01";
            };
        };

        class B_VKN_ODIN_infantry_fireteam_pmc {
            name = "Fireteam (4)";
            side = 1;
            FACTION = "B_VKN_ODIN_PMC_ODIN";
            icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
            rarityGroup = 0.5;

            class Unit0 {
                position[] = {0,0,0};
                rank = "SERGEANT";
                side = 1;
                vehicle = "B_VKN_ODIN_Group_Leader_PMC_01";
            };
            class Unit1 {
                position[] = {-5,-5,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Automatic_Rifle_Operator_PMC_01";
            };
            class Unit2 {
                position[] = {10,-10,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Marksman_PMC_01";
            };
            class Unit3 {
                position[] = {-5,-15,0};
                rank = "PRIVATE";
                side = 1;
                vehicle = "B_VKN_ODIN_Paramedic_PMC_01";
            };
        };
    };
};
