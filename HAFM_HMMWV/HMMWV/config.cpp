////////////////////////////////////////////////////////////////////
//DeRap: HAFM_HMMWV\HMMWV\config.bin
//Produced from mikero's Dos Tools Dll version 6.44
//'now' is Thu May 10 08:47:54 2018 : 'file' last modified on Tue Nov 28 06:00:13 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

class DefaultEventhandlers;
class CfgPatches
{
	class HAFM_HMMWV
	{
		units[] = {"HAFM_HMMWV_M2","HAFM_HMMWV_TOW","HAFM_HMMWV_MK19","HAFM_HMMWV","HAFM_HMMWV1_M2","HAFM_HMMWV1_TOW","HAFM_HMMWV1_MK19","HAFM_HMMWV1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};


class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		HMMWV_Driver = "HMMWV_Driver";
		HMMWV_Gunner01 = "HMMWV_Gunner01";
		HMMWV_Gunner02 = "HMMWV_Gunner02";
		HMMWV_Gunner03 = "HMMWV_Gunner03";
		HMMWV_Cargo01 = "HMMWV_Cargo01";
		HMMWV_Gunner_EP1 = "HMMWV_Gunner_EP1";
		LR_gunner01_EP1 = "LR_gunner01_EP1";
		HMMWV_Cargo01_EP1 = "HMMWV_Cargo01_EP1";
		HMMWV_Cargo02_EP1 = "HMMWV_Cargo02_EP1";
		HMMWV_Cargo03_EP1 = "HMMWV_Cargo03_EP1";
		HMMWV_Cargo04_EP1 = "HMMWV_Cargo04_EP1";
		HMMWV_Driver_EP1 = "HMMWV_Driver_EP1";
		HMMWV_Gunner02_EP1 = "HMMWV_Gunner02_EP1";
		HMMWV_Gunner03_EP1 = "HMMWV_Gunner03_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Stryker_Dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\HAFM_HMMWV\HMMWV\data\anim\Stryker_Dead.rtm";
			connectTo[] = {"Unconscious",0.1};
		};
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class KIA_HMMWV_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = "false";
			terminal = 1;
			connectTo[] = {"Unconscious",0.1};
			soundEnabled = 0;
		};
		class HMMWV_Driver: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMMWV_Driver.rtm";
			interpolateTo[] = {"KIA_HMMWV_Driver",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class KIA_HMMWV_Gunner: KIA_HMMWV_Driver
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\KIA_hmmwv_gunnerOUT.rtm";
		};
		class HMMWV_Gunner01: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\hmmwv_M2gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class HMMWV_Gunner02: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\hmmwv_mk19gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class HMMWV_Gunner03: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\hmmwv_TOW_gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class KIA_HMMWV_Cargo01: KIA_HMMWV_Driver
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\KIA_HMMWV_Cargo01.rtm";
		};
		class HMMWV_Cargo01: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\hmmwv_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_HMMWV_Cargo01",0.1};
		};
		class HMMWV_Gunner_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Gunner";
			interpolateTo[] = {"HMMWV_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class LR_gunner01_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\LR_gunner01";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class HMMWV_Cargo01_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Cargo01";
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class HMMWV_Cargo02_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Cargo02";
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class HMMWV_Cargo03_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Cargo03";
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class HMMWV_Cargo04_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Cargo04";
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Cargo04_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class HMMWV_Driver_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Driver";
			interpolateTo[] = {"HMMWV_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class HMMWV_Gunner02_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Gunner02";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class HMMWV_Gunner03_EP1: Crew
		{
			file = "\HAFM_HMMWV\HMMWV\data\anim\HMWVW_Gunner03";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class HAFM_HMMWV_Base: Car_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "hmmwv";
		scope = 0;
		editorSubcategory = "EdSubcat_Cars";
		Model = "\HAFM_HMMWV\HMMWV\HMMWV50";
		Picture = "\HAFM_HMMWV\HMMWV\data\ico\HMMWV50_CA.paa";
		Icon = "\HAFM_HMMWV\HMMWV\data\ico\icomap_hmwv50_CA.paa";
		mapSize = 6;
		displayName = "HMMWV";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		extCameraPosition[] = {0.5,2,-10};
		side = 2;
		faction = "BLU_F";
		wheelCircumference = 2.834;
		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 50;
		crewVulnerable = 1;
		crewCrashProtection = 0.15;
		weapons[] = {"TruckHorn2"};
		magazines[] = {};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		armor = 80;
		damageResistance = 0.00562;
		turnCoef = 2.5;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1;
		terrainCoef = 1.5;
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.45;
		cost = 200000;
		precision = 15;
		armorGlass = 0.5;
		armorWheels = 0.1;
		soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
		soundEnviron[] = {"",0.56234133,1};
		transportMaxBackpacks = 5;
		transportSoldier = 3;
		class Library
		{
			libTextDesc = "HAFM ArmA 2 HMMWVs";
		};
		castDriverShadow = "false";
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo01","HMMWV_Cargo01","HMMWV_Cargo01"};
		threat[] = {0.8,0.6,0.3};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "";
		class TransportMagazines
		{
			class _xx_30Rnd_mas_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 100;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons{};
		idleRpm = 800;
		redRpm = 4500;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 250;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-5.75,"N",0,"D1",4.3,"D2",2.3,"D3",1.5,"D4",1,"D5",0.73};
			TransmissionRatios[] = {"High",6.759};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 276;
		maxOmega = 471;
		peakTorque = 1253;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0},{0.278,0.5},{0.35,0.75},{0.461,1},{0.6,0.95},{0.7,0.85},{0.8,0.75},{1,0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.126";
				mass = 30;
				MOI = 12.8;
				dampingRate = 0.1;
				maxBrakeTorque = 10000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 825;
				springStrength = 51625;
				springDamperRate = 8920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3500;
			};
		};
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.35481337,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.70794576,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.35481337,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.70794576,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.39810717,1,150};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.56234133,1,300};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.70794576,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.56234133,1,200};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.70794576,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.1220185,1,425};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.2589254,1,450};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.25118864,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.31622776,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.39810717,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.63095737,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.35481337,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.56234133,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.70794576,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.4125376,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.2589254,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.1220185,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.2589254,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.1220185,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.1220185,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.56234133,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"HMG_M2"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "HMMWV_Gunner01";
				viewGunnerInExternal = "true";
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				gunnerRightHandAnimName = "OtocHlaven_shake";
				gunnerLeftHandAnimName = "OtocHlaven_shake";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.38;
			};
			class HitLBWheel: HitLF2Wheel
			{
				armor = 0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.38;
			};
			class HitRBWheel: HitRF2Wheel
			{
				armor = 0.38;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_HMMWV\HMMWV\data\hmmwv_details.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks_destruct.rvmat","HAFM_HMMWV\HMMWV\data\weapons\m2.rvmat","HAFM_HMMWV\HMMWV\data\weapons\m2.rvmat","HAFM_HMMWV\HMMWV\data\m2_destruct.rvmat","HAFM_HMMWV\HMMWV\data\detailmapy\m1abrams_mg_mount.rvmat","HAFM_HMMWV\HMMWV\data\detailmapy\m1abrams_mg_mount.rvmat","HAFM_HMMWV\HMMWV\data\detailmapy\m1abrams_mg_mount_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "L svetlo";
				direction = "konec L svetla";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "P svetlo";
				direction = "konec R svetla";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class Right2: Right
			{
				useFlare = 1;
				position = "P svetlo";
			};
			class Left2: Left
			{
				useFlare = 1;
				position = "L svetlo";
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 4;
					fov = 0.7;
				};
			};
		};
	};
	class HAFM_HMMWV_M2: HAFM_HMMWV_Base
	{
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		displayName = "HMMWV-M2 Tan";
		accuracy = 0.32;
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wM2.jpg";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "HMG_M2";
			};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_2_co.paa"};
	};
	class HAFM_HMMWV_TOW: HAFM_HMMWV_Base
	{
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		accuracy = 0.32;
		displayName = "HMMWV-TOW Tan";
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wTOW.jpg";
		model = "\HAFM_HMMWV\HMMWV\HMMWVTOW";
		picture = "\HAFM_HMMWV\HMMWV\data\ico\HMMWVTOW_CA.paa";
		Icon = "\HAFM_HMMWV\HMMWV\data\ico\icomap_hmwvTOW_CA.paa";
		mapSize = 5;
		transportAmmo = 0;
		gunnerHasFlares = "true";
		cost = 150000;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		class AnimationSources: AnimationSources
		{
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_titan";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				maxElev = 20;
				weapons[] = {"missiles_titan"};
				magazines[] = {"2Rnd_GAT_missiles","2Rnd_GAT_missiles","2Rnd_GAT_missiles"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				gunnerAction = "HMMWV_Gunner03";
				gunnerOpticsModel = "\HAFM_HMMWV\HMMWV\optika_TOW";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class Damage: Damage
		{
			tex[] = {};
			mat[] = {"HAFM_HMMWV\HMMWV\data\hmmwv_details.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_destruct.rvmat","HAFM_HMMWV\HMMWV\data\weapons\tow.rvmat","HAFM_HMMWV\HMMWV\data\weapons\tow.rvmat","HAFM_HMMWV\HMMWV\data\weapons\tow_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_2_co.paa","\HAFM_HMMWV\HMMWV\data\weapons\tow_co.paa"};
		threat[] = {0.9,0.7,0.3};
	};
	class HAFM_HMMWV_MK19: HAFM_HMMWV_Base
	{
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		accuracy = 0.32;
		displayName = "HMMWV-MK19 Tan";
		model = "\HAFM_HMMWV\HMMWV\HMMWVmk19";
		picture = "\HAFM_HMMWV\HMMWV\data\ico\HMMWVmk19_CA.paa";
		Icon = "\HAFM_HMMWV\HMMWV\data\ico\icomap_hmwvmk19_CA.paa";
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wMK19.jpg";
		mapSize = 5;
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "GMG_40mm";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"GMG_40mm"};
				magazines[] = {"96Rnd_40mm_G_belt","96Rnd_40mm_G_belt"};
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				gunnerAction = "HMMWV_Gunner02";
				memoryPointGunnerOptics = "gunnerview";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_HMMWV\HMMWV\data\hmmwv_details.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks_destruct.rvmat","HAFM_HMMWV\HMMWV\data\weapons\mk19.rvmat","HAFM_HMMWV\HMMWV\data\weapons\mk19.rvmat","HAFM_HMMWV\HMMWV\data\mk19_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_2_co.paa"};
	};
	class HAFM_HMMWV: HAFM_HMMWV_Base
	{
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		accuracy = 0.32;
		model = "\HAFM_HMMWV\HMMWV\HMMWV.p3d";
		picture = "\HAFM_HMMWV\HMMWV\data\ico\HMMWV_CA.paa";
		Icon = "\HAFM_HMMWV\HMMWV\data\ico\icomap_hmwv_CA.paa";
		mapSize = 5;
		displayName = "HMMWV (Unarmed) Tan";
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\unarmed.jpg";
		hasGunner = 0;
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"HAFM_HMMWV\HMMWV\data\hmmwv_details.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_details_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_damage.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_body_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_clocks_destruct.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","HAFM_HMMWV\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_2_co.paa"};
	};
	class HAFM_HMMWV1_M2: HAFM_HMMWV_M2
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		displayName = "HMMWV-M2";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wM2.jpg";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_co.paa"};
	};
	class HAFM_HMMWV1_TOW: HAFM_HMMWV_TOW
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		displayName = "HMMWV-TOW";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wTOW.jpg";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_co.paa"};
	};
	class HAFM_HMMWV1_MK19: HAFM_HMMWV_MK19
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		displayName = "HMMWV-MK19";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\wMK19.jpg";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_co.paa"};
	};
	class HAFM_HMMWV1: HAFM_HMMWV
	{
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "EdSubcat_Cars";
		displayName = "HMMWV (Unarmed)";
		side = 1;
		faction = "BLU_F";
		vehicleClass = "Car";
		crew = "B_CTRG_Miller_F";
		typicalCargo[] = {"B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F","B_CTRG_Miller_F"};
		editorPreview = "\HAFM_HMMWV\HMMWV\UI\unarmed.jpg";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\HAFM_HMMWV\HMMWV\data\hmmwv_body_co.paa"};
	};
};

