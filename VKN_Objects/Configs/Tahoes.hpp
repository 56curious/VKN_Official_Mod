/*class B_VKN_tahoe_08_PMC_01: tahoe_08 {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe";
  scope = public;

  class textureSources {
    class Gloss_Black {
      displayName = "Gloss Black";
      textures[] = {"\tahoe_08\data\skins\Tahoe_AO_black_co.paa", "\tahoe_08\data\GMT_rad_co.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Gloss_Grey {
      displayName = "Gloss Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa", "\tahoe_08\data\GMT_rad_co.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Black {
      displayName = "Matte Black";
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey {
      displayName = "Matte Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
  };
};
class B_VKN_tahoe_ltz_08_PMC_01: tahoe_ltz_08	{
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe VIP";
  scope = public;

  class textureSources {
    class Gloss_Black {
      displayName = "Gloss Black";
      textures[] = {"\tahoe_08\data\skins\Tahoe_AO_black_co.paa", "\tahoe_08\data\GMT_rad_co.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat", "\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Gloss_Grey {
      displayName = "Gloss Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa", "\tahoe_08\data\GMT_rad_co.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat", "\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };

    class Matte_Black {
      displayName = "Matte Black";
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Black_Wheels {
      displayName = "Matte Black + Wheels";
      materials[] = {"\tahoe_08\data\mat.rvmat", "\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey {
      displayName = "Matte Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey_Wheels {
      displayName = "Matte Grey + Wheels";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat", "\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
  };
};

class B_VKN_suburban_PMC_01: suburban {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Suburban";
  scope = public;

  class textureSources {
    class Gloss_Black {
      displayName = "Gloss Black";
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Gloss_Grey {
      displayName = "Gloss Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Black {
      displayName = "Matte Black";
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey {
      displayName = "Matte Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
  };
};

class B_VKN_tahoe_UNM_PMC_01: tahoe_UNM {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe Security";
  emergencyLightbarType = 1;
  scope = public;

  class textureSources {
    class Gloss_Black {
      displayName = "Gloss Black";
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Gloss_Grey {
      displayName = "Gloss Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Black {
      displayName = "Matte Black";
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey {
      displayName = "Matte Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
  };

  class UserActions {
    class stopSiren {
      displayName = "<t color='#0000ff'>Code 1</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player && (this animationPhase 'ani_siren' != 1)";
      statement = "this setVariable ['VKN_Siren', False];";
      onlyForplayer = 0;
      showWindow = 0;
    };
    class LightMode1 {
      displayName = "<t color='#ff0000'>Code Two</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player && (this animationPhase 'ani_lightbar' != 1)";
      statement = "this animate ['ani_siren', 0], this execVM '\VKN_Objects\Vehicles\tahoe_08\lightbar.sqf';";
      onlyForplayer = 0;
      showWindow = 0;
    };
    class code3 {
      displayName = "<t color='#ff0000'>Code Three</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player && (this animationPhase 'ani_siren' != 1)";
      statement = "this execVM '\VKN_Objects\Vehicles\tahoe_08\sirens.sqf', this execVM '\VKN_Objects\Vehicles\tahoe_08\lightbar.sqf';;";
      onlyForplayer = 0;
      showWindow = 0;
    };
  };
};

class B_VKN_tahoe_LUMI_PMC_01: tahoe_LUMI {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe'08 Lumi Edition";
  scope = public;

  class textureSources {
    class Gloss_Black {
      displayName = "Gloss Black";
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Gloss_Grey {
      displayName = "Gloss Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\black.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Black {
      displayName = "Matte Black";
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
    class Matte_Grey {
      displayName = "Matte Grey";
      textures[] = {"\VKN_Objects\Vehicles\tahoe_08\data\VKN_SUV_Grey.paa"};
      materials[] = {"\tahoe_08\data\mat.rvmat"};
      factions[] =  { "BLU_F", "BLU_G_F", "OPF_F", "OPF_G_F", "IND_F", "IND_G_F", "CIV_F" };
    };
  };
};
*/









//////Temp Fix
class VKN_tahoe_08_PMC_01: tahoe_08 {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe";
};
class VKN_tahoe_ltz_08_PMC_01: tahoe_ltz_08	{
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe VIP";
  armor = 45;
};
class VKN_suburban_PMC_01: suburban {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Suburban";
};
class VKN_tahoe_UNM_PMC_01: tahoe_UNM {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe Security";
  armor = 50;

  emergencyLightbarType = 2;

  class UserActions {
    class startSiren {
      displayName = "<t color='#ff0000'>Start Siren</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player";
      statement = "this setVariable ['VKN_Siren', true]; this execVM '\VKN_Objects\Vehicles\tahoe_08\sirens.sqf';";
      onlyForplayer = 0;
      showWindow = 0;
    };
    class stopSiren {
      displayName = "<t color='#0000ff'>Stop Siren</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player && (this getVariable 'lights') == true";
      statement = "this setVariable ['VKN_Siren', False]; this setVariable ['VKN_Siren_playing', false];";
      onlyForplayer = 0;
      showWindow = 0;
    };
    class LightMode1 {
      displayName = "<t color='#ff0000'>Flashing</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player";
      statement = "this execVM '\tahoe_08\scripts\code2.sqf';";
      onlyForplayer = 0;
      showWindow = 0;
    };
    class LightMode2 {
      displayName = "<t color='#ff0000'>Flashing + Siren</t>";
      position = "drivewheel";
      radius = 10;
      condition = "driver this == player";
      statement = "this setVariable ['VKN_Siren', true]; this execVM '\tahoe_08\scripts\code2.sqf'; this execVM '\VKN_Objects\Vehicles\tahoe_08\sirens.sqf';";
      onlyForplayer = 0;
      showWindow = 0;
    };
  };
};

class VKN_tahoe_LUMI_PMC_01: tahoe_LUMI {
  crew = "B_CTRG_soldier_engineer_exp_F";
  picture = "\VKN_Misc\VKN_Logo_inverted.paa";
  Icon = "\a3\soft_f_gamma\suv_01\data\ui\map_suv_01_ca.paa";
  editorPreview = "\VKN_Misc\VKN_Logo_inverted.paa";
  side = 1;
  faction = "BLU_F";
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
  displayName = "[VKN] Chevrolet Tahoe'08 Lumi Edition";
};

class B_VKN_tahoe_08_PMC_01 : VKN_tahoe_08_PMC_01 {
  scope = private;
};

class B_VKN_tahoe_ltz_08_PMC_01 : VKN_tahoe_ltz_08_PMC_01 {
  scope = private;
};
class B_VKN_tahoe_LUMI_PMC_01 : VKN_tahoe_LUMI_PMC_01 {
  scope = private;
};

//Only show these, as the others don't really apply to the mod style
class B_VKN_suburban_PMC_01 : VKN_suburban_PMC_01 {
  scope = public;
};
class B_VKN_tahoe_UNM_PMC_01 : VKN_tahoe_UNM_PMC_01 {
  scope = public;
  /*
  camo1 = body
  camo2 = wheels
  camo3 = glass
  camo4 = LED_leftHeadlight_rightFoglight
  camo5 = LED_rightHeadlight_leftFoglight
  camo6 = LED_leftWindscreen_SideFirst
  camo7 = LED_rightWindscreen_SideSecond
  camo8 = LED_leftWindscreen
  camo9 = LED_rightWindscreen
  camo10 = LED_backInner_leftTop
  camo11 = LED_backOuter_rightTop
  camo12 = LED_leftWing
  camo13 = LED_rightWing
  camo14 = LED_leftWindscreen_plateTop
  camo15 = LED_rightWindscreen_plateBottom
  camo16 = LED_rearLightMiddle
  camo17 = LED_rearLightTopBottom
  camo18 = UNKNOWN
  camo19 = UNKNOWN
  camo20 = UNKNOWN
  */
  hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8","camo9","camo10","camo11","camo12","camo13","camo14","camo15","camo16","camo17","camo18","camo19","camo20","license1","license2","license3","license4","license5","license6","license7"};
  hiddenSelectionsTextures[] = {"\tahoe_08\data\TAHOE_UNM_co.paa","\tahoe_08\data\GMT_rad_co.paa","\tahoe_08\data\glass_black.paa","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""};
};

