#define _ARMA_



class CfgPatches
{
	class RH_acc
	{
		units[] = {""};
		weapons[] = {"RH_eotexps3","RH_eotexps3_tan","RH_eothhs1","RH_eothhs1_tan","RH_compm2","RH_compm2l","RH_compm2_tan","RH_compm2l_tan","RH_t1","RH_t1_tan","RH_m3lr","RH_ta31rco","RH_ta31rmr_2D","RH_ta31rco_tan","RH_ta31rmr_tan_2D","RH_ta648","RH_accupoint","RH_c79","RH_c79_2D","RH_m145","RH_barska_rds","RH_cmore","RH_LTdocter","RH_LTdocterl","RH_anpvs4","RH_anpvs10"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","asdg_jointrails"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_SlotInfo;

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		RH_eotexps3 = 1;
		RH_eotexps3_tan = 1;
		RH_eothhs1 = 1;
		RH_eothhs1_tan = 1;
		RH_compm2 = 1;
		RH_compm2l = 1;
		RH_compm2_tan = 1;
		RH_compm2l_tan = 1;
		RH_t1 = 1;
		RH_t1_tan = 1;
		RH_m3lr = 1;
		RH_ta31rco = 1;
		RH_ta31rmr_2D = 1;
		RH_ta31rco_tan = 1;
		RH_ta31rmr_tan_2D = 1;
		RH_ta648 = 1;
		RH_accupoint = 1;
		RH_c79 = 1;
		RH_c79_2D = 1;
		RH_m145 = 1;
		RH_barska_rds = 1;
		RH_cmore = 1;
		RH_LTdocter = 1;
		RH_LTdocterl = 1;
		RH_anpvs4 = 1;
		RH_anpvs10 = 1;
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class Zasleh2;
	class RH_eotexps3: ItemCore
	{
		scope = 2;
		author = "Michal Hoz";
		displayName = "Eotech EXPS3";
		picture = "\RH_acc\inv\ui\eotexps3_ui_ca.paa";
		model = "\RH_acc\RH_eotexps3";
		descriptionShort = "L-3 EOTech Holo sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 3;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class EOT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
			};
		};
		inertia = 0;
	};
	class RH_eotexps3_tan: RH_eotexps3
	{
		author = "Michal Hoz";
		displayName = "Eotech EXPS3 Tan";
		picture = "\RH_acc\inv\ui\eotexps3t_ui_ca.paa";
		model = "\RH_acc\RH_eotexps3_tan";
	};
	class RH_eothhs1: ItemCore
	{
		scope = 2;
		author = "Michal Hoz";
		displayName = "Eotech EXPS3 + G33 Magnifier";
		picture = "\RH_acc\inv\ui\eothhs1_ui_ca.paa";
		model = "\RH_acc\RH_eothhs1";
		descriptionShort = "L-3 EOTech Holographic Hybrid Sight 1";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 5;
			modelOptics = "\RH_acc\RH_eothhs1_2D";
			optics = 1;
			class OpticsModes
			{
				class EOT
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {"OpticsBlur1"};
				};
				class G33
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomInit = 0.0766;
					opticsZoomMin = 0.0766;
					opticsZoomMax = 0.0766;
					discreteDistance[] = {200,300};
					discreteDistanceInitIndex = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					cameraDir = "";
				};
			};
		};
		inertia = 0.1;
	};
	class RH_eothhs1_tan: RH_eothhs1
	{
		author = "Michal Hoz";
		displayName = "Eotech EXPS3 + G33 Tan";
		picture = "\RH_acc\inv\ui\eothhs1t_ui_ca.paa";
		model = "\RH_acc\RH_eothhs1_tan";
	};
	class RH_compM2: ItemCore
	{
		scope = 2;
		author = "Patrick Svensson";
		displayName = "Aimpoint CompM2 red dot";
		picture = "\RH_acc\inv\ui\compM2_ui_ca.paa";
		model = "\RH_acc\RH_compm2";
		descriptionShort = "M68 CCO";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_compM2_tan: RH_compM2
	{
		author = "Patrick Svensson";
		displayName = "Aimpoint CompM2 Tan red dot";
		picture = "\RH_acc\inv\ui\compM2t_ui_ca.paa";
		model = "\RH_acc\RH_compm2_tan";
	};
	class RH_compM2l: ItemCore
	{
		scope = 2;
		author = "Patrick Svensson";
		displayName = "Aimpoint CompM2 red dot low";
		picture = "\RH_acc\inv\ui\compM2l_ui_ca.paa";
		model = "\RH_acc\RH_compm2l";
		descriptionShort = "M68 CCO";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class AIM
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_compM2l_tan: RH_compM2l
	{
		author = "Patrick Svensson";
		displayName = "Aimpoint CompM2 Tan red dot low";
		picture = "\RH_acc\inv\ui\compM2lt_ui_ca.paa";
		model = "\RH_acc\RH_compm2l_tan";
	};
	class RH_t1: ItemCore
	{
		scope = 2;
		author = "IanSky and Kouoaeha";
		displayName = "Aimpoint T1 red dot";
		picture = "\RH_acc\inv\ui\t1_ui_ca.paa";
		model = "\RH_acc\RH_T1";
		descriptionShort = "Micro CCO";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class T1
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_t1_tan: RH_t1
	{
		author = "IanSky and Kouoaeha";
		displayName = "Aimpoint T1 Tan red dot";
		picture = "\RH_acc\inv\ui\t1t_ui_ca.paa";
		model = "\RH_acc\RH_T1_tan";
	};
	class RH_m3lr: ItemCore
	{
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "TS-30A2";
		picture = "\RH_acc\inv\ui\m3lr_ui_ca.paa";
		model = "\RH_acc\RH_m3lr";
		descriptionShort = "Sniper scope<br/>Magnification: 3x-9x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "\RH_acc\RH_TS-30A2";
			class OpticsModes
			{
				class m3lr
				{
					opticsID = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					opticsZoomMin = 0.033574;
					opticsZoomMax = 0.087666;
					opticsZoomInit = 0.087666;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					useModelOptics = 1;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
				};
				class m3illum: m3lr
				{
					opticsID = 2;
					modelOptics = "\RH_acc\RH_TS-30A2illum.p3d";
				};
			};
		};
		inertia = 0.2;
	};
	class RH_ta31rco: ItemCore
	{
		scope = 2;
		author = "Stoke and Thanez";
		displayName = "ACOG TA31RCO";
		picture = "\RH_acc\inv\ui\ta31rco_ui_ca.paa";
		model = "\RH_acc\RH_ta31rco.p3d";
		descriptionShort = "Trijicon ACOG TA31RCO<br/>Magnification: 4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "acog";
			optics = 1;
			modelOptics = "\RH_acc\RH_ta31rco_2d";
			class OpticsModes
			{
				class acogcqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				class acogscope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.11;
					opticsZoomMax = 0.11;
					opticsZoomInit = 0.11;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
			};
		};
		inertia = 0.1;
	};
	class RH_ta31rco_tan: RH_ta31rco
	{
		author = "Stoke and Thanez";
		displayName = "ACOG TA31RCO Tan";
		picture = "\RH_acc\inv\ui\ta31rcot_ui_ca.paa";
		model = "\RH_acc\RH_ta31rco_tan.p3d";
	};

	class RH_ta31rmr_2D: ItemCore
	{
		scope = 2;
		author = "Stoke , Thanez and Excess3";
		descriptionShort = "Trijicon ACOG TA31F RMR<br/>Magnification: 4x";
		displayName = "ACOG TA31F RMR";
		model = "\RH_acc\RH_ta31rmr.p3d";
		weaponInfoType = "RscWeaponZeroing";
		picture = "\RH_acc\inv\ui\ta31rmr_ui_ca.paa";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "acog";
			optics = 1;
			modelOptics = "\RH_acc\RH_ta31f_2d";
			class OpticsModes
			{
				class acogcqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				class acogscope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.071945;
					opticsZoomMax = 0.071945;
					opticsZoomInit = 0.071945;
					memoryPointCamera = "opticView";
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					visionMode[] = {"Normal"};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
			};
		};
	};
	class RH_ta31rmr_tan_2D: RH_ta31rmr_2D
	{
		author = "Stoke , Thanez and Excess3";
		displayName = "ACOG TA31F RMR Tan";
		picture = "\RH_acc\inv\ui\ta31rmrt_ui_ca.paa";
		model = "\RH_acc\RH_ta31rmr_tan.p3d";
	};
	class RH_ta648: ItemCore
	{
		scope = 2;
		author = "Excess3";
		displayName = "ACOG TA648";
		picture = "\RH_acc\inv\ui\ta648_ui_ca.paa";
		model = "\RH_acc\RH_ta648.p3d";
		descriptionShort = "Trijicon ACOG 6x48RMR scope<br/>Magnification: 6x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 10;
			RMBhint = "acog";
			optics = 1;
			modelOptics = "\RH_acc\RH_ta648_2d";
			class OpticsModes
			{
				class acogcqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
				class acogscope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.0415;
					opticsZoomMax = 0.0415;
					opticsZoomInit = 0.0415;
					discreteDistance[] = {100,300};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 100;
					distanceZoomMax = 300;
				};
			};
		};
		inertia = 0.2;
	};
	class RH_accupoint: ItemCore
	{
		scope = 2;
		author = "Tenoyl and Blur";
		displayName = "Trijicon Accupoint";
		picture = "\RH_acc\inv\ui\accupoint_ui_ca.paa";
		model = "\RH_acc\RH_accupoint";
		descriptionShort = "Sniper Scope<br/>Magnification: 3x-9x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 2;
			mass = 10;
			optics = 1;
			modelOptics = "\RH_acc\RH_accupoint_mildot";
			class OpticsModes
			{
				class Accupoint
				{
					opticsID = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					opticsZoomMin = 0.033574;
					opticsZoomMax = 0.087666;
					opticsZoomInit = 0.087666;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					useModelOptics = 1;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					cameraDir = "";
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
				};
			};
		};
		inertia = 0.2;
	};
	class RH_c79: ItemCore
	{
		scope = 2;
		author = "Christian Ăelund";
		displayName = "Elcan C79";
		picture = "\RH_acc\inv\ui\c79_ui_ca.paa";
		model = "\RH_acc\RH_c79.p3d";
		descriptionShort = "Elcan C79 Optical sight<br/>Magnification: 3.4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "c79";
			optics = 1;
			modelOptics = "\RH_acc\RH_c79_2d";
			class OpticsModes
			{
				class c79cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				class c79scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.11;
					opticsZoomMax = 0.11;
					opticsZoomInit = 0.11;
					discreteDistance[] = {200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 200;
					distanceZoomMax = 800;
				};
			};
		};
		inertia = 0.1;
	};
	class RH_c79_2d: ItemCore
	{
		scope = 2;
		author = "Christian Ăelund";
		displayName = "Elcan C79 2D";
		picture = "\RH_acc\inv\ui\c79_ui_ca.paa";
		model = "\RH_acc\RH_c79.p3d";
		descriptionShort = "Elcan C79 Optical sight<br/>Magnification: 3.4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "c79";
			optics = 1;
			modelOptics = "\RH_acc\RH_c79_2d";
			class OpticsModes
			{
				class c79cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				class c79scope
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.073;
					opticsZoomMax = 0.073;
					opticsZoomInit = 0.073;
					discreteDistance[] = {200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 0;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 200;
					distanceZoomMax = 800;
				};
			};
		};
		inertia = 0.1;
	};
	class RH_m145: ItemCore
	{
		scope = 2;
		author = "Tom3dJay";
		displayName = "Elcan M145";
		picture = "\RH_acc\inv\ui\m145_ui_ca.paa";
		model = "\RH_acc\RH_m145.p3d";
		descriptionShort = "Elcan M145 Machine Gun Optic<br/>Magnification: 3.4x";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			opticType = 1;
			mass = 4;
			RMBhint = "m145";
			optics = 1;
			modelOptics = "\RH_acc\RH_m145_2d";
			class OpticsModes
			{
				class m145cqb
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 100;
					distanceZoomMax = 100;
				};
				class m145
				{
					opticsID = 2;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.08471;
					opticsZoomMax = 0.08471;
					opticsZoomInit = 0.08471;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
			};
		};
		inertia = 0.1;
	};
	class RH_barska_rds: ItemCore
	{
		scope = 2;
		author = "Tom3dJay";
		displayName = "Barska Red dot sight";
		picture = "\RH_acc\inv\ui\barska_ui_ca.paa";
		model = "\RH_acc\RH_barska_rds";
		descriptionShort = "Barska Electro Sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class rds
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_cmore: ItemCore
	{
		scope = 2;
		author = "Tom3dJay";
		displayName = "C-more Red dot sight";
		picture = "\RH_acc\inv\ui\cmore_ui_ca.paa";
		model = "\RH_acc\RH_cmore";
		descriptionShort = "C-more red dot sight";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class cmore
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_LTdocter: ItemCore
	{
		scope = 2;
		author = "Tom3dJay";
		displayName = "Larue Docter rds";
		picture = "\RH_acc\inv\ui\LTdocter_ui_ca.paa";
		model = "\RH_acc\RH_LTdocter";
		descriptionShort = "Red dot sight with Larue tactical Mount";
		weaponInfoType = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 2;
			modelOptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes
			{
				class Docter
				{
					opticsID = 1;
					useModelOptics = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					discreteDistance[] = {100,200};
					discreteDistanceInitIndex = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 200;
					cameraDir = "";
					visionMode[] = {};
					opticsPPEffects[] = {""};
				};
			};
		};
		inertia = 0;
	};
	class RH_LTdocterl: RH_LTdocter
	{
		scope = 2;
		author = "Tom3dJay";
		displayName = "Larue Docter rds low";
		picture = "\RH_acc\inv\ui\LTdocterl_ui_ca.paa";
		model = "\RH_acc\RH_LTdocterl";
		descriptionShort = "Red dot sight with Larue tactical Mount";
	};
	class RH_anpvs4: ItemCore
	{
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "AN/PVS4";
		picture = "\RH_acc\inv\ui\anpvs4_ui_ca.paa";
		model = "\RH_acc\RH_anpvs4.p3d";
		descriptionShort = "Night Vision Sight<br/>Magnification: 3.6x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\RH_acc\RH_anpvs4_optic";
			class OpticsModes
			{
				class pvs4
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0625;
					opticsZoomMax = 0.0625;
					opticsZoomInit = 0.0625;
					memoryPointCamera = "eye";
					visionMode[] = {"NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					cameraDir = "";
				};
			};
		};
		inertia = 0.2;
	};
	class RH_anpvs10: ItemCore
	{
		scope = 2;
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "AN/PVS10";
		picture = "\RH_acc\inv\ui\anpvs10_ui_ca.paa";
		model = "\RH_acc\RH_anpvs10.p3d";
		descriptionShort = "Day/Night Weapon Sight<br/>Magnification: 8.5x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 10;
			optics = 1;
			modelOptics = "\RH_acc\RH_anpvs10_optic";
			class OpticsModes
			{
				class pvs10
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.033574;
					opticsZoomMax = 0.033574;
					opticsZoomInit = 0.033574;
					memoryPointCamera = "eye";
					visionMode[] = {"Normal","NVG"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					discreteDistance[] = {100,200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 2;
					distanceZoomMin = 100;
					distanceZoomMax = 800;
					cameraDir = "";
				};
				class pvs10illum: pvs10
				{
					opticsID = 2;
					modelOptics = "\RH_acc\RH_anpvs10_illum_optic.p3d";
				};
			};
		};
		inertia = 0.2;
	};


};