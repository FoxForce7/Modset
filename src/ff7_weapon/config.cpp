class CfgPatches
{
	class ff7_weapon
	{
		name="ff7_weapon";
		requiredAddons[]=
		{
			"ff7_core",
			"ff7_ammo",
			"ace_common",
			"ace_ballistics",
			"ace_smallarms",
			"ace_realisticWeights",
			"ace_realisticnames"
		};
		author="FoxForce7";
		authors[]=
		{
			"BI, ACETeam, csathdfw"
		};
		version="2.2";
		requiredVersion=1.8200001;
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class hgun_P07_F: Pistol_Base_F
	{
		displayName="P99 (9x21)";
		descriptionShort="Walther P99<br />0.63kg / 1.4lbs<br />102mm / 4.0inch<br />                          ";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ff7_13rnd_9x21_sub_mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-0.906977;
		ACE_barrelTwist=254;
		ACE_barrellength=101.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=14;
		};
	};
	class hgun_P07_khk_F: hgun_P07_F
	{
		displayName="P99 (9x21)";
		descriptionShort="Walther P99<br />0.63kg / 1.4lbs<br />102mm / 4.0inch<br />                          ";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ff7_13rnd_9x21_sub_mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-0.906977;
		ACE_barrelTwist=254;
		ACE_barrellength=101.6;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=14;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		displayName="MP-443 'Grach' (9x21)";
		descriptionShort="Izhevsk MP-443 Grach<br />0.96kg / 2.1lbs<br />112mm / 4.4inch<br />                          ";
		magazines[]=
		{
			"16Rnd_9x21_Mag",
			"10Rnd_9x21_Mag",
			"ff7_13rnd_9x21_sub_mag",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-0.93488401;
		ACE_barrelTwist=254;
		ACE_barrellength=111.76;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=21;
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		displayName="Custom Covert II (.45ACP)";
		descriptionShort="Kimber-America Custom Covert II<br />0.88kg / 1.9lbs<br />127mm / 5.0inch<br />                          ";
		magazines[]=
		{
			"11Rnd_45ACP_Mag",
			"ff7_10rnd_45acp_plus_mag"
		};
		initSpeed=-0.98000002;
		ACE_barrelTwist=406.39999;
		ACE_barrellength=127;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=19;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		displayName="FNX-45 Tactical (.45ACP)";
		descriptionShort="FNHerstal FNX-45 Tactical FDE<br />0.94kg / 2.1lbs<br />135mm / 5.35inch<br />                          ";
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"11Rnd_45ACP_Mag",
			"ff7_10rnd_45acp_plus_mag"
		};
		initSpeed=-0.98000002;
		ACE_barrelTwist=406.39999;
		ACE_barrellength=134.60001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=21;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		displayName="Rhino 60DS (.45ACP)";
		descriptionShort="Chiappa Rhino 60DS<br />0.91kg / 2.0lbs<br />76mm / 2.0inch<br />                          ";
		magazines[]=
		{
			"6Rnd_45ACP_Cylinder"
		};
		initSpeed=-0.89999998;
		ACE_barrelTwist=406.39999;
		ACE_barrellength=76.199997;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;
		};
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		displayName="Makarov PM (9x18PM)";
		descriptionShort="Izhevsk Makarov PM<br />0.73kg / 1.6lbs<br />94mm / 3.7inch<br />                          ";
		magazines[]=
		{
			"ACE_16Rnd_9x19_mag"
		};
		initSpeed=-0.88372099;
		ACE_barrelTwist=254;
		ACE_barrellength=93.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=16;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.063157998;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.063157998;
		};
		class WeaponSlotsInfo;
	};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		displayName="[SMG] CPW (9x21)";
		descriptionShort="ST-Kinetics CPW<br />1.54kg / 3.4lbs<br />178mm / 7.0inch<br />950rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag_SMG_02",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-0.99418598;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=177.8;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=33;
		};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.050000001;
		};
		class Burst: Mode_Burst
		{
			burst=2;
			reloadTime=0.050000001;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.050000001;
		};
		class WeaponSlotsInfo;
	};
	class SMG_01_F: SMG_01_Base
	{
		displayName="[SMG] Vector 'Super-V' (.45ACP)";
		descriptionShort="KRISS Vector/Super-V GenI<br />2.6kg / 5.7lbs<br />140mm / 5.5inch<br />1200rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_45ACP_Mag_SMG_01",
			"9Rnd_45ACP_Mag",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow"
		};
		initSpeed=-1.00148;
		ACE_barrelTwist=406.39999;
		ACE_barrellength=139.7;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=57;
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.054545;
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.054545;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.054545;
		};
		class WeaponSlotsInfo;
	};
	class SMG_02_F: SMG_02_base_F
	{
		displayName="[SMG] Scorpion Evo3 (9x21)";
		descriptionShort="ÄŒZUB Scorpion Evo3 A1<br />2.1kg / 4.6lbs<br />166mm / 6.5inch<br />1100rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag_SMG_02",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-1.00029;
		ACE_barrelTwist=254;
		ACE_barrellength=195.58;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=46;
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SMG_05_F: SMG_05_base_F
	{
		displayName="[SMG] MP5K (9x21)";
		descriptionShort="HecklerKoch MP5K<br />2.0kg / 4.4lbs<br />115mm / 4.5inch<br />900rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag_SMG_02",
			"16Rnd_9x21_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"16Rnd_9x21_green_Mag",
			"16Rnd_9x21_red_Mag",
			"16Rnd_9x21_yellow_Mag"
		};
		initSpeed=-0.94378299;
		ACE_barrelTwist=254;
		ACE_barrellength=115;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=44;
		};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
		};
		class WeaponSlotsInfo;
	};
	class arifle_TRG20_F: Tavor_base_F
	{
		displayName="[AR] CTAR-21 (5.56x45)";
		descriptionShort="Israel Military Industries CTAR-21<br />3.18kg / 7.0lbs<br />381mm / 15.0inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.961496;
		ACE_barrelTwist=177.8;
		ACE_barrellength=381;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=70;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		displayName="[AR] TAR-21 (5.56x45)";
		descriptionShort="Israel Military Industries TAR-21<br />3.27kg / 7.2lbs<br />460mm / 18.1inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=177.8;
		ACE_barrellength=459.73999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=72;
		};
	};
	class arifle_TRG21_GL_F: arifle_TRG21_F
	{
		displayName="[ARGL] GTAR-21 (5.56x45)";
		descriptionShort="Israel Military Industries TAR-21<br />3.27kg / 7.2lbs<br />460mm / 18.1inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=177.8;
		ACE_barrellength=459.73999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=102;
		};
	};
	class mk20_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.070588;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.070588;
		};
		class WeaponSlotsInfo;
	};
	class arifle_Mk20_F: mk20_base_F
	{
		displayName="[AR] FS2000 (5.56x45) camo";
		descriptionShort="FNHerstal FS2000 Tactical<br />3.65kg / 8.0lbs<br />442mm / 17.4inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.99284899;
		ACE_barrelTwist=177.8;
		ACE_barrellength=441.95999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=81;
		};
	};
	class arifle_Mk20_plain_F: arifle_Mk20_F
	{
		displayName="[AR] FS2000 (5.56x45)";
		descriptionShort="FNHerstal FS2000 Tactical<br />3.65kg / 8.0lbs<br />442mm / 17.4inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.99284899;
		ACE_barrelTwist=177.8;
		ACE_barrellength=441.95999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=81;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		displayName="[AR] F2000 (5.56x45) camo";
		descriptionShort="FNHerstal F2000 Tactical<br />3.44kg / 7.6lbs<br />406mm / 16.0inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.97429699;
		ACE_barrelTwist=177.8;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76;
		};
	};
	class arifle_Mk20C_plain_F: arifle_Mk20C_F
	{
		displayName="[AR] F2000 (5.56x45)";
		descriptionShort="FNHerstal F2000 Tactical<br />3.44kg / 7.6lbs<br />406mm / 16.0inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.97429699;
		ACE_barrelTwist=177.8;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=76;
		};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		displayName="[ARGL] F2000GL (5.56x45) camo";
		descriptionShort="FNHerstal F2000GL Tactical<br />4.79kg / 10.6lbs<br />406mm / 16.0inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.97429699;
		ACE_barrelTwist=177.8;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=106;
		};
	};
	class arifle_Mk20_GL_plain_F: arifle_Mk20_GL_F
	{
		displayName="[ARGL] F2000GL (5.56x45)";
		descriptionShort="FNHerstal F2000GL Tactical<br />4.79kg / 10.6lbs<br />406mm / 16.0inch<br />850rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.97429699;
		ACE_barrelTwist=177.8;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=106;
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
		};
		class WeaponSlotsInfo;
	};
	class arifle_SPAR_01_blk_F: arifle_SPAR_01_base_F
	{
		displayName="[AR] M416 (5.56x45) blk";
		descriptionShort="HecklerKoch M416 A5<br />3.12kg / 6.9lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=69;
		};
	};
	class arifle_SPAR_01_khk_F: arifle_SPAR_01_base_F
	{
		displayName="[AR] M416 (5.56x45) khk";
		descriptionShort="HecklerKoch M416 A5<br />3.12kg / 6.9lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=69;
		};
	};
	class arifle_SPAR_01_snd_F: arifle_SPAR_01_base_F
	{
		displayName="[AR] M416 (5.56x45) sand";
		descriptionShort="HecklerKoch M416 A5<br />3.12kg / 6.9lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=69;
		};
	};
	class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_SPAR_01_GL_blk_F: arifle_SPAR_01_GL_base_F
	{
		displayName="[ARGL] M416GL (5.56x45) blk";
		descriptionShort="HecklerKoch M416GL A5<br />4.40kg / 9.7lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class arifle_SPAR_01_GL_khk_F: arifle_SPAR_01_GL_base_F
	{
		displayName="[ARGL] M416GL (5.56x45) khk";
		descriptionShort="HecklerKoch M416GL A5<br />4.40kg / 9.7lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class arifle_SPAR_01_GL_snd_F: arifle_SPAR_01_GL_base_F
	{
		displayName="[ARGL] M416GL (5.56x45) sand";
		descriptionShort="HecklerKoch M416GL A5<br />4.40kg / 9.7lbs<br />279mm / 11.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.869636;
		ACE_barrelTwist=177.8;
		ACE_barrellength=279;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.085711397;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.085711397;
		};
		class WeaponSlotsInfo;
	};
	class arifle_AKS_F: arifle_AKS_base_F
	{
		displayName="[AR] AKS74u (5.45x39)";
		descriptionShort="Tula Arms Plant AKS74u<br />3.21kg / 6.9lbs<br />207mm / 8.1inch<br />700rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"ff7_30rnd_545x39_7n24_mag",
			"ff7_30rnd_545x39_7u1_mag",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_Green_F"
		};
		initSpeed=-1;
		ACE_barrelTwist=160.02;
		ACE_barrellength=206.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=71;
		};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.1;
		};
		class WeaponSlotsInfo;
	};
	class arifle_AKM_F: arifle_AKM_base_F
	{
		displayName="[AR] AKM (7.62x39)";
		descriptionShort="Izhmash AKM<br />3.31kg / 7.3lbs<br />415mm / 16.3inch<br />                          ";
		magazines[]=
		{
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
		initSpeed=-1;
		ACE_barrelTwist=199.89799;
		ACE_barrellength=415.01999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.085711397;
		};
		class Burst: Mode_Burst
		{
			reloadTime=0.085711397;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.085711397;
		};
		class WeaponSlotsInfo;
	};
	class arifle_AK12_F: arifle_AK12_base_F
	{
		displayName="[AR] AK-12 (5.45x39)";
		descriptionShort="Izhmash AK-12<br />3.30kg / 7.3lbs<br />415mm / 16.3inch<br />700rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"ff7_30rnd_545x39_7n24_mag",
			"ff7_30rnd_545x39_7u1_mag",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
		initSpeed=-1;
		ACE_barrelTwist=199.89799;
		ACE_barrellength=415.01999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F
	{
		displayName="[ARGL] AK-12GL (5.45x39)";
		descriptionShort="Izhmash AK-12GL<br />4.85kg / 10.7lbs<br />415mm / 16.3inch<br />700rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_545x39_Mag_F",
			"ff7_30rnd_545x39_7n24_mag",
			"ff7_30rnd_545x39_7u1_mag",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_Green_F"
		};
		initSpeed=-1;
		ACE_barrelTwist=199.89799;
		ACE_barrellength=415.01999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=107;
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.092308;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.092308;
		};
		class WeaponSlotsInfo;
	};
	class arifle_CTAR_blk_F: arifle_CTAR_base_F
	{
		displayName="[AR] QBZ-95 (5.8x42) blk";
		descriptionShort="Norinco QBZ-95-1 'Gai'<br />3.31kg / 7.3lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
		};
	};
	class arifle_CTAR_ghex_F: arifle_CTAR_base_F
	{
		displayName="[AR] QBZ-95 (5.8x42) ghex";
		descriptionShort="Norinco QBZ-95-1 'Gai'<br />3.31kg / 7.3lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
		};
	};
	class arifle_CTAR_hex_F: arifle_CTAR_base_F
	{
		displayName="[AR] QBZ-95 (5.8x42) hex";
		descriptionShort="Norinco QBZ-95-1 'Gai'<br />3.31kg / 7.3lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
		};
	};
	class arifle_CTAR_GL_base_F: arifle_CTAR_base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_CTAR_GL_blk_F: arifle_CTAR_GL_base_F
	{
		displayName="[ARGL] QBZ-95GL (5.8x42) blk";
		descriptionShort="Norinco QBZ-95-1GL 'Gai'<br />4.58kg / 10.1lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class arifle_CTAR_GL_ghex_F: arifle_CTAR_GL_base_F
	{
		displayName="[ARGL] QBZ-95GL (5.8x42) ghex";
		descriptionShort="Norinco QBZ-95-1GL 'Gai'<br />4.58kg / 10.1lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class arifle_CTAR_GL_hex_F: arifle_CTAR_GL_base_F
	{
		displayName="[ARGL] QBZ-95GL (5.8x42) hex";
		descriptionShort="Norinco QBZ-95-1GL 'Gai'<br />4.58kg / 10.1lbs<br />463mm / 18.2inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_580x42_Mag_F",
			"ff7_30rnd_58x42_dbp10_mag",
			"30Rnd_580x42_Mag_Tracer_F",
			"ff7_30rnd_58x42_trcr_mag",
			"ff7_30rnd_58x42_trcy_mag"
		};
		initSpeed=-0.97894698;
		ACE_barrelTwist=244;
		ACE_barrellength=463;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.066666998;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.066666998;
		};
		class WeaponSlotsInfo;
		class Secondary;
	};
	class arifle_ARX_blk_F: arifle_ARX_base_F
	{
		displayName="[AR] Type115 (6.5x39CL) blk";
		descriptionShort="Prototype Type115<br />4.35kg / 9.6lbs<br />508mm / 20.0inch<br />900rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-0.98426199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96;
		};
		class Secondary: Secondary
		{
			displayName=".50BW Underbarrel";
			magazines[]=
			{
				"10Rnd_50BW_Mag_F",
				"ff7_7rnd_50bw_flr_mag"
			};
			maxZeroing=500;
		};
	};
	class arifle_ARX_ghex_F: arifle_ARX_base_F
	{
		displayName="[AR] Type115 (6.5x39CL) ghex";
		descriptionShort="Prototype Type115<br />4.35kg / 9.6lbs<br />508mm / 20.0inch<br />900rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-0.98426199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96;
		};
		class Secondary: Secondary
		{
			displayName=".50BW Underbarrel";
			magazines[]=
			{
				"10Rnd_50BW_Mag_F",
				"ff7_7rnd_50bw_flr_mag"
			};
			maxZeroing=500;
		};
	};
	class arifle_ARX_hex_F: arifle_ARX_base_F
	{
		displayName="[AR] Type115 (6.5x39CL) hex";
		descriptionShort="Prototype Type115<br />4.35kg / 9.6lbs<br />508mm / 20.0inch<br />900rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-0.98426199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=96;
		};
		class Secondary: Secondary
		{
			displayName=".50BW Underbarrel";
			magazines[]=
			{
				"10Rnd_50BW_Mag_F",
				"ff7_7rnd_50bw_flr_mag"
			};
			maxZeroing=500;
		};
	};
	class arifle_katiba_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
		};
		class WeaponSlotsInfo;
	};
	class arifle_Katiba_F: arifle_katiba_Base_F
	{
		displayName="[AR] KH-2002 'Sama' (6.5x39CL)";
		descriptionShort="Defense Industries Organization KH-2002 Sama<br />3.71kg / 8.2lbs<br />508mm / 20.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=203.2;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82;
		};
	};
	class arifle_Katiba_C_F: arifle_katiba_Base_F
	{
		displayName="[AR] KH-2002C 'Sama' (6.5x39CL)";
		descriptionShort="Defense Industries Organization KH-2002C Sama<br />3.51kg / 7.7lbs<br />394mm / 15.5inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-0.961294;
		ACE_barrelTwist=203.2;
		ACE_barrellength=393.70001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
		};
	};
	class arifle_Katiba_GL_F: arifle_katiba_Base_F
	{
		displayName="[ARGL] KH-2002GL 'Sama' (6.5x39CL)";
		descriptionShort="Defense Industries Organization KH-2002GL Sama<br />4.96kg / 10.9lbs<br />508mm / 20.0inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_Tracer",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=203.2;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=109;
		};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.079999998;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.079999998;
		};
		class WeaponSlotsInfo;
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		displayName="[AR] MX (6.5x39CL)";
		descriptionShort="Prototype MX<br />3.60kg / 7.9lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79;
		};
	};
	class arifle_MX_Black_F: arifle_MX_F
	{
		displayName="[AR] MX (6.5x39CL) blk";
		descriptionShort="Prototype MX<br />3.60kg / 7.9lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79;
		};
	};
	class arifle_MX_khk_F: arifle_MX_Black_F
	{
		displayName="[AR] MX (6.5x39CL) khk";
		descriptionShort="Prototype MX<br />3.60kg / 7.9lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=79;
		};
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		displayName="[ARGL] MXGL (6.5x39CL)";
		descriptionShort="Prototype MXGL<br />4.77kg / 10.5lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=105;
		};
	};
	class arifle_MX_GL_Black_F: arifle_MX_GL_F
	{
		displayName="[ARGL] MXGL (6.5x39CL) blk";
		descriptionShort="Prototype MXGL<br />4.77kg / 10.5lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=105;
		};
	};
	class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F
	{
		displayName="[ARGL] MXGL (6.5x39CL) khk";
		descriptionShort="Prototype MXGL<br />4.77kg / 10.5lbs<br />368mm / 14.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.97222197;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=368.29999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=105;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		displayName="[AR] MXC (6.5x39CL)";
		descriptionShort="Prototype MXC<br />3.42kg 7.5lbs<br />267mm / 10.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.94638199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=266.70001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=75;
		};
	};
	class arifle_MXC_Black_F: arifle_MXC_F
	{
		displayName="[AR] MXC (6.5x39CL) blk";
		descriptionShort="Prototype MXC<br />3.42kg 7.5lbs<br />267mm / 10.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.94638199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=266.70001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=75;
		};
	};
	class arifle_MXC_khk_F: arifle_MXC_Black_F
	{
		displayName="[AR] MXC (6.5x39CL) khk";
		descriptionShort="Prototype MXC<br />3.42kg 7.5lbs<br />267mm / 10.5inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.94638199;
		ACE_barrelTwist=203.2;
		ACE_barrellength=266.70001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=75;
		};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_SDAR_F: SDAR_base_F
	{
		displayName="[AR] RFB 'SDAR' (5.56x45UW)";
		descriptionShort="Kel-Tec RFB SDAR<br />3.72kg / 8.2lbs<br />457mm / 18.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_556x45_UW_mag",
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ff7_30rnd_556x45_sub_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.998321;
		ACE_barrelTwist=285.75;
		ACE_barrellength=457.20001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		displayName="[DMR] MXM (6.5x39CL)";
		descriptionShort="Prototype MXM<br />4.41kg / 9.7lbs<br />457mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=457.20001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class arifle_MXM_Black_F: arifle_MXM_F
	{
		displayName="[DMR] MXM (6.5x39CL) blk";
		descriptionShort="Prototype MXM<br />4.41kg / 9.7lbs<br />457mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=457.20001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class arifle_MXM_khk_F: arifle_MXM_Black_F
	{
		displayName="[DMR] MXM (6.5x39CL) khk";
		descriptionShort="Prototype MXM<br />4.41kg / 9.7lbs<br />457mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-1;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=457.20001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=97;
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_EBR_F: EBR_base_F
	{
		displayName="[DMR] Mk14EBR 'Mod0' (7.62x51)";
		descriptionShort="Naval Surface Warfare Center Crane Division Mk14EBR Mod0<br />5.1kg / 11.2lbs<br />457mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.97944403;
		ACE_barrelTwist=304.79999;
		ACE_barrellength=457.20001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=112;
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		displayName="[DMR] VS-121 (7.62x54R)";
		descriptionShort="Izhmash VS-121<br />4.08kg / 9.0lbs<br />610mm / 24.0inch<br />                          ";
		magazines[]=
		{
			"10Rnd_762x54_Mag",
			"ff7_10rnd_762x54r_7n14_mag",
			"ff7_10rnd_762x54r_sub_mag",
			"ff7_10rnd_762x54r_trcg_mag",
			"ff7_10rnd_762x54r_trcr_mag",
			"ff7_10rnd_762x54r_trcy_mag",
			"ACE_10Rnd_762x54_Tracer_mag"
		};
		initSpeed=-1.00019;
		ACE_barrelTwist=241.3;
		ACE_barrellength=609.59998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=90;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_02_F: DMR_02_base_F
	{
		displayName="[DMR] ULR 338 'Bad News' (.338)";
		descriptionShort="Noreen Firearms 'Bad News' .338 ULR GenII<br />5.99kg / 13.2lbs<br />660mm / 26.0inch<br />                          ";
		magazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_NM_Mag",
			"ACE_10Rnd_338_300gr_HPBT_Mag",
			"ACE_10Rnd_338_API526_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=254;
		ACE_barrellength=660;
		inertia=0.89999998;
		aimTransitionSpeed=0.80000001;
		dexterity=1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=132;
		};
	};
	class srifle_DMR_02_camo_F: srifle_DMR_02_F
	{
		displayName="[DMR] ULR 338 'Bad News' (.338) camo";
		descriptionShort="Noreen Firearms 'Bad News' .338 ULR GenII<br />5.99kg / 13.2lbs<br />660mm / 26.0inch<br />                          ";
		magazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_NM_Mag",
			"ACE_10Rnd_338_300gr_HPBT_Mag",
			"ACE_10Rnd_338_API526_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=254;
		ACE_barrellength=660;
		inertia=0.89999998;
		aimTransitionSpeed=0.80000001;
		dexterity=1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=132;
		};
	};
	class srifle_DMR_02_sniper_F: srifle_DMR_02_F
	{
		displayName="[DMR] ULR 338 'Bad News' (.338) snpr";
		descriptionShort="Noreen Firearms 'Bad News' .338 ULR GenII<br />5.99kg / 13.2lbs<br />660mm / 26.0inch<br />                          ";
		magazines[]=
		{
			"10Rnd_338_Mag",
			"10Rnd_338_NM_Mag",
			"ACE_10Rnd_338_300gr_HPBT_Mag",
			"ACE_10Rnd_338_API526_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=254;
		ACE_barrellength=660;
		inertia=0.89999998;
		aimTransitionSpeed=0.80000001;
		dexterity=1.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=132;
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_03_F: DMR_03_base_F
	{
		displayName="[DMR] SG751 SAPR (7.62x51)";
		descriptionShort="SIG-Sauer SG751 SAPR LongBarrel<br />4.6kg / 10.1lbs<br />455mm / 17.5inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279;
		ACE_barrellength=455;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class srifle_DMR_03_khaki_F: srifle_DMR_03_F
	{
		displayName="[DMR] SG751 SAPR (7.62x51) khaki";
		descriptionShort="SIG-Sauer SG751 SAPR LongBarrel<br />4.6kg / 10.1lbs<br />455mm / 17.5inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279;
		ACE_barrellength=455;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class srifle_DMR_03_tan_F: srifle_DMR_03_F
	{
		displayName="[DMR] SG751 SAPR (7.62x51) tan";
		descriptionShort="SIG-Sauer SG751 SAPR LongBarrel<br />4.6kg / 10.1lbs<br />455mm / 17.5inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279;
		ACE_barrellength=455;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class srifle_DMR_03_multicam_F: srifle_DMR_03_F
	{
		displayName="[DMR] SG751 SAPR (7.62x51) mcam";
		descriptionShort="SIG-Sauer SG751 SAPR LongBarrel<br />4.6kg / 10.1lbs<br />455mm / 17.5inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279;
		ACE_barrellength=455;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class srifle_DMR_03_woodland_F: srifle_DMR_03_F
	{
		displayName="[DMR] SG751 SAPR(7.62x51) wland";
		descriptionShort="SIG-Sauer SG751 SAPR LongBarrel<br />4.6kg / 10.1lbs<br />455mm / 17.5inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279;
		ACE_barrellength=455;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=101;
		};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_04_F: DMR_04_base_F
	{
		displayName="[DMR] ASP-1 'Kir' (12.7x54)";
		descriptionShort="Prototype ASP-1 Kir<br />6.71kg / 14.8lbs<br />451mm / 17.8inch<br />                          ";
		magazines[]=
		{
			"10Rnd_127x54_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=203.2;
		ACE_barrellength=452.12;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=148;
		};
	};
	class srifle_DMR_04_Tan_F: srifle_DMR_04_F
	{
		displayName="[DMR] ASP-1 'Kir' (12.7x54) tan";
		descriptionShort="Prototype ASP-1 Kir<br />6.71kg / 14.8lbs<br />451mm / 17.8inch<br />                          ";
		magazines[]=
		{
			"10Rnd_127x54_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=203.2;
		ACE_barrellength=452.12;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=148;
		};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_05_blk_F: DMR_05_base_F
	{
		displayName="[DMR] Cyrus (9.3x64) blk";
		descriptionShort="Prototype Cyrus<br />6.99kg / 15.4lbs<br />620mm / 24.4inch<br />                          ";
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"ff7_10rnd_93x64_hpbt_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=359.918;
		ACE_barrellength=620.01398;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=154;
		};
	};
	class srifle_DMR_05_hex_F: srifle_DMR_05_blk_F
	{
		displayName="[DMR] Cyrus (9.3x64) hex";
		descriptionShort="Prototype Cyrus<br />6.99kg / 15.4lbs<br />620mm / 24.4inch<br />                          ";
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"ff7_10rnd_93x64_hpbt_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=359.918;
		ACE_barrellength=620.01398;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=154;
		};
	};
	class srifle_DMR_05_tan_f: srifle_DMR_05_blk_F
	{
		displayName="[DMR] Cyrus (9.3x64) tan";
		descriptionShort="Prototype Cyrus<br />6.99kg / 15.4lbs<br />620mm / 24.4inch<br />                          ";
		magazines[]=
		{
			"10Rnd_93x64_DMR_05_Mag",
			"ff7_10rnd_93x64_hpbt_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=359.918;
		ACE_barrellength=620.01398;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=154;
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_06_camo_F: DMR_06_base_F
	{
		displayName="[DMR] M14 A1 (7.62x51) camo";
		descriptionShort="Springfield Armory M14 A1<br />4.22kg / 9.3lbs<br />559mm / 22.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99939501;
		ACE_barrelTwist=304.79999;
		ACE_barrellength=558.79999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=93;
		};
	};
	class srifle_DMR_06_olive_F: srifle_DMR_06_camo_F
	{
		displayName="[DMR] M14 A1 (7.62x51) olive";
		descriptionShort="Springfield Armory M14 A1<br />4.22kg / 9.3lbs<br />559mm / 22.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99939501;
		ACE_barrelTwist=304.79999;
		ACE_barrellength=558.79999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=93;
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_07_blk_F: DMR_07_base_F
	{
		displayName="[DMR] QBU-88 (6.5x39C) blk";
		descriptionShort="Norinco QBU-88 (Type88)<br />4.3kg / 9.5lbs<br />640mm / 25.2inch<br />                          ";
		magazines[]=
		{
			"20Rnd_650x39_Cased_Mag_F",
			"ff7_20rnd_65x39_slap_mag",
			"ff7_20rnd_65x39c_trcg_mag",
			"ff7_20rnd_65x39c_trcr_mag",
			"ff7_20rnd_65x39c_trcy_mag",
			"ff7_20rnd_65x39c_trci_mag"
		};
		initSpeed=-0.99997997;
		ACE_barrelTwist=206.60001;
		ACE_barrellength=640;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
		};
	};
	class srifle_DMR_07_ghex_F: DMR_07_base_F
	{
		displayName="[DMR] QBU-88 (6.5x39C) ghex";
		descriptionShort="Norinco QBU-88 (Type88)<br />4.3kg / 9.5lbs<br />640mm / 25.2inch<br />                          ";
		magazines[]=
		{
			"20Rnd_650x39_Cased_Mag_F",
			"ff7_20rnd_65x39_slap_mag",
			"ff7_20rnd_65x39c_trcg_mag",
			"ff7_20rnd_65x39c_trcr_mag",
			"ff7_20rnd_65x39c_trcy_mag",
			"ff7_20rnd_65x39c_trci_mag"
		};
		initSpeed=-0.99997997;
		ACE_barrelTwist=206.60001;
		ACE_barrellength=640;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
		};
	};
	class srifle_DMR_07_hex_F: DMR_07_base_F
	{
		displayName="[DMR] QBU-88 (6.5x39C) hex";
		descriptionShort="Norinco QBU-88 (Type88)<br />4.3kg / 9.5lbs<br />640mm / 25.2inch<br />                          ";
		magazines[]=
		{
			"20Rnd_650x39_Cased_Mag_F",
			"ff7_20rnd_65x39_slap_mag",
			"ff7_20rnd_65x39c_trcg_mag",
			"ff7_20rnd_65x39c_trcr_mag",
			"ff7_20rnd_65x39c_trcy_mag",
			"ff7_20rnd_65x39c_trci_mag"
		};
		initSpeed=-0.99997997;
		ACE_barrelTwist=206.60001;
		ACE_barrellength=640;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=95;
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_SPAR_03_blk_F: arifle_SPAR_03_base_F
	{
		displayName="[DMR] M417 (7.62x51) blk";
		descriptionShort="HecklerKoch M417 A2<br />4.74kg / 10.4lbs<br />508mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279.39999;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class arifle_SPAR_03_khk_F: arifle_SPAR_03_base_F
	{
		displayName="[DMR] M417 (7.62x51) khk";
		descriptionShort="HecklerKoch M417 A2<br />4.74kg / 10.4lbs<br />508mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279.39999;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class arifle_SPAR_03_snd_F: arifle_SPAR_03_base_F
	{
		displayName="[DMR] M417 (7.62x51) sand";
		descriptionShort="HecklerKoch M417 A2<br />4.74kg / 10.4lbs<br />508mm / 20.0inch<br />                          ";
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"ACE_20Rnd_762x51_M118LR_Mag",
			"ACE_20Rnd_762x51_M993_AP_Mag",
			"ACE_20Rnd_762x51_Mk316_Mod_Mag",
			"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",
			"ACE_20Rnd_762x51_Mag_SD",
			"ff7_20rnd_762x51_slap_mag",
			"ACE_20Rnd_762x51_Mag_Tracer",
			"ff7_20rnd_762x51_trcr_mag",
			"ff7_20rnd_762x51_trcy_mag",
			"ACE_20Rnd_762x51_Mag_Tracer_Dim"
		};
		initSpeed=-0.99153602;
		ACE_barrelTwist=279.39999;
		ACE_barrellength=508;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=104;
		};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_LRR_F: LRR_base_F
	{
		displayName="[SNP] M-200 'Intervention' (.408)";
		descriptionShort="CheyTac M-200 Intervention<br />12.3kg / 27.1lbs<br />762mm / 30.0inch<br />                          ";
		magazines[]=
		{
			"7Rnd_408_Mag",
			"ACE_7Rnd_408_305gr_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=330.20001;
		ACE_barrellength=762;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=271;
		};
	};
	class srifle_LRR_camo_F: srifle_LRR_F
	{
		displayName="[SNP] M-200 'Intervention' (.408) camo";
		descriptionShort="CheyTac M-200 Intervention<br />12.3kg / 27.1lbs<br />762mm / 30.0inch<<br />                          ";
		magazines[]=
		{
			"7Rnd_408_Mag",
			"ACE_7Rnd_408_305gr_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=330.20001;
		ACE_barrellength=762;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=271;
		};
	};
	class srifle_LRR_tna_F: srifle_LRR_camo_F
	{
		displayName="[SNP] M-200 'Intervention' (.408) jungle";
		descriptionShort="CheyTac M-200 Intervention<br />12.3kg / 27.1lbs<br />762mm / 30.0inch<<br />                          ";
		magazines[]=
		{
			"7Rnd_408_Mag",
			"ACE_7Rnd_408_305gr_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=330.20001;
		ACE_barrellength=762;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=271;
		};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_GM6_F: GM6_base_F
	{
		displayName="[SNP] M-6 'Lynx' (.50BMG)";
		descriptionShort="GepÃ¡rd M-6 Lynx<br />11.5kg / 25.4lbs<br />730mm / 28.7inch<br />                          ";
		magazines[]=
		{
			"ACE_5Rnd_127x99_Mag",
			"ACE_5Rnd_127x99_API_Mag",
			"ACE_5Rnd_127x99_AMAX_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=381;
		ACE_barrellength=730;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=254;
		};
	};
	class srifle_GM6_camo_F: srifle_GM6_F
	{
		displayName="[SNP] M-6 'Lynx' (.50BMG) camo";
		descriptionShort="GepÃ¡rd M-6 Lynx<br />11.5kg / 25.4lbs<br />730mm / 28.7inch<br />                          ";
		magazines[]=
		{
			"ACE_5Rnd_127x99_Mag",
			"ACE_5Rnd_127x99_API_Mag",
			"ACE_5Rnd_127x99_AMAX_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=381;
		ACE_barrellength=730;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=254;
		};
	};
	class srifle_GM6_ghex_F: srifle_GM6_F
	{
		displayName="[SNP] M-6 'Lynx' (.50BMG) ghex";
		descriptionShort="GepÃ¡rd M-6 Lynx<br />11.5kg / 25.4lbs<br />730mm / 28.7inch<br />                          ";
		magazines[]=
		{
			"ACE_5Rnd_127x99_Mag",
			"ACE_5Rnd_127x99_API_Mag",
			"ACE_5Rnd_127x99_AMAX_Mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=381;
		ACE_barrellength=730;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=254;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		displayName="[MG] MXSW (6.5x39CL)";
		descriptionShort="Prototype MXSW<br />3.9kg / 8.6lbs<br />406mm / 16.0inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
			"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.98191202;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=86;
		};
	};
	class arifle_MX_SW_Black_F: arifle_MX_SW_F
	{
		displayName="[MG] MXSW (6.5x39CL) blk";
		descriptionShort="Prototype MXSW<br />3.9kg / 8.6lbs<br />406mm / 16.0inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
			"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.98191202;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=86;
		};
	};
	class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F
	{
		displayName="[MG] MXSW (6.5x39CL) khk";
		descriptionShort="Prototype MXSW<br />3.9kg / 8.6lbs<br />406mm / 16.0inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"ACE_30Rnd_65x39_caseless_mag_Tracer_Dim",
			"ACE_100Rnd_65x39_caseless_mag_Tracer_Dim"
		};
		initSpeed=-0.98191202;
		ACE_barrelTwist=228.60001;
		ACE_barrellength=406.39999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=86;
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime=0.075000003;
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.075000003;
		};
		class WeaponSlotsInfo;
	};
	class arifle_SPAR_02_blk_F: arifle_SPAR_02_base_F
	{
		displayName="[MG] M27IAR (5.56x45) blk";
		descriptionShort="HecklerKoch M416 A5 'M27IAR'<br />3.49kg / 7.7lbs<br />368mm / 14.5inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"ff7_150rnd_556x45_trcg_drum",
			"ff7_150rnd_556x45_trcy_drum",
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.99986398;
		ACE_barrelTwist=177.8;
		ACE_barrellength=368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
		};
	};
	class arifle_SPAR_02_khk_F: arifle_SPAR_02_base_F
	{
		displayName="[MG] M27IAR (5.56x45) khk";
		descriptionShort="HecklerKoch M416 A5 'M27IAR'<br />3.49kg / 7.7lbs<br />368mm / 14.5inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"ff7_150rnd_556x45_trcg_drum",
			"ff7_150rnd_556x45_trcy_drum",
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.99986398;
		ACE_barrelTwist=177.8;
		ACE_barrellength=368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
		};
	};
	class arifle_SPAR_02_snd_F: arifle_SPAR_02_base_F
	{
		displayName="[MG] M27IAR (5.56x45) sand";
		descriptionShort="HecklerKoch M416 A5 'M27IAR'<br />3.49kg / 7.7lbs<br />368mm / 14.5inch<br />800rpm<br />                          ";
		magazines[]=
		{
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"ff7_150rnd_556x45_trcg_drum",
			"ff7_150rnd_556x45_trcy_drum",
			"30Rnd_556x45_Stanag",
			"ACE_30Rnd_556x45_Stanag_Mk262_mag",
			"ACE_30Rnd_556x45_Stanag_Mk318_mag",
			"ACE_30Rnd_556x45_Stanag_M995_AP_mag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"ACE_30Rnd_556x45_Stanag_Tracer_Dim"
		};
		initSpeed=-0.99986398;
		ACE_barrelTwist=177.8;
		ACE_barrellength=368;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		displayName="[MG] Stoner99 LMG (6.5x39CL)";
		descriptionShort="Knight's Armament Company Stoner 99 LMG <br />4.54kg / 10.0lbs<br />318mm / 12.5inch<br />1000rpm<br />                          ";
		magazines[]=
		{
			"ff7_200rnd_65x39cl_ball_box",
			"ACE_200Rnd_65x39_cased_Box_Tracer_Dim",
			"ff7_200rnd_65x39_slap_box",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"ff7_200rnd_65x39cl_trcr_box"
		};
		initSpeed=-0.999327;
		ACE_barrelTwist=177.8;
		ACE_barrellength=317.5;
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
		class manual: Mode_FullAuto
		{
			reloadTime=0.059999999;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		displayName="[MG] Negev LMG(7.62x51)";
		descriptionShort="Israel Military Industries Negev LMG<br />7.6kg / 16.7lbs<br />460mm / 18.2inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"150Rnd_762x51_Box",
			"ff7_150rnd_762x51_slap_box",
			"150Rnd_762x51_Box_Tracer"
		};
		initSpeed=-1.0004801;
		ACE_barrelTwist=304.79999;
		ACE_barrellength=459.73999;
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.079999998;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=167;
		};
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class LMG_03_F: LMG_03_base_F
	{
		displayName="[MG] M249 Para (5.56x45)";
		descriptionShort="FNHerstal M249 Paratrooper 'Minimi'<br />7.1kg / 15.7lbs<br />414mm 16.3inch<br />400/800rpm<br />                          ";
		magazines[]=
		{
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_Red_F"
		};
		initSpeed=-1.00051;
		ACE_barrelTwist=177.8;
		ACE_barrellength=414.01999;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=157;
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.092308;
		};
		class WeaponSlotsInfo;
	};
	class arifle_CTARS_blk_F: arifle_CTARS_base_F
	{
		displayName="[MG] QBB-95 LSW (5.8x42) blk";
		descriptionShort="Norinco QBB-95-1 LSW<br />3.95kg / 8.7lbs<br />600mm / 23.6inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"ff7_100rnd_58x42_dbp10_mag",
			"100Rnd_580x42_Mag_Tracer_F",
			"ff7_100rnd_58x42_trcr_mag",
			"ff7_100rnd_58x42_trcy_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=244;
		ACE_barrellength=600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87;
		};
	};
	class arifle_CTARS_ghex_F: arifle_CTARS_base_F
	{
		displayName="[MG] QBB-95 LSW (5.8x42) ghex";
		descriptionShort="Norinco QBB-95-1 LSW<br />3.95kg / 8.7lbs<br />600mm / 23.6inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"ff7_100rnd_58x42_dbp10_mag",
			"100Rnd_580x42_Mag_Tracer_F",
			"ff7_100rnd_58x42_trcr_mag",
			"ff7_100rnd_58x42_trcy_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=244;
		ACE_barrellength=600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87;
		};
	};
	class arifle_CTARS_hex_F: arifle_CTARS_base_F
	{
		displayName="[MG] QBB-95 LSW (5.8x42) hex";
		descriptionShort="Norinco QBB-95-1 LSW<br />3.95kg / 8.7lbs<br />600mm / 23.6inch<br />650rpm<br />                          ";
		magazines[]=
		{
			"100Rnd_580x42_Mag_F",
			"ff7_100rnd_58x42_dbp10_mag",
			"100Rnd_580x42_Mag_Tracer_F",
			"ff7_100rnd_58x42_trcr_mag",
			"ff7_100rnd_58x42_trcy_mag"
		};
		initSpeed=-1;
		ACE_barrelTwist=244;
		ACE_barrellength=600;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=87;
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.079999998;
		};
		class WeaponSlotsInfo;
	};
	class MMG_01_hex_F: MMG_01_base_F
	{
		displayName="[MG] MG5 'HK121' (9.3x64) hex";
		descriptionShort="HecklerKoch MG5 'HK121'<br />11.2kg / 24.7lbs<br />551mm / 21.7inch<br />750rpm<br />                          ";
		magazines[]=
		{
			"150Rnd_93x64_Mag"
		};
		initSpeed=-0.98561299;
		ACE_barrelTwist=359.918;
		ACE_barrellength=550.90997;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=247;
		};
	};
	class MMG_01_tan_F: MMG_01_hex_F
	{
		displayName="[MG] MG5 'HK121' (9.3x64) tan";
		descriptionShort="HecklerKoch MG5 'HK121'<br />11.2kg / 24.7lbs<br />551mm / 21.7inch<br />                          ";
		magazines[]=
		{
			"150Rnd_93x64_Mag"
		};
		initSpeed=-0.98561299;
		ACE_barrelTwist=359.918;
		ACE_barrellength=550.90997;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=247;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			reloadTime=0.12;
		};
		class WeaponSlotsInfo;
	};
	class MMG_02_camo_F: MMG_02_base_F
	{
		displayName="[MG] LWMMG (.338) camo";
		descriptionShort="General Dynamics LightWeightMediumMachineGun<br />10.8kg / 23.8lbs<br />610mm / 24.0inch<br />500rpm<br />                          ";
		magazines[]=
		{
			"130Rnd_338_Mag",
			"ff7_130rnd_338_api_box"
		};
		initSpeed=-1;
		ACE_barrelTwist=234.95;
		ACE_barrellength=609.59998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=238;
		};
	};
	class MMG_02_black_F: MMG_02_camo_F
	{
		displayName="[MG] LWMMG (.338) blk";
		descriptionShort="General Dynamics LightWeightMediumMachineGun<br />10.8kg / 23.8lbs<br />610mm / 24.0inch<br />500rpm<br />                          ";
		magazines[]=
		{
			"130Rnd_338_Mag",
			"ff7_130rnd_338_api_box"
		};
		initSpeed=-1;
		ACE_barrelTwist=234.95;
		ACE_barrellength=609.59998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=238;
		};
	};
	class MMG_02_sand_F: MMG_02_camo_F
	{
		displayName="[MG] LWMMG (.338) sand";
		descriptionShort="General Dynamics LightWeightMediumMachineGun<br />10.8kg / 23.8lbs<br />610mm / 24.0inch<br />500rpm<br />                          ";
		magazines[]=
		{
			"130Rnd_338_Mag",
			"ff7_130rnd_338_api_box"
		};
		initSpeed=-1;
		ACE_barrelTwist=234.95;
		ACE_barrellength=609.59998;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=238;
		};
	};
};
class cfgMods
{
	author="FoxForce7";
	timepacked="1531411174";
};
