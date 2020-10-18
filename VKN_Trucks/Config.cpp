#define _ARMA_
#define private 0       // Hidden to all
#define protected 1     // Can use but still hidden
#define public 2        // Visible to all


class CfgEditorCategories {
	class VKN_Units {
		displayName = "Viking Units";
	};
};
//Class config.bin{
class DefaultEventhandlers;
class CfgPatches
{
 class A3_Soft_F_HEMTT_T1
 {
  units[] = {};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {};
 };
};
class CfgFactionClasses
{
  class HEMTT_Black
 {
  displayName = "HEMTT (Black)";
  side = 1;
  priority = 10;
  icon = "\VKN_Trucks\data\cfgFactionClasses_ca.paa";
 };
 class Hunter_Black
 {
  displayName = "Hunter (Black)";
  side = 1;
  priority = 10;
  icon = "\VKN_Trucks\data\cfgFactionClasses_ca.paa";
 };
};
class CfgVehicles
{
  class B_Truck_01_transport_F;
  class B_Truck_01_mover_F;
  class B_Truck_01_box_F;
  class B_Truck_01_Repair_F;
  class B_Truck_01_ammo_F;
  class B_Truck_01_fuel_F;
  class B_Truck_01_medical_F;
  class B_MRAP_01_F;
  class B_MRAP_01_gmg_F;
  class B_MRAP_01_hmg_F;

// Hunter //
  class B_MRAP_Black_F: B_MRAP_01_F
 {
  scope = 2;
  faction = "Hunter_Black";
  displayName = "Hunter Unarmed (Black)";
  hiddenSelections[] = {"Camo1","Camo2"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hunter\hunter_black_body_co.paa","\VKN_Trucks\hunter\hunter_black_back_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
   class B_MRAP_Black_gmg_F: B_MRAP_01_gmg_F
 {
  scope = 2;
  faction = "Hunter_Black";
  displayName = "Hunter GMG (Black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hunter\hunter_black_body_co.paa","\VKN_Trucks\hunter\hunter_black_back_co.paa","\VKN_Trucks\hunter\hunter_black_turret_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
    class B_MRAP_Black_hmg_F: B_MRAP_01_hmg_F
 {
  scope = 2;
  faction = "Hunter_Black";
  displayName = "Hunter HMG (Black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hunter\hunter_black_body_co.paa","\VKN_Trucks\hunter\hunter_black_back_co.paa","\VKN_Trucks\hunter\hunter_black_turret_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
// HEMTT //
  class B_Truck_Black_transport_F: B_Truck_01_transport_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Transport truck (Black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","VKN_Trucks\hemtt\hemtt_black_cargo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_covered_F: B_Truck_01_transport_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Transport truck topcover (Black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","VKN_Trucks\hemtt\hemtt_black_cargo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_mover_F: B_Truck_01_mover_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Mover truck (Black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","\VKN_Trucks\hemtt\hemtt_black_mprimer_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_box_F: B_Truck_01_box_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Container truck (black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","\VKN_Trucks\hemtt\hemtt_black_ammo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_Repair_F: B_Truck_01_Repair_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Repair truck (black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","\VKN_Trucks\hemtt\hemtt_black_ammo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_ammo_F: B_Truck_01_ammo_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Ammo truck (black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","\VKN_Trucks\hemtt\hemtt_black_ammo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_fuel_F: B_Truck_01_fuel_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Fuel truck (black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","\VKN_Trucks\hemtt\hemtt_black_Fuel_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
 
  class B_Truck_Black_medical_F: B_Truck_01_medical_F
 {
  scope = 2;
  faction = "HEMTT_Black";
  displayName = "Medical truck (black)";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"\VKN_Trucks\hemtt\hemtt_black_ext_01_co.paa","\VKN_Trucks\hemtt\hemtt_black_ext_02_co.paa","VKN_Trucks\hemtt\hemtt_black_cargo_co.paa"};
  editorCategory = "VKN_Units";
  editorSubCategory = "EdSubcat_Cars";
 };
};

enum {
	destructengine=2,
	destructdefault=6,
	destructwreck=7,
	destructtree=3,
	destructtent=4,
	stabilizedinaxisx=1,
	stabilizedinaxesxyz=4,
	stabilizedinaxisy=2,
	stabilizedinaxesboth=3,
	destructno=0,
	stabilizedinaxesnone=0,
	destructman=5,
	destructbuilding=1
};