#define _ARMA_

class CfgPatches
{
	class VKN_WeaponWeaponStance //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"CBA_Extended_EventHandlers","CBA_MAIN"};
		author[] = {};
	};
};

class CfgFunctions
{
	class VKN_Stance_Functions
	{
		class Stance_Functions
		{
			file = "VKN_Weapon_Stance\VKN_Stance_Functions";
			class preInitClient
			{
				preInit = 1;
			};
		};
	};
};

class CfgUserActions
{
	class vkn_PostActionUp // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Post Up";
		tooltip = "Post weapon up.";
		onActivate = "['vkn_PostActionUp', true] call vkn_PostActionUp_Handler";		// _this is always true.
		onDeactivate = "['vkn_PostActionUp', false] call vkn_PostActionUp_Handler";	// _this is always false.
		onAnalog = "['vkn_PostActionUp', _this] call vkn_PostActionUp_AnalogHandler";	// _this is the scalar analog value.
		analogChangeThreshold = 0.01; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
	class vkn_PostActionDown // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Post Down";
		tooltip = "Post weapon Down.";
		onActivate = "['vkn_PostActionDown', true] call vkn_PostActionDown_Handler";		// _this is always true.
		onDeactivate = "['vkn_PostActionDown', false] call vkn_PostActionDown_Handler";	// _this is always false.
		onAnalog = "['vkn_PostActionDown', _this] call vkn_PostActionDown_AnalogHandler";	// _this is the scalar analog value.
		analogChangeThreshold = 0.01; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
};

class CfgDefaultKeysPresets //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
{
	class Arma2 // Arma2 is inherited by all other presets.
	{
		class Mappings
		{
			vkn_PostActionUp[] = {201,4.87588e+008}; //LCtrl + MouseWheelUp //Alternately if that doesnt work: prevAction[] = {"(0x00100000 +4)"}; //Mwheel Up //Seriously wth is this black magic.
			vkn_PostActionDown = {209,4.87588e+008}; //LCtrl + MouseWheelDown //Alternately if that doesnt work: nextAction[] = {"(0x00100000 +5)"}; //Mwheel Down
		};
	};
};

class UserActionGroups //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
{
	class PostActionsGroups // Unique classname of your category.
	{
		name = "Post Actions"; // Display name of your category.
		isAddon = 1;
		group[] = {"vkn_PostActionUp", "vkn_PostActionDown"}; // List of all actions inside this category.
	};
};
class CfgMovesBasic
{
	class States
	{
		class HubShootingRangeKneel_move1;
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMrunSnonWnonDf;
		class SprintBaseDf;
		class SprintCivilBaseDf;
		class ManActions
		{
		VKN_HighReady[] = {"VKN_HighReady","Gesture"};
		VKN_HighReady_Moving[] = {"VKN_HighReady_Moving","Gesture"};
		};
		class VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward: SprintBaseDf
		{
			file = "\VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward.rtm";
			speed = -0.61;
			canReload = 0;
			stamina = -1.25;
			actions = "NoActions";
			headBobStrength = 0;
			variantsAI[] = {};
			variantsPlayer[] = {};
			duty = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_offset.p3d";
			ConnectTo[] = {"AovrPercMrunSrasWrflDf",1.202};
			InterpolateTo[] = {"AovrPercMstpSrasWrflDf",0.232,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf_ldst",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDf",0.025,"AmovPercMevaSlowWrflDf",0.02,"Unconscious",0.02,"AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDfl",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025};
		};
		class VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right: SprintBaseDf
		{
			file = "\VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right.rtm";
			speed = -0.61;
			canReload = 0;
			stamina = -1.25;
			actions = "NoActions";
			headBobStrength = 0;
			variantsAI[] = {};
			variantsPlayer[] = {};
			duty = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_offset.p3d";
			ConnectTo[] = {"AovrPercMrunSrasWrflDf",1.202};
			InterpolateTo[] = {"AovrPercMstpSrasWrflDf",0.232,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf_ldst",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDf",0.025,"AmovPercMevaSlowWrflDf",0.02,"Unconscious",0.02,"AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDfl",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025};
		};
		class VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left: SprintBaseDf
		{
			file = "\VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Left.rtm";
			speed = -0.61;
			canReload = 0;
			stamina = -1.25;
			actions = "NoActions";
			headBobStrength = 0;
			variantsAI[] = {};
			variantsPlayer[] = {};
			duty = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			leftHandIKBeg = 0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			weaponIK = 1;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl_offset.p3d";
			ConnectTo[] = {"AovrPercMrunSrasWrflDf",1.202};
			InterpolateTo[] = {"AovrPercMstpSrasWrflDf",0.232,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf_ldst",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDf",0.025,"AmovPercMevaSlowWrflDf",0.02,"Unconscious",0.02,"AmovPercMevaSrasWrflDf_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMtacSrasWrflDf",0.02,"AmovPercMtacSrasWrflDfl",0.02,"AmovPercMtacSrasWrflDfr",0.02,"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMevaSrasWrflDfl",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025};
		};
	};
};
class CfgGesturesMale
{
	skeletonName = "OFP2_ManSkeleton";
	class Default;
	class States
	{
		class vkn_Static_Erected_Stopped_RaisedPost_Rifle: Default
		{
			canPullTrigger = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			canReload = 0;
			enableBinocular = 0;
			enableMissile = 0;
			headBobMode = 2;
			headBobStrength = 0;
			onLadder = 0;
			showHandGun = 0;
			looped = 1;
			preload = 1;
			showItemInHand = 1;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			terminal = 0;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			file = "\VKN_Weapon_Stance\Animations\vkn_Static_Erected_Stopped_RaisedPost_Rifle.rtm";
			speed = 1;
			mask = "handsWeapon";
		};
		class vkn_Moving_Erected_Moving_RaisedPost_Rifle: vkn_Static_Erected_Stopped_RaisedPost_Rifle
		{
			file = "\VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Moving_RaisedPost_Rifle.rtm";
		};
	};
};