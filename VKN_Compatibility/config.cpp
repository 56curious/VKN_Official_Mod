class CfgPatches {
    class VKN_Compatibility {
        name = VKN_Compatibility;
        author = "Curious";
        version = 1.0.0;
        versionStr = "1.0.0";
        versionAr[] = {0, 1, 0};

        units[] = {};

        requiredAddons[] = {
                "A3_Weapons_F",
                "A3_Data_F",
                "FA_Weapons_VKN",
                "VKN_Misc",
                "cba_main"
            };
        weapons[] = {"VKN_AK5C", "VKN_MP5", "VKN_VSS"};
    };
};

#define private 0
#define protected 1
#define public 2

class Extended_PreInit_EventHandlers {
    class VKN_Settings_preInit {
        init = "call compile preprocessFileLineNumbers '\VKN_Functions\XEH_Preinit.sqf'";
    };
};

//CBA JR
class asdg_FrontSideRail;
class asdg_UnderSlot;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class asdg_OpticRail1913_long;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_9MM_SMG;

//RHS JR
class rhs_western_rifle_laser_slot;
class rhs_western_rifle_laser_slot_top;
class rhs_rifle_gripod_slot;
class rhs_western_rifle_gripod_slot;


    //Normal
    class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;

class CfgWeapons {

    class FA_Base_Rifle_VKN;

    class VKN_MP5 : FA_Base_Rifle_VKN {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 115;
            allowedSlots[] = {901};

            class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                //compatibleItems[] = {};
                iconScale = 0.1;
            };

            class CowsSlot : asdg_OpticRail1913_short {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                //compatibleItems[] = {};
                iconScale = 0.1;
            };

