#define _ARMA_

class CfgPatches
{
	class VKN_WeaponStance //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
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
	class VKN_WS
	{
		class functions
		{
			file = "\VKN_Weapon_Stance\Stance_Functions";
			class init {
				postInit = 1;
				file = "\VKN_Weapon_Stance\Stance_Functions\fn_init.sqf";
			};
			class PostAction {};
			class StanceCheck {};
			class SwitchAnimation {};
		};
	};
};
};

class CfgUserActions
{
	class vkn_PostActionUp // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Post Up"; 
		tooltip = "Bring weapon stance up.";
		onActivate = "";		// _this is always true.
		onDeactivate = "";	// _this is always false.
		onAnalog = "['vkn_PostUp'] call VKN_WS_PostAction";	// _this is the scalar analog value.
		analogChangeThreshold = 0.01; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
	class vkn_PostActionDown // This class name is used for internal representation and also for the inputAction command.
	{
		displayName = "Post Down";
		tooltip = "Post weapon Down.";
		onActivate = "['vkn_PostDown'] call VKN_WS_PostAction";		// _this is always true.
		onDeactivate = "";	// _this is always false.
		onAnalog = "['vkn_PostDown'] call VKN_WS_PostAction";	// _this is the scalar analog value.
		analogChangeThreshold = 0.01; // Minimum change required to trigger the onAnalog EH (default: 0.01).
	};
};

class CfgDefaultKeysPresets //https://community.bistudio.com/wiki/Arma_3:_Modded_Keybinding
{
	class Arma2 // Arma2 is inherited by all other presets.
	{
		class Mappings
		{
			vkn_PostActionUp[] = {2486539264 + (0x00100000 +4)}; //LCtrl + MouseWheelUp //Alternately if that doesnt work: prevAction[] = {"(0x00100000 +4)"}; //Mwheel Up //Seriously wth is this black magic.
			vkn_PostActionDown[] = {2486539264 + (0x00100000 +5)}; //LCtrl + MouseWheelDown //Alternately if that doesnt work: nextAction[] = {"(0x00100000 +5)"}; //Mwheel Down
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
	class Actions
	{
		class Default;
		class NoActions;
		class ManActions {
		vkn_raiseWeaponUp = "" //player playAction "vkn_raiseWeaponUp"
		
		Actions { 
			RifleBaseLowStandActions:NoA {

			};
		};
	};
};

class NoActions;
CfgMovesBasic {
	ManActions {
		Actions { 
			RifleBaseLowStandActions {

			};	
		};
	};
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
		class ManActions
		{
		vkn_Static_Erected_Stopped_RaisedPost_Rifle[] = {"vkn_Static_Erected_Stopped_RaisedPost_Rifle"};
		vkn_Moving_Erected_Moving_RaisedPost_Rifle[] = {"vkn_Moving_Erected_Moving_RaisedPost_Rifle"};
		};
		class Actions 
		{
			vkn_Enter_raiseWeaponUp = "";
			vkn_Exit_raiseWeaponUp = "";
		};
		class SprintBaseDf
		vkn_EnterRaiseWeaponUp =
		class VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward: SprintBaseDf //playAction VKN_Moving_Erected_Sprint_RaisedPost_Rifle_Forward
		{
			actions = "RifleStandEvasiveActionsF"; //"lowered rifle action"
			file = "\VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward.rtm";
			speed = 1.9;
			canReload = 0;
			stamina = -1.2;
			headBobStrength = 0;
			variantsAI[] = {};
			variantsPlayer[] = {};
			duty = 1;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			weaponUp = "animation"
			moveforward = "something someting etc"
			exitpoststate "someting to exit with"
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
			file = "VKN_Weapon_Stance\Animations\vkn_Moving_Erected_Sprint_RaisedPost_Rifle_Forward_Right.rtm";
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

//Actions
//It is where the character animation state machine is set up. It's a bit confusing that BI// called the animation state handler "Actions", and the actions are called "States", but this is what it is.
//
//What this thing does, is configure all the possible animation states (e.g. standing upright with a rifle, kneeling with a pistol, parachuting), and define for each of them which animations can be played in and from that given state.
//
//For instance, from the kneeling with a pistol state (PistolKneelActions), you cannot directly go into crawling forward on your stomach with a rifle (even if you have a rifle). First you would have to holster the pistol and grab your rifle, then lie down, or viceversa. Similarly, if you're prone (whether unarmed, or armed with a pistol or rifle), you cannot salute - first you'd have to stand up.
//
//What animation can or cannot be played, in what situation, is set up here in Actions. Player input (key presses, clicks) are then directed to this state machine, which interprets them and decides what action/animation the avatar will perform next, according to these rules. Same rules apply to AI players.
//
//States
//In this section, each animation file (RTM) has a corresponding entry. Animation properties, such as playback speed, interpolation rules, blending times, collision shapes to use during animation, etc.., are configured here.
//
//These animations are the ones referenced in the Actions section above. While Actions represents a complex graph, States is more like a list of items, even though some rules are also set up here (see the ConnectTo[] and InterpolateTo[] properties).
//
//cfgGestures is similar to States, it holds the bone-masked or layered animations introduced in Arma 2. Welcome to reloading-while-running.