class CfgPatches
{
	class ff7_weapons
	{
		name="ff7 weapons";
		version = "0.9c";
		units[]={};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"a3_weapons_f",
			"a3_weapons_f_exp",
			"ace_realisticnames",
			"ace_realisticweights",
			"ff7_base",
			"ff7_ammo"
		};
		author="FoxForce7";
		authors[]=
		{
			"csathdfw"
		};
		magazines[]={};
		ammo[]={};
	};
};

class Mode_SemiAuto;
//class Mode_Burst;
class Mode_FullAuto;
//class WeaponSlotsInfo;//
//class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class PistolCore;
	class Pistol: PistolCore{};
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class RifleCore;
	class Rifle: RifleCore{};
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	/*class GrenadeLauncher;//"ff7_G_40mm_1RND_HE","ff7_G_40mm_1RND_HEDP","ff7_G_40mm_1RND_FLR",
    class UGL_F: GrenadeLauncher
    {
        //magazines[] = {"1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
    };
    class GL_3GL_F: UGL_F
    {
        //magazines[] = {"1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
    };
    class EGLM: UGL_F
    {
        //magazines[] = {"1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
    };*/
	class arifle_MX_Base_F: Rifle_Base_F{};
	class SDAR_base_F: Rifle_Base_F{};
	class SMG_02_base_F: Rifle_Base_F{};
	class LRR_base_F: Rifle_Long_Base_F{};
	class GM6_base_F: Rifle_Long_Base_F{};
	class Tavor_base_F: Rifle_Base_F{};
	class mk20_base_F: Rifle_Base_F{};
	class EBR_base_F: Rifle_Long_Base_F{};
	class DMR_01_base_F: Rifle_Long_Base_F{};
	class SMG_01_Base: Rifle_Short_Base_F{};
	class pdw2000_base_F: Rifle_Base_F{};
	class arifle_katiba_Base_F: Rifle_Base_F{};
	class DMR_02_base_F: Rifle_Long_Base_F{};
	class DMR_03_base_F: Rifle_Long_Base_F{};
	class MMG_02_base_F: Rifle_Long_Base_F{};
	class MMG_01_base_F: Rifle_Long_Base_F{};
	class DMR_06_base_F: Rifle_Long_Base_F{};
	class DMR_05_base_F: Rifle_Long_Base_F{};
	class DMR_04_base_F: Rifle_Long_Base_F{};
	class arifle_TRG20_F: Tavor_base_F
	{
		displayName = "IMI CTAR-21 (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.95;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 381;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		displayName = "IMI TAR-21 (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 459.74;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		displayName = "IMI TAR-21 EGLM (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 459.74;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};/*
		class EGLM: UGL_F
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_UGL_reload",0.7943282,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadTrgUGL";
			magazines[] = {"FOX_40mm_1RND_HE","FOX_40mm_1RND_HEDP","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","FOX_40mm_1RND_FLR","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		};*/
	};
	class arifle_Mk20_F: mk20_base_F
	{
		displayName = "FN FS2000 Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.98;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 441.96;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		displayName = "FN FS2000 Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.98;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 441.96;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		displayName = "FN F2000 Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.956;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_Mk20C_plain_F: arifle_Mk20C_F
	{
		displayName = "FN F2000 Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.956;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		displayName = "FN F2000 EGLM Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.956;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};/*
		class EGLM: UGL_F
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.7943282,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMk20UGL";
			magazines[] = {"FOX_40mm_1RND_HE","FOX_40mm_1RND_HEDP","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","FOX_40mm_1RND_FLR","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		};*/
	};
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		displayName = "FN F2000 EGLM Tactical (5.56x45)";
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.956;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 406.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};/*
		class EGLM: UGL_F
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.7943282,1,10};
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadMk20UGL";
			magazines[] = {"FOX_40mm_1RND_HE","FOX_40mm_1RND_HEDP","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","FOX_40mm_1RND_FLR","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		};*/
	};
	class srifle_EBR_F: EBR_base_F
	{
		displayName = "NSWC-Crane Mk14EBR Mod0 (7.62x51)";
		magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.6;
		dexterity = 1.3;
		initSpeed = -0.9724;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 457.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 115;
		};
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		displayName = "IZHMASH VS-121 (7.62x54R)";
		magazines[] = {"10Rnd_762x54_Mag","ACE_10Rnd_762x54_Tracer_mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -1.025;
		ACE_barrelTwist = 241.3;
		ACE_barrelLength = 580.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		displayName = "ST Kinetics CPW (9x21)";
		//magazines[] = {};
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = -1.157;
		ACE_barrelTwist = 228.6;
		ACE_barrelLength = 177.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
		};
	};
	class ff7_cpw_46: hgun_PDW2000_F
	{
		displayName = "ST Kinetics CPW (4.6x30)";
		descriptionShort = "testing...";	//
		magazines[] = {"ff7_46x30_30RND_DM11","ff7_46x30_30RND_FMJ","ff7_46x30_30RND_TR","ff7_46x30_40RND_DM11","ff7_46x30_40RND_FMJ","ff7_46x30_40RND_TR"};
		dlc = "ff7";
		scope = 2;
		author = "BI, FoxForce7";
		//picture = "\ff7_weapons\data\pic_cpw_ca.paa";
		inertia = 0.2;
		dexterity = 1.8;
		initSpeed = -1;
		ACE_barrelTwist = 160.1;
		ACE_barrelLength = 177.8;
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.002};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0002,0.001,0.0005};
		recoil = "recoil_trg20";
		modes[] = {"Single","FullAuto"};	//modes[] = {"Single","Burst","FullAuto"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 35;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"muzzle_snds_338_black","muzzle_snds_acp"};
			};
			class CowsSlot: CowsSlot{};
			class PointerSlot{};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.05;
			recoil = "recoil_single_trg";
			recoilProne = "recoil_single_prone_trg";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_01",0.5011872,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\closure_pdw2000_02",0.5011872,1.1,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_01",1.2589254,1,1000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_short_02",1.2589254,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_interior",1.5848932,1,1000};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_trees",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_forest",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_meadows",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\pdw2000_tail_houses",1.0,1,1000};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_01",0.8912509,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_02",0.8912509,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_short_03",0.8912509,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\silencer_PDW2000_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\PDW2000\Silencer_pdw2000_Tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.05;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			dispersion = 0.002;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		displayName = "Stoner 99 LMG (6.5x39)";
		magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box_Tracer","ACE_200Rnd_65x39_cased_Box_Tracer_Dim"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9763;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368.3;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};/*
	class fox_stoner_clf: LMG_Mk200_F
	{
		displayName = "Stoner 99 LMG (CLF)";
		descriptionShort = "testing... <br />1200rpm <br />needles in a haystack";	//
		magazines[] = {"ff7_CLF_200Rnd_APDS","ff7_CLF_200Rnd_APFSDS"};
		dlc="ff7";
		scope = 2;
		author = "BI, FoxForce7";
		//picture = "\ff7_weapons\data\pic_stoner_ca.paa";
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		recoil = "recoil_trg20";
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -1;
		ACE_barrelTwist = 254.0;	//actual 1:85"/2159mm
		ACE_barrelLength = 368.3;
		ACE_Overheating_allowSwapBarrel = 1;
		ACE_Overheating_Dispersion[] = {0,-0.001,0.001,0.002};
		ACE_Overheating_SlowdownFactor[] = {1,1,1,0.9};
		ACE_Overheating_JamChance[] = {0,0.0002,0.001,0.0005};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {"muzzle_snds_H_SW","muzzle_snds_H_MG"};
			};
		};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.05;	// 0.05 = 1200	0.033 = 1800
			dispersion = 0.0005;
			recoil = "recoil_auto_trg";
			recoilProne = "recoil_auto_prone_trg";
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_01",0.25118864,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_02",0.25118864,1,10};
				closure3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Closure_Mk200_03",0.25118864,1,10};
				soundClosure[] = {"closure1",0.33,"closure2",0.33,"closure3",0.34};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_01",1.7782794,1,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_02",1.7782794,1,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_short_03",1.7782794,1,1200};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1.0,1,1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.8912509,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.8912509,1,200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.8912509,1,200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
						frequency = 1;
						volume = "interior";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far_optic1: medium
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			burst = 3;
			requiredOpticType = 2;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.01;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 900;
		};
		aiDispersionCoefY = 24.0;
		aiDispersionCoefX = 21.0;
	};*/
	class SMG_01_F: SMG_01_Base
	{
		displayName = "KRISS Vector (.45ACP)";
		magazines[] = {"30Rnd_45ACP_Mag_SMG_01","ff7_45acp_30rnd_JHP","30Rnd_45ACP_Mag_SMG_01_tracer_green","30Rnd_45ACP_Mag_SMG_01_Tracer_Red","30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -1.016;
		ACE_barrelTwist = 406.4;
		ACE_barrelLength = 139.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 50;	//actual: 60	van: 40
		};
	};
	class ff7_vector_45: SMG_01_F
	{
		displayName = "KRISS Vector (.45ACP)";
		descriptionShort = "testing...";	//
		dlc = "ff7";
		scope = 2;
		author = "BI, FoxForce7";
		picture = "\ff7_weapons\data\pic_vector_ca.paa";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\ff7_weapons\data\tex_vector_body_co.paa","\ff7_weapons\data\tex_vector_att_co.paa","\ff7_weapons\data\tex_vector_bs_co.paa"};
	};
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		displayName = "DIO KH2002 (6.5x39)";
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		//inertia = 0.4;
		//dexterity = 1.6;
		initSpeed = -1.08;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 528.98;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 80;
		};
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		displayName = "DIO KH2002C (6.5x39)";
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		//inertia = 0.3;
		//dexterity = 1.7;
		initSpeed = -1.07;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 480.72;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 75;
		};
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		displayName = "DIO KH2002GL (6.5x39)";
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"};
		//inertia = 0.5;
		//dexterity = 1.5;
		initSpeed = -1.08;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 528.98;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};/*
		class EGLM: UGL_F
		{
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadKatibaUGL";
			magazines[] = {"FOX_40mm_1RND_HE","FOX_40mm_1RND_HEDP","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","ACE_HuntIR_M203","FOX_40mm_1RND_FLR","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
		};*/
	};
	/*
    class SMG_02_F: SMG_02_base_F	//Scorpion Evo 3 A1 9mm
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class hgun_P07_F: Pistol_Base_F	//Walther p99
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class hgun_Rook40_F: Pistol_Base_F	//mp-443 Grach
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class hgun_ACPC2_F: Pistol_Base_F	//Custom Covert II
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class hgun_Pistol_heavy_01_F: Pistol_Base_F	//FNX-45 Tactical
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class hgun_Pistol_heavy_02_F: Pistol_Base_F	//Chiappa Rhino 60DS
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    class hgun_Pistol_Signal_F: Pistol_Base_F	//Taurus Judge
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class LMG_Zafir_F: Rifle_Long_Base_F	//Negev NG7 van: 320	i:0.9	d 1.2
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    */
    class srifle_LRR_F: LRR_base_F	//CheyTac Intervention M-200
    {
        displayName = "CheyTac Intervention M-200 (.408)";
        //magazines[] = {};
        inertia = 1.1;	//van 1.1
		dexterity = 1.1;	//van 1.1
        initSpeed = -1.0;
		ACE_barrelTwist = 330.2;
		ACE_barrelLength = 736.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 300;	//van 420
		};
    };
    class srifle_LRR_camo_F: srifle_LRR_F	//CheyTac Intervention M-200
    {
        displayName = "CheyTac Intervention M-200 (.408)";
        //magazines[] = {};
        inertia = 1.1;
		dexterity = 1.1;
        initSpeed = -1.0;
		ACE_barrelTwist = 330.2;
		ACE_barrelLength = 736.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 300;
		};
    };
    class srifle_GM6_F: GM6_base_F	//Gepárd GM-6 Lynx
    {
        displayName = "Gepard GM-6 Lynx (12.7x108)";
        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag"};
		inertia = 1;	//van 1.2
		dexterity = 1.0;	//van 1
		initSpeed = -1.0;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 735; //735mm = 230 weight
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 260;	//van 480
		};
    };
    class srifle_GM6_camo_F: srifle_GM6_F	//Gepárd GM-6 Lynx
    {
        displayName = "Gepard GM-6 Lynx (12.7x108)";
        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag"};
		inertia = 1;
		dexterity = 1.0;
		initSpeed = -1.0;
		ACE_barrelTwist = 381.0;
		ACE_barrelLength = 735;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 260;
		};
    };
    class srifle_DMR_02_F: DMR_02_base_F //MAR-10 .338 (Black)
    {
        displayName = "NOREEN Bad News 338 ULM (.338)";
        magazines[] = {"10Rnd_338_Mag","ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag"};
		inertia = 0.6;	//van 0.9
		dexterity = 1.3;	//van 1.7
		initSpeed = -0.962;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 660.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;	//actual: 13lb +handguard / van: 320
		};
    };
    class srifle_DMR_02_camo_F: srifle_DMR_02_F //MAR-10 .338 (Camo)
    {
        displayName = "NOREEN Bad News 338 ULM (.338)";
        magazines[] = {"10Rnd_338_Mag","ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag"};
		inertia = 0.6;
		dexterity = 1.3;
		initSpeed = -0.962;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 660.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
    };
    class srifle_DMR_02_sniper_F: srifle_DMR_02_F //MAR-10 .338 (Sand)
    {
        displayName = "NOREEN Bad News 338 ULM (.338)";
        magazines[] = {"10Rnd_338_Mag","ACE_10Rnd_338_300gr_HPBT_Mag","ACE_10Rnd_338_API526_Mag"};
		inertia = 0.6;
		dexterity = 1.3;
		initSpeed = -0.962;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 660.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 140;
		};
    };
    class srifle_DMR_03_F: DMR_03_base_F	//Mk-I EMR (Black)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_03_khaki_F: srifle_DMR_03_F //Mk-I EMR (Khaki)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_03_tan_F: srifle_DMR_03_F //Mk-I EMR (Sand)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_03_multicam_F: srifle_DMR_03_F //Mk-I EMR (Camo)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_03_woodland_F: srifle_DMR_03_F //Mk-I EMR (Woodland)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_03_spotter_F: srifle_DMR_03_F //Mk-I EMR (provisional/spotter)
    {
        displayName = "SIG SG556-1 DMR (7.62x51)";
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.9843;
		ACE_barrelTwist = 254.0;
		ACE_barrelLength = 533.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
    };
    class srifle_DMR_04_F: DMR_04_base_F //ASP-1 Kir 12.7 mm (Black)
    {
        //displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 450.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_04_Tan_F: srifle_DMR_04_F //ASP-1 Kir 12.7 mm (Tan)
    {
        //displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 450.1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_05_blk_F: DMR_05_base_F //Cyrus 9.3 mm (Black) mass 200
    {
        //displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 359.9;
		ACE_barrelLength = 620.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_05_hex_F: srifle_DMR_05_blk_F //Cyrus 9.3 mm (Hex)
    {
        //displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 359.9;
		ACE_barrelLength = 620.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_05_tan_f: srifle_DMR_05_blk_F //Cyrus 9.3 mm (Tan)
    {
        //displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 359.9;
		ACE_barrelLength = 620.0;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_06_camo_F: DMR_06_base_F //M14A1 (Camo)
    {
        //displayName = ;
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		//inertia = 0.5;
		//dexterity = 1.5;
		initSpeed = -0.9916;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F //M14A1 (Olive)
    {
        //displayName = ;
        magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		//inertia = 0.5;
		//dexterity = 1.5;
		initSpeed = -0.9916;
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 558.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class MMG_01_hex_F: MMG_01_base_F //Navid 9.3 mm (Hex)
    {
        displayName = "HK MG5 'HK121' (9.3x64)";
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 359.9;
		ACE_barrelLength = 549.9;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=240;	//van: 380	i: 1.2	d: 1.7
		};
    };
    class MMG_01_tan_F: MMG_01_hex_F //Navid 9.3 mm (Tan)
    {
        displayName = "HK MG5 'HK121' (9.3x64)";
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 359.9;
		ACE_barrelLength = 549.9;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=240;
		};
    };
    class MMG_02_camo_F: MMG_02_base_F //SPMG .338 (MTP)
    {
        displayName = "GD LWMMG (.338)";
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		initSpeed = -1.0;
		ACE_barrelTwist = 234.9;
		ACE_barrelLength = 609.6;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=230;	//van: 340	i: 1	d: 1.7
		};
    };
    class MMG_02_black_F: MMG_02_camo_F //SPMG .338 (Black)
    {
        displayName = "GD LWMMG (.338)";
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 234.9;
		ACE_barrelLength = 609.6;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=230;
		};
    };
    class MMG_02_sand_F: MMG_02_camo_F //SPMG .338 (Sand)
    {
        displayName = "GD LWMMG (.338)";
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
        initSpeed = -1.0;
		ACE_barrelTwist = 234.9;
		ACE_barrelLength = 609.6;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=230;
		};
    };
    /*
    class arifle_SDAR_F: SDAR_base_F	//RFB SDAR
    {
        displayName = ;
       	magazines[] = {"20Rnd_556x45_UW_mag","FOX_556x45_30Rnd_TR","FOX_556x45_30Rnd_EPR","FOX_556x45_30Rnd_SPR","FOX_556x45_30Rnd_SOST","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim"};
		//inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_F: arifle_MX_Base_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_Black_F: arifle_MX_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MXC_F: arifle_MX_Base_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MXC_Black_F: arifle_MXC_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_GL_F: arifle_MX_Base_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_GL_Black_F: arifle_MX_GL_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_SW_F: arifle_MX_Base_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MX_SW_Black_F: arifle_MX_SW_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MXM_F: arifle_MX_Base_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    class arifle_MXM_Black_F: arifle_MXM_F
    {
        displayName = ;
        //magazines[] = {};
        //inertia = 0.5;
		//dexterity = 1.5;
		//initSpeed = -1.0;
		//ACE_barrelTwist = 254.0;
		//ACE_barrelLength = 508.0;
        class WeaponSlotsInfo: WeaponSlotsInfo
		{
			//mass=100;
		};
    };
    */
	/*class arifle_SPAR_01_base_F
	{
		class WeaponSlotsInfo;//
	};
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.3;
		dexterity = 1.7;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 70;
		};
	};
	class arifle_SPAR_01_GL_base_F
	{
		class WeaponSlotsInfo;//
	};
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
	{
		magazines[] = {"ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 254;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 100;
		};
	};
	class arifle_SPAR_02_base_F
	{
		class WeaponSlotsInfo;//
	};
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		scope = 2;
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		scope = 2;
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		magazines[] = {"150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F","ACE_30Rnd_556x45_Stanag_Mk262_mag","ACE_30Rnd_556x45_Stanag_Mk318_mag","ACE_30Rnd_556x45_Stanag_M995_AP_mag","ACE_30Rnd_556x45_Stanag_Tracer_Dim","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		scope = 2;
		inertia = 0.4;
		dexterity = 1.6;
		initSpeed = -0.989;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 85;
		};
	};
	class arifle_SPAR_03_base_F
	{
		class WeaponSlotsInfo;//
	};
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
	{
		magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		scope = 2;
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
	{
		magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		scope = 2;
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
	{
		magazines[] = {"ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer_Dim","ACE_20Rnd_762x51_Mk316_Mod_0_Mag","ACE_20Rnd_762x51_M118LR_Mag","ACE_20Rnd_762x51_Mk319_Mod_0_Mag","ACE_20Rnd_762x51_M993_AP_Mag","ACE_20Rnd_762x51_Mag_SD","20Rnd_762x51_Mag"};
		scope = 2;
		inertia = 0.5;
		dexterity = 1.5;
		initSpeed = -0.989;
		ACE_barrelTwist = 279.4;
		ACE_barrelLength = 508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 105;
		};
	};*/
	/*class arifle_CTAR_base_F;
	class arifle_CTAR_blk_F: arifle_CTAR_base_F
	{
		displayName="QBZ-95-1";
	};
	class arifle_CTAR_GL_base_F;
	class arifle_CTAR_GL_blk_F: arifle_CTAR_GL_base_F
	{
		displayName="QBZ-95-1 GL";
	};
	class arifle_CTARS_base_F;
	class arifle_CTARS_blk_F: arifle_CTARS_base_F
	{
		displayName="QBZ-95-1 LSW";
	};
	class DMR_07_base_F;
	class srifle_DMR_07_blk_F: DMR_07_base_F
	{
		displayName="QBU-88";
	};
	class srifle_DMR_07_ghex_F: DMR_07_base_F
	{
		displayName="QBU-88";
	};
	class srifle_DMR_07_hex_F: DMR_07_base_F
	{
		displayName="QBU-88";
	};
	class LMG_03_base_F;
	class LMG_03_F: LMG_03_base_F
	{
		displayName="M249 SPW";
	};
	class SMG_05_base_F;
	class SMG_05_F: SMG_05_base_F
	{
		displayName="MP5K";
	};*/
	/*class Secondary: Rifle_Base_F{};//apex
	class arifle_ARX_base_F: Rifle_Base_F{};//apex
	class arifle_ARX_blk_F: arifle_ARX_base_F//apex
	{
		displayName="TYPE115";
		magazines[] = {"30Rnd_65x39_caseless_green","30Rnd_65x39_caseless_green_mag_Tracer","ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim","ff7_300BLK_30Rnd_VMAX","ff7_300BLK_30Rnd_TR"};
		scope = 2;
		//dlc = "ff7";
		//author = "BI, FoxForce7";
		inertia = 0.5;
		dexterity = 1.3;
		initSpeed = -1.0;
		ACE_barrelTwist = 203.2;
		ACE_barrelLength = 533.4;
		class Secondary: Secondary
		{
			displayName = "Type115 .50BW";
			magazines[] = {"10Rnd_50BW_Mag_F","ff7_50BW_10Rnd_EXP"};
			inertia = 0.5;
			dexterity = 1.3;
			initSpeed = 333;
			ACE_barrelTwist = 508.0;
			ACE_barrelLength = 152.4;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 110;
		};
	};*/
};