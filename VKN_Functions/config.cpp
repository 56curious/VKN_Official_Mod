class CfgPatches {
    class VKN_functions {
        name = VKN_Functions;
        author = "Curious";
		version = 1.0.0;
		versionStr = "1.0.0";
		versionAr[] = {0,1,0};

		units[] = {};

		requiredAddons[] =
		{
			"A3_UI_F",
			"A3_UI_F_Curator",
			"A3_Functions_F",
			"A3_Functions_F_Curator",
			"A3_Functions_F_Mark"
		};
	};
};

#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all

class CfgFunctions {
	class full_mission_load {
		class functions {
			file = "\VKN_Functions\Functions";
			class load{};
		};
	};

  class VKN_EH {
    class functions {
      file = "\VKN_functions\Event Handles";
      class eh_onMissionLoad{postInit = 1;};
    };
  };

	class VKN {
		class functions {
			file = "\VKN_functions\functions";
			class icons{postInit = 1;};

      class selectRandomIndex{};

      //class formatChange{};

      class ammoRepack{};

      class missionTemplateTool{};

      class sideGetFaction{};

      class respawnPositionSafeZone{};

      //class displayPlayerInfoAbove{};

			class creditsVKN_movie{};
			class creditsVKN_movieConfig{};

      class haltAddAction{};
      class haltRegisterCivillian{};

			class strategicMapInit{};
			class strategicMapPreInit{postInit = 1;};
			class strategicMapOpen{};
			class strategicMapRegisterMission{};
			class sunEval{};

			class emp_tgt_sfx{};
			class emp_viz_eff_emp{};
			class empConfigObj{};
			class empEffect{};
			class empSparkEffect{};
			class empSparky{};
			class empStarter{};
			class fireEMP{};
			class fireEMPWithTFRJam{};

			class monsoon_alias_hunt{};
			class monsoon_camera_shake{};
			class monsoon_effect{};
			class monsoon_rain_drop{};
			class monsoon_start{};
			class monsoon_thunder_storm{};

			class cameraSetup{};

			class redirectClientToServer{};
		};
	};
};

/*
class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class VikingActions {
                displayName = "Viking Actions";
                icon = "\VKN_Misc\VikingLogo128.paa";

                class flipVehicle {
                  displayName = "Flip Vehicle";
                  condition = "vehicle player == player";
                  exceptions[] = {};
                  statement = "call VKN_fnc_flipVehicle;";
                  icon = "\VKN_Misc\Misc\flip.paa";
                };
            };
        };
    };
};
*/
