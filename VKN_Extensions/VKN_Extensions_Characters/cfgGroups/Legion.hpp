class I_Gen {
  name = "Legion";

  class Infantry {
      name = "Infantry";

      class i_gen_infantry_rifle_squad {
          name = "Rifle Squad (6)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_AT_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
          class Unit4 {
              position[] = {-10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Combat_Life_Saver_01";
          };
          class Unit5 {
              position[] = {15,-15,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Marksman_01";
          };
      };

      class i_gen_infantry_fireteam_at {
          name = "Fireteam (AT)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_AT_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_fireteam_mmg {
          name = "Fireteam (MMG)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Heavy_Gunner_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
      };

      class i_gen_infantry_fireteam_marksman {
          name = "Fireteam (Marksman)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Marksman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_fireteam {
          name = "Fireteam";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_weapon_squad {
          name = "Weapon Squad (6)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Heavy_Gunner_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Combat_Life_Saver_01";
          };
          class Unit4 {
              position[] = {-10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit5 {
              position[] = {15,-15,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_sentry {
          name = "Sentry (2)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_fire_support {
          name = "Fire Support (2)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
      };

      class i_gen_infantry_machinegun_team {
          name = "Machinegun Team (2)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Heavy_Gunner_01";
          };
      };

      class i_gen_infantry_rifle_squad_heavy {
          name = "Rifle Squad Heavy (9)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Heavy_Gunner_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Marksman_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Combat_Life_Saver_01";
          };
          class Unit4 {
              position[] = {-10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
          };
          class Unit5 {
              position[] = {15,-15,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_AT_01";
          };
          class Unit6 {
              position[] = {-15,-15,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit7 {
              position[] = {20,-20,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit8 {
              position[] = {-20,-20,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
      };

      class i_gen_infantry_crewteam {
          name = "Crewteam";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "I_Gen_Crewman_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Crewman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Crewman_01";
          };
      };

      class i_gen_infantry_marksman_team {
          name = "Marksman team (2)";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Marksman_01";
          };
      };

      class i_gen_infantry_support_squad {
          name = "Support Squad";
          side = 2;
          faction = "I_Gen";
          icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
          rarityGroup = 0.5;

          class Unit0 {
              position[] = {0,0,0};
              rank = "SERGEANT";
              side = 2;
              vehicle = "B_Gen_Squad_Leader_01";
          };
          class Unit1 {
              position[] = {5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit2 {
              position[] = {-5,-5,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Rifleman_01";
          };
          class Unit3 {
              position[] = {10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Combat_Life_Saver_01";
          };
          class Unit4 {
              position[] = {-10,-10,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Combat_Life_Saver_01";
          };
          class Unit5 {
              position[] = {15,-15,0};
              rank = "PRIVATE";
              side = 2;
              vehicle = "I_Gen_Autorifleman_01";
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