            class PointerSlot : asdg_FrontSideRail {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                //compatibleItems[] = {};
                iconScale = 0.1;
            };
        };
    };

    class VKN_VSS : FA_Base_Rifle_VKN {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 115;
            allowedSlots[] = {901};
            class CowsSlot : asdg_OpticRail1913_long {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                //compatibleItems[] = {};
                iconScale = 0.1;
            };
            class PointerSlot : asdg_FrontSideRail {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                //compatibleItems[] = {};
                iconScale = 0.1;
            };
        };
    };

    class VKN_AK5C : FA_Base_Rifle_VKN {
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 115;
            allowedSlots[] = {901};

            class CowsSlot : asdg_OpticRail1913 {};
            class PointerSlot : asdg_FrontSideRail {};
            class MuzzleSlot : asdg_MuzzleSlot_556 {};
            class UnderBarrelSlot : asdg_UnderSlot {};

            magazineWell[] = {STANAG_556x45};
            magazines[] += {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow", "30Rnd_556x45_Stanag_Sand", "30Rnd_556x45_Stanag_Sand_green", "30Rnd_556x45_Stanag_Sand_red", "30Rnd_556x45_Stanag_Sand_Tracer_Red", "30Rnd_556x45_Stanag_Sand_Tracer_Green", "30Rnd_556x45_Stanag_Sand_Tracer_Yellow", "20Rnd_556x45_UW_mag", "150Rnd_556x45_Drum_Mag_F", "150Rnd_556x45_Drum_Sand_Mag_F", "150Rnd_556x45_Drum_Sand_Mag_Tracer_F", "150Rnd_556x45_Drum_Green_Mag_F", "150Rnd_556x45_Drum_Green_Mag_Tracer_F", "150Rnd_556x45_Drum_Mag_Tracer_F", "200Rnd_556x45_Box_F", "200Rnd_556x45_Box_Red_F", "200Rnd_556x45_Box_Tracer_F", "200Rnd_556x45_Box_Tracer_Red_F", "rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_M855_Stanag", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Orange", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag", "rhs_mag_30Rnd_556x45_M193_Stanag", "rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_EPM", "rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_SCAR", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Pull", "rhs_mag_30Rnd_556x45_M855_Stanag_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull", "rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull", "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull", "rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855_Stanag_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger", "rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger", "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger", "rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger", "rhs_mag_30Rnd_556x45_M855A1_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG", "rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_PMAG", "rhs_mag_30Rnd_556x45_Mk262_PMAG", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan", "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_M855_PMAG_Tan", "rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red", "rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan", "rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan", "rhs_mag_20Rnd_556x45_M193_Stanag", "rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red", "rhs_mag_20Rnd_556x45_M200_Stanag", "rhs_mag_20Rnd_556x45_M855_Stanag", "rhs_mag_20Rnd_556x45_M855A1_Stanag", "rhs_mag_20Rnd_556x45_Mk262_Stanag", "rhs_mag_20Rnd_556x45_M193_2MAG_Stanag", "rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red", "rhs_mag_100Rnd_556x45_M855A1_cmag", "rhs_mag_100Rnd_556x45_M855A1_cmag_mixed", "rhs_mag_100Rnd_556x45_M855_cmag", "rhs_mag_100Rnd_556x45_M855_cmag_mixed", "rhs_mag_100Rnd_556x45_Mk318_cmag", "rhs_mag_100Rnd_556x45_Mk262_cmag", "rhsusf_100Rnd_556x45_soft_pouch", "rhsusf_100Rnd_556x45_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M855_soft_pouch", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_100Rnd_556x45_M995_soft_pouch", "rhsusf_100Rnd_556x45_M200_soft_pouch", "rhsusf_100Rnd_556x45_soft_pouch_ucp", "rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M855_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M995_soft_pouch_ucp", "rhsusf_100Rnd_556x45_M200_soft_pouch_ucp", "rhsusf_100Rnd_556x45_soft_pouch_coyote", "rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M995_soft_pouch_coyote", "rhsusf_100Rnd_556x45_M200_soft_pouch_coyote", "rhsusf_200Rnd_556x45_soft_pouch", "rhsusf_200Rnd_556x45_mixed_soft_pouch", "rhsusf_200Rnd_556x45_M855_soft_pouch", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch", "rhsusf_200Rnd_556x45_soft_pouch_ucp", "rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp", "rhsusf_200Rnd_556x45_M855_soft_pouch_ucp", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp", "rhsusf_200Rnd_556x45_soft_pouch_coyote", "rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote", "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote", "rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote", "rhs_200rnd_556x45_M_SAW", "rhs_200rnd_556x45_T_SAW", "rhs_200rnd_556x45_B_SAW", "rhsusf_200Rnd_556x45_box", "rhsusf_200rnd_556x45_mixed_box", "rhsusf_200rnd_556x45_M855_box", "rhsusf_200rnd_556x45_M855_mixed_box", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_SPR", "hlc_30rnd_556x45_S", "hlc_30rnd_556x45_M", "hlc_30rnd_556x45_t", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "hlc_50rnd_556x45_EPR", "hlc_50rnd_556x45_SOST", "hlc_50rnd_556x45_SPR", "hlc_50rnd_556x45_M", "hlc_50rnd_556x45_MDim", "hlc_30rnd_556x45_EPR_PMAG", "hlc_30rnd_556x45_SOST_PMAG", "hlc_30rnd_556x45_SPR_PMAG", "hlc_30rnd_556x45_S_PMAG", "hlc_30rnd_556x45_M_PMAG", "hlc_30rnd_556x45_t_PMAG", "hlc_30rnd_556x45_MDim_PMAG", "hlc_30rnd_556x45_TDim_PMAG", "hlc_30rnd_556x45_EPR_STANAGHD", "hlc_30rnd_556x45_SOST_STANAGHD", "hlc_30rnd_556x45_SPR_STANAGHD", "hlc_30rnd_556x45_S_STANAGHD", "hlc_30rnd_556x45_M_STANAGHD", "hlc_30rnd_556x45_t_STANAGHD", "hlc_30rnd_556x45_MDim_STANAGHD", "hlc_30rnd_556x45_TDim_STANAGHD", "hlc_30rnd_556x45_EPR_L5", "hlc_30rnd_556x45_SOST_L5", "hlc_30rnd_556x45_SPR_L5", "hlc_30rnd_556x45_S_L5", "hlc_30rnd_556x45_M_L5", "hlc_30rnd_556x45_t_L5", "hlc_30rnd_556x45_MDim_L5", "hlc_30rnd_556x45_TDim_L5", "hlc_30rnd_556x45_EPR_EMAG", "hlc_30rnd_556x45_SOST_EMAG", "hlc_30rnd_556x45_SPR_EMAG", "hlc_30rnd_556x45_S_EMAG", "hlc_30rnd_556x45_M_EMAG", "hlc_30rnd_556x45_t_EMAG", "hlc_30rnd_556x45_MDim_EMAG", "hlc_30rnd_556x45_TDim_EMAG", "hlc_30Rnd_556x45_B_AUG", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30Rnd_556x45_SPR_AUG", "hlc_30Rnd_556x45_T_AUG", "hlc_30Rnd_556x45_M_AUG", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_B_AUG", "hlc_40Rnd_556x45_SOST_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_40Rnd_556x45_T_AUG", "hlc_40Rnd_556x45_TDIM_AUG", "hlc_40Rnd_556x45_M_AUG", "hlc_40Rnd_556x45_MDIM_AUG", "hlc_30rnd_556x45_EPR_G36", "hlc_30rnd_556x45_SOST_G36", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_S_G36", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_TDIM_G36", "hlc_30rnd_556x45_MDIM_G36", "hlc_30rnd_556x45_M_G36", "hlc_100rnd_556x45_EPR_G36", "hlc_100rnd_556x45_M_G36", "hlc_100rnd_556x45_Mdim_G36", "hlc_30rnd_556x45_b_HK33", "hlc_30rnd_556x45_t_HK33", "hlc_30rnd_556x45_EPR_HK33", "hlc_30rnd_556x45_SOST_HK33", "hlc_30rnd_556x45_SPR_HK33", "hlc_30rnd_556x45_M_HK33", "hlc_30rnd_556x45_tdim_HK33", "hlc_30rnd_556x45_mdim_HK33", "hlc_200rnd_556x45_M_SAW", "hlc_200rnd_556x45_T_SAW", "hlc_200rnd_556x45_Mdim_SAW", "hlc_200rnd_556x45_B_SAW", "hlc_30Rnd_556x45_EPR_sg550", "hlc_30Rnd_556x45_SOST_sg550", "hlc_30Rnd_556x45_SPR_sg550", "hlc_30Rnd_556x45_T_sg550", "hlc_30rnd_556x45_M_sg550", "hlc_30Rnd_556x45_MDIM_sg550", "hlc_30Rnd_556x45_TDIM_sg550", "rhsgref_30rnd_556x45_m21", "rhsgref_30rnd_556x45_m21_t", "rhsgref_30rnd_556x45_vhs2", "rhsgref_30rnd_556x45_vhs2_t", "rhssaf_30rnd_556x45_EPR_G36", "rhssaf_30rnd_556x45_SOST_G36", "rhssaf_30rnd_556x45_SPR_G36", "rhssaf_100rnd_556x45_EPR_G36", "rhssaf_30rnd_556x45_Tracers_G36", "rhssaf_30rnd_556x45_TDIM_G36", "rhssaf_30rnd_556x45_MDIM_G36", "ACE_30Rnd_556x45_Stanag_M995_AP_mag", "ACE_30Rnd_556x45_Stanag_Mk262_mag", "ACE_30Rnd_556x45_Stanag_Mk318_mag", "ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
        };
    };
};