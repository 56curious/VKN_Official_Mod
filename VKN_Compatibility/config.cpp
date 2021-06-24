class CfgPatches
{
  class VKN_Compatibility
  {
    name = VKN_Compatibility;
    author = "Curious";
    version = 1.0.0;
    versionStr = "1.0.0";
    versionAr[] = {0, 1, 0};

    units[] = {};

    requiredAddons[] =
        {
            "A3_Weapons_F",
            "A3_Data_F",
            "cba_settings"};
    weapons[] = {"VKN_AK5C", "VKN_MP5", "VKN_VSS"};
  };
};

#define private 0
#define protected 1
#define public 2
class Extended_PreInit_EventHandlers
{
  class VKN_Settings_preInit
  {
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

//Normal
class SlotInfo;
class PointerSlot;
class CowsSlot;
class MuzzleSlot;
class WeaponSlotsInfo;

class CfgWeapons
{

  class FA_Base_Rifle_VKN;

  class VKN_MP5 : FA_Base_Rifle_VKN
  {
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass = 115;
      allowedSlots[] = {901};

      class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };

      class CowsSlot : asdg_OpticRail1913_short
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };

      class PointerSlot : asdg_FrontSideRail
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };
    };
  };

  class VKN_VSS : FA_Base_Rifle_VKN
  {
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass = 115;
      allowedSlots[] = {901};
      class CowsSlot : asdg_OpticRail1913_long
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };
      class PointerSlot : asdg_FrontSideRail
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };
    };
  };

  class VKN_AK5C : FA_Base_Rifle_VKN
  {
    class WeaponSlotsInfo : WeaponSlotsInfo
    {
      mass = 115;
      allowedSlots[] = {901};

      class MuzzleSlot : asdg_MuzzleSlot_556
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };

      class CowsSlot : asdg_OpticRail1913
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };

      class PointerSlot : asdg_FrontSideRail
      {
        //linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
        //compatibleItems[] = {};
        iconScale = 0.1;
      };

      class UnderBarrelSlot : SlotInfo
      {
        linkProxy = "\A3\data_f_mark\proxies\weapon_slots\UNDERBARREL";
        compatibleItems[] = {};
        iconScale = 0.1;
      };
    };
  };
};
