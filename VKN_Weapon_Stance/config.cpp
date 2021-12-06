#define _ARMA_

class CfgPatches
{
	class VKN_WeaponPostStance //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.62;
		requiredAddons[] = {"CBA_Extended_EventHandlers","CBA_MAIN"};
		author[] = {};
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
	class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class HubShootingRangeKneel_move1;
		class AmovPercMstpSnonWnonDnon;
		class AmovPercMrunSnonWnonDf;
		class SprintBaseDf;
		class SprintCivilBaseDf;
		class ARMA_AlternativeRun: SprintBaseDf
		{
			file = "\AlternativeRunning\ARMA_AlternativeRun.rtm";
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