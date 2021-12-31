class B_VKN {
	name = "Viking PMC";

	class Infantry {
		name = "Infantry";

		class b_vkn_infantry_fireteam {
			name = "Fireteam (4)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_Operator_Full_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Medic_Alternative_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
		};

		class b_vkn_infantry_section {
			name = "Section (8)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_Operator_Full_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Medic_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_01";
			};
			class Unit4 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Grenadier_01";
			};
			class Unit5 {
				position[] = {15,-15,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Engineer_Demo_01";
			};
			class Unit6 {
				position[] = {-15,-15,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
			class Unit7 {
				position[] = {20,-20,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
		};

		class b_vkn_infantry_quick_reaction_force {
			name = "Quick Reaction Force (6)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_Operator_Full_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_Gunner_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Full_01";
			};
			class Unit4 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Medic_01";
			};
			class Unit5 {
				position[] = {15,-15,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Grenadier_01";
			};
		};

		class b_vkn_infantry_fireteam_anti_tank {
			name = "Fireteam - Anti-Tank (4)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_Heavy_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_Heavy_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_01";
			};
		};

		class b_vkn_infantry_fireteam_hybrid_aa_at {
			name = "Fireteam Hybrid (AA/AT) (5)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_Operator_Full_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AT_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_AA_01";
			};
			class Unit3 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Light_01";
			};
			class Unit4 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_Operator_Medic_01";
			};
		};

		class b_vkn_infantry_loki_recon_squad {
			name = "LOKI Recon Squad (6)";
			side = 1;
			faction = "B_VKN";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
			rarityGroup = 0.5;

			class Unit0 {
				position[] = {0,0,0};
				rank = "SERGEANT";
				side = 1;
				vehicle = "B_VKN_LOKI_Operator_01";
			};
			class Unit1 {
				position[] = {5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_LOKI_Operator_01";
			};
			class Unit2 {
				position[] = {-5,-5,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_LOKI_Medic_01";
			};
			class Unit3 {
				position[] = {10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_LOKI_Operator_01";
			};
			class Unit4 {
				position[] = {-10,-10,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_LOKI_Operator_01";
			};
			class Unit5 {
				position[] = {15,-15,0};
				rank = "PRIVATE";
				side = 1;
				vehicle = "B_VKN_LOKI_UAV_01";
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