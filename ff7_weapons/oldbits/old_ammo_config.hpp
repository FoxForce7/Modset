class CfgPatches
{
	class ff7_ammo
	{
		name="ff7 ammo";
		version = "0.9b";
		units[]={};
		weapons[]={};
		requiredVersion=1.64;
		requiredAddons[]=
		{
			"a3_weapons_f",
			"a3_weapons_f_beta",
			"a3_weapons_f_bootcamp",
			"a3_weapons_f_epa",
			"a3_weapons_f_epb",
			"a3_weapons_f_epc",
			"a3_weapons_f_gamma",
			"a3_weapons_f_mark",
			"a3_weapons_f_exp",
			"a3_Weapons_F_Ammoboxes",
			"ace_ballistics",
			"ff7_base"
		};
		author="FoxForce7";
		authors[]=
		{
			"csathdfw"
		};
		magazines[]=
		{
			//"ff7_40mm_1RND_HE",
			//"ff7_40mm_1RND_HEDP",
			//"ff7_40mm_1RND_FLR"
		};
		ammo[]=
		{
			"ff7_B_300BLK_TR",
			"ff7_B_300BLK_VMAX",
			"ff7_B_300BLK_SUB",
			"ff7_B_46x30_DM11",
			"ff7_B_46x30_FMJ",
			"ff7_B_46x30_TR",
			"ff7_B_45acp_JHP"//,
			//"ff7_G_40mm_HE",
			//"ff7_G_40mm_HEDP",
			//"ff7_G_40mm_FLR",
			//"ff7_B_CLF_APDS",
			//"ff7_B_CLF_APFSDS",
			//"ff7_B_50BW_EXP",
			//"ff7_B_50BW_SUBM",
			//"ff7_B_50BW_AIRB"
		};
	};
};
class CfgAmmo
{
	class BulletCore;
	//class GrenadeBase;
	//class FlareCore;
	class BulletBase: BulletCore{};
	class B_556x45_Ball: BulletBase{};
	class B_762x51_Ball: BulletBase{};
	class B_45ACP_Ball: BulletBase{};
	//class B_65x39_Caseless: BulletBase{};
	//class G_40mm_HE: GrenadeBase{};
    //class FlareBase: FlareCore {};
    //class F_40mm_White: FlareBase{};
	//class B_50BW_Ball_F: BulletBase{};
	//class SubmunitionBullet;
////////////////////////////
	class ff7_B_300BLK_TR: B_762x51_Ball	//TRACER
	{
		hit = 12;
		typicalspeed = 625;
		airFriction = -0.001;	//.0015
		caliber = 1;
		deflecting = 20;
		cartridge = "FxCartridge_762";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visiblefire = 5;
		audiblefire = 8;
		airLock = 1;//
		//model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 7.82;
		ACE_bulletLength = 28.397;
		ACE_bulletMass = 8.0999;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.325};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {550,600,700};
		ACE_barrelLengths[] = {254.0,355.6,533.4};
	};
	class ff7_B_300BLK_VMAX: ff7_B_300BLK_TR	//BARRIER
	{
		hit = 10;
		typicalSpeed = 725;
		airFriction = -0.001;	//.001
		caliber = 1.5;
		deflecting = 15;
		cartridge = "FxCartridge_762";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visibleFire = 5;
		audibleFire = 8;
		airLock = 1;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 7.82;
		ACE_bulletLength = 28.397;
		ACE_bulletMass = 7.4519;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.35};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {650,700,800};
		ACE_barrelLengths[] = {254.0,355.6,533.4};
	};
	class ff7_B_300BLK_SUB: ff7_B_300BLK_TR	//SUB
	{
		hit = 13;
		typicalSpeed = 325;
		airFriction = -0.003;	//.002
		caliber = 0.8;
		deflecting = 25;
		cartridge = "FxCartridge_762";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visibleFire = 5;
		audibleFire = 5;
		airLock = 0;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 7.82;
		ACE_bulletLength = 32.823;
		ACE_bulletMass = 14.2558;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.3};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {250,300,400};
		ACE_barrelLengths[] = {254.0,355.6,533.4};
	};
///////////////////////
	class ff7_B_46x30_DM11: B_556x45_Ball	//AP
	{
		hit = 5;	//7
		typicalSpeed = 725;
		airFriction = -0.002;	//.001
		caliber = 2;
		deflecting = 15;
		cartridge="FxCartridge_556";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visibleFire = 3;
		audibleFire = 6;
		airLock = 0;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 4.65;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 2.0088;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {650,725,800};		//target fox_cpw_46 ACE_barrelLength = 177.8
		ACE_barrelLengths[] = {127.0,177.8,254.0};
	};
	class ff7_B_46x30_FMJ: ff7_B_46x30_DM11	//BALL
	{
		hit = 8;	//9
		typicalSpeed = 600;
		airFriction = -0.0025;	//.002
		caliber = 0.8;
		deflecting = 25;
		cartridge="FxCartridge_556";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visibleFire = 3;
		audibleFire = 5;
		airLock = 0;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 4.65;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 2.7216;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.15};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {550,625,675};
		ACE_barrelLengths[] = {127.0,177.8,254.0};
	};
	class ff7_B_46x30_TR: ff7_B_46x30_DM11	//TR
	{
		hit = 6;	//8
		typicalSpeed = 675;
		airFriction = -0.002;	//.0015
		caliber = 1.3;
		deflecting = 20;
		cartridge="FxCartridge_556";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visibleFire = 3;
		audibleFire = 5;
		airLock = 0;//
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 4.65;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 2.0088;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.175};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {625,700,775};
		ACE_barrelLengths[] = {127.0,177.8,254.0};
	};
///////////////////////
	/*
	class ff7_G_40mm_HE: G_40mm_HE
	{
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=75;	// van 80
		indirectHit=15;	// van 8
		indirectHitRange=5;	// van 6
		dangerRadiusHit=50;	// van 60
		suppressionRadiusHit=25;	// van 24
		explosive=1;
		deflecting=5;
		airFriction=-0.001;
		fuseDistance=15;
		whistleDist=20;
		typicalSpeed=185;
		caliber=1;	// van 2
		airLock = 1;//
	};
	class ff7_G_40mm_HEDP: ff7_G_40mm_HE
	{
		model="\A3\weapons_f\ammo\UGL_slug";
		hit=225;	// van 100
		indirectHit=15;	// van 6
		indirectHitRange=1;	// van 4
		explosive=0.25;	// van1
		caliber=10;	// van 3
		deflecting=5;
		airLock = 1;//
	};
    class ff7_G_40mm_FLR: F_40mm_White
    {
    	model="\A3\Weapons_F\Ammo\UGL_Flare";
		intensity = 25000;	// van 10k	ace 20k/40k
        flareSize = 12;
        timeToLive = 60;	// van 25sec	ace 60
        lightColor[]={0.66,0.66,1,1};	// white	{0.5,0.5,0.5,0.5};	ir {0.5,0.5,0.25,0};
    };*/
///////////////////////
    /*
    class ff7_B_CLF_APDS: B_65x39_Caseless	//APDS
	{
		hit = 5;
		indirectHit=1;	//
		indirectHitRange=0.1;	//
		//submunitionConeAngle=0;
		//submunitionCount=1;
		//submunitionAmmo="FOX_CLF_APDS";
		typicalSpeed = 1175;		//1183
		airFriction = -0.00015;	//
		caliber = 3;
		deflecting = 5;
		cartridge="FxCartridge_65_caseless";
		visibleFire = 6;
		audibleFire = 9;
		airLock = 1;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 6.706;	//6.5mm sabot 3.2mm flechette
		ACE_bulletLength = 31.012;
		ACE_bulletMass = 2.7218;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {850,1025,1100,1250,1325};		//target fox_stoner_clf ACE_barrelLength = 368.3
		ACE_barrelLengths[] = {101.6,254.0,355.6,508.0,635.0};
	};
	class ff7_B_CLF_APFSDS: ff7_B_CLF_APDS	//APFSDS
	{
		hit = 3;
		indirectHit=0.5;	//
		indirectHitRange=0.1;	//
		//submunitionConeAngle=0;
		//submunitionCount=1;
		//submunitionAmmo="FOX_CLF_APDS";
		typicalSpeed = 1350;	//1342
		airFriction = -0.0001;	//
		caliber = 5;
		deflecting = 5;
		cartridge="FxCartridge_65_caseless";
		visibleFire = 6;
		audibleFire = 9;
		airLock = 1;//
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 6.706;	//6.5mm sabot 1.8mm flechette
		ACE_bulletLength = 32.972;
		ACE_bulletMass = 1.8142;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.5};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {1025,1200,1275,1425,1500};
		ACE_barrelLengths[] = {101.6,254.0,355.6,508.0,635.0};
	};*/
///////////////////////
	/*class ff7_B_50BW_EXP: B_50BW_Ball_F
	{
		airFriction = -0.0025;	//last 0.0023
		caliber = 3;
		deflecting = 0;
		explosive = 1;
		hit = 32;			//last 28
		indirectHit = 8;	// last: 5
		indirectHitRange = 0.8;
		suppressionRadiusHit = 2;
		typicalSpeed = 333;
		airLock = 1;//
		//submunitionConeAngle=5;
		//submunitionCount=5;
		//submunitionAmmo="B_50BW_Ball_F";
		CraterEffects = "";//"GrenadeCrater" "ExploAmmoCrater"
		effectsSmoke = "";  //something smaller pls "SmokeShellWhite"
		explosionEffects = "ExploAmmoExplosionPlaneCAS";//"GrenadeExplosion" "ExploAmmoExplosionPlaneCAS" "ExploAmmoExplosion"
		explosionSoundEffect = "DefaultExplosion";
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerendtime = 2;
		tracerscale = 1.5;
		tracerstarttime = 0.05;
		ACE_caliber=12.954;
        ACE_bulletLength=38.989;
		ACE_bulletMass = 25.9196;		//25.9196g/400grain 19.4397g/300grain
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		//ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {300,333,366};
		ACE_barrelLengths[] = {127.0,152.4,203.2};
	};*/
	/*
	class ff7_B_50BW_SUBM: SubmunitionBullet
	{
		airFriction = -0.0023;
		caliber = 1;
		deflecting = 0;
		explosive = 1;
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 0.5;
		suppressionRadiusHit = 2;
		typicalSpeed = 333;
		//submunitionConeAngle=5;
		//submunitionCount=5;
		//submunitionAmmo="B_50BW_Ball_F";
		CraterEffects = "";//"GrenadeCrater" "ExploAmmoCrater"
		effectsSmoke = "";  //something smaller pls "SmokeShellWhite"
		explosionEffects = "ExploAmmoExplosion";//"GrenadeExplosion" "ExploAmmoExplosionPlaneCAS" "ExploAmmoExplosion"
		explosionSoundEffect = "DefaultExplosion";
		//model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		//tracerendtime = 2;
		//tracerscale = 1.5;
		//tracerstarttime = 0.05;
		//ACE_caliber=12.954;
        //ACE_bulletLength=38.989;
		//ACE_bulletMass = 41.9256;		//25.9196 400grain
		//ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		//ACE_ballisticCoefficients[] = {0.2};
		//ACE_velocityBoundaries[] = {};
		//ACE_standardAtmosphere = "ICAO";
		//ACE_dragModel = 1;
		//ACE_muzzleVelocities[] = {300,333,366};
		//ACE_barrelLengths[] = {127.0,203.2,254.0};
	};
	class ff7_B_50BW_AIRB: B_50BW_Ball_F //
	{
		airFriction = -0.0023;
		caliber = 2;
		deflecting = 0;
		explosive = 0;
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 0.5;
		suppressionRadiusHit = 2;
		typicalSpeed = 333;
		airLock = 1;//
		submunitionConeAngle=5;//
		submunitionCount=5;//
		submunitionAmmo="ff7_B_50BW_SUBM";//
		CraterEffects = "";//"GrenadeCrater" "ExploAmmoCrater"
		effectsSmoke = "";  //something smaller pls "SmokeShellWhite"
		explosionEffects = "";//"GrenadeExplosion" "ExploAmmoExplosionPlaneCAS" "ExploAmmoExplosion"
		explosionSoundEffect = "DefaultExplosion";
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerendtime = 2;
		tracerscale = 1.5;
		tracerstarttime = 0.05;
		ACE_caliber=12.954;
        ACE_bulletLength=38.989;
		ACE_bulletMass = 41.9256;		//25.9196 400grain
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		//ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {300,333,366};
		ACE_barrelLengths[] = {127.0,203.2,254.0};
	};*/
///////////////////////
	class ff7_B_45acp_JHP: B_45ACP_Ball	//
	{
		airFriction = -0.00083;
		typicalSpeed = 330;
		tracerScale = 0.5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 11.988;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.2};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {300,333,366};
		ACE_barrelLengths[] = {101.6,127.0,228.6};
	};
//////////////////////////////////////////
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag: CA_Magazine{};
	class 20Rnd_762x51_Mag: CA_Magazine{};
	//class 1Rnd_HE_Grenade_shell: CA_Magazine{};
	//class UGL_FlareWhite_F: CA_Magazine{};
	//class 10Rnd_50BW_Mag_F: CA_Magazine{};
	//class 100Rnd_65x39_caseless_mag: CA_Magazine{};
///////////////////////
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort = "TypicalSpeed: 870m/s <br />BulletMass: 4.02g <br />BulletType: Penetrator";
		displayname = "5.56x45 30Rnd (EPR/M995) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "5.56x45 EPR";
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort = "TypicalSpeed: 835m/s <br />BulletMass: 4.99g <br />BulletType: Expander";
		displayname = "5.56x45 30Rnd (SPR/Mk262) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "5.56x45 SPR";
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort = "TypicalSpeed: 885m/s <br />BulletMass: 4.02g <br />BulletType: Barrier";
		displayname = "5.56x45 30Rnd (SOST/Mk318) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "5.56x45 SOST";
	};
///////////////////////
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		descriptionshort = "TypicalSpeed: 320m/s <br />BulletMass: 12.96g <br />BulletType: Expander";
		displayname = "7.62x51 20Rnd (SUB) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "7.62x51 SUB";
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort = "TypicalSpeed: 790m/s <br />BulletMass: 11.34g <br />BulletType: Expander";
		displayname = "7.62x51 20Rnd (M118LR) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "7.62x51 M118LR";
	};
	class ACE_20Rnd_762x51_Mk316_Mod_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort = "TypicalSpeed: 790m/s <br />BulletMass: 11.34g <br />BulletType: Expander";
		displayname = "7.62x51 20Rnd (Mk316) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "7.62x51 Mk316";
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort = "TypicalSpeed: 900m/s <br />BulletMass: 8.42g <br />BulletType: Barrier";
		displayname = "7.62x51 20Rnd (Mk319) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "7.62x51 Mk319";
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort = "TypicalSpeed: 910m/s <br />BulletMass: 8.20g <br />BulletType: Penetrator";
		displayname = "7.62x51 20Rnd (M993) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "7.62x51 M993";
	};
///////////////////////
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		descriptionshort = "TypicalSpeed: 390m/s <br />BulletMass: 7.45g <br />BulletType: Ball";
		displayname = "9x21 30Rnd (Ball) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "9x21 Ball";
	};
	class ACE_30Rnd_9x19_mag: 30Rnd_9x21_Mag
	{
		descriptionshort = "TypicalSpeed: 370m/s <br />BulletMass: 8.35g <br />BulletType: Ball";
		displayname = "9x19 30Rnd (Ball) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "9x19 Ball";
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
        descriptionshort = "TypicalSpeed: 390m/s <br />BulletMass: 7.45g <br />BulletType: Ball";
		displayname = "9x21 16Rnd (Ball) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "9x21 Ball";
	};
	class ACE_16Rnd_9x19_mag: 16Rnd_9x21_Mag
	{
        descriptionshort = "TypicalSpeed: 370m/s <br />BulletMass: 8.35g <br />BulletType: Ball";
		displayname = "9x19 16Rnd (Ball) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = "9x19 Ball";
    };
///////////////////////
    class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
    {
        descriptionshort = "TypicalSpeed: 250m/s <br />BulletMass: 14.90g <br />BulletType: Ball";
		displayname = ".45ACP 30Rnd (FMJ) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".45ACP FMJ";
    };
    class 9Rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
    {
        descriptionshort = "TypicalSpeed: 250m/s <br />BulletMass: 14.90g <br />BulletType: Ball";
		displayname = ".45ACP 9Rnd (FMJ) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".45ACP FMJ";
    };
    class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
    {
        descriptionshort = "TypicalSpeed: 250m/s <br />BulletMass: 14.90g <br />BulletType: Ball";
		displayname = ".45ACP 30Rnd (Tracer) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".45ACP Tracer";
	};
	class ff7_45acp_30rnd_JHP: 30Rnd_45ACP_Mag_SMG_01
    {
        descriptionshort = "TypicalSpeed: 330m/s <br />BulletMass: 11.99g <br />BulletType: Ball";
		displayname = ".45ACP 30Rnd (JHP) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".45ACP JHP";
		ammo = "ff7_B_45acp_JHP";
		count = 30;
		initspeed = 333;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 3;
		dlc="ff7";
	};
	class ff7_45acp_9rnd_JHP: 9Rnd_45ACP_Mag
    {
        descriptionshort = "TypicalSpeed: 330m/s <br />BulletMass: 11.99g <br />BulletType: Ball";
		displayname = ".45ACP 9Rnd (JHP) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".45ACP JHP";
		ammo = "ff7_B_45acp_JHP";
		count = 30;
		initspeed = 333;
		lastroundstracer = 9;
		scope = 2;
		tracersevery = 3;
		dlc="ff7";
    };
///////////////////////
	class 10Rnd_338_Mag;
    class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
    {
        descriptionshort = "TypicalSpeed: 800m/s <br />BulletMass: 19.44g <br />BulletType: Expander";
		displayname = ".338 10Rnd (HPBT) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".338 (HPBT)";
        initSpeed = 800;
    };
    class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
    {
        descriptionshort = "TypicalSpeed: 880m/s <br />BulletMass: 16.39g <br />BulletType: Penetrator";
		displayname = ".338 10Rnd (API526) Mag";
		author = "BI, ACE3, FoxForce7";
		displaynameshort = ".338 (API526)";
        initSpeed = 880;
	};
///////////////////////

///////////////////////
	class ff7_46x30_30Rnd_DM11: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_DM11";
		count = 30;
		descriptionshort = "TypicalSpeed: 725m/s <br />BulletMass: 2.01g <br />BulletType: Penetrator";
		displayname = "4.6x30 30Rnd (DM11) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 725;
		mass = 5;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 DM11";
		dlc="ff7";
	};
	class ff7_46x30_30Rnd_FMJ: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_FMJ";
		count = 30;
		descriptionshort = "TypicalSpeed: 600m/s <br />BulletMass: 2.72g <br />BulletType: Expander";
		displayname = "4.6x30 30Rnd (FMJ) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 600;
		mass = 5;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 FMJ";
		dlc="ff7";
	};
	class ff7_46x30_30Rnd_TR: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_TR";
		count = 30;
		descriptionshort = "TypicalSpeed: 675m/s <br />BulletMass: 2.01g <br />BulletType: Tracer";
		displayname = "4.6x30 30Rnd (Tracer) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 675;
		mass = 5;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 Tracer";
		dlc="ff7";
	};
	class ff7_46x30_40Rnd_DM11: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_DM11";
		count = 40;
		descriptionshort = "TypicalSpeed: 725m/s <br />BulletMass: 2.01g <br />BulletType: Penetrator";
		displayname = "4.6x30 40Rnd (DM11) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 725;
		mass = 7;
		lastroundstracer = 40;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 DM11";
		dlc="ff7";
	};
	class ff7_46x30_40Rnd_FMJ: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_FMJ";
		count = 40;
		descriptionshort = "TypicalSpeed: 600m/s <br />BulletMass: 2.72g <br />BulletType: Expander";
		displayname = "4.6x30 40Rnd (FMJ) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 600;
		mass = 7;
		lastroundstracer = 40;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 FMJ";
		dlc="ff7";
	};
	class ff7_46x30_40Rnd_TR: 30Rnd_9x21_Mag
	{
		ammo = "ff7_B_46x30_TR";
		count = 40;
		descriptionshort = "TypicalSpeed: 675m/s <br />BulletMass: 2.01g <br />BulletType: Tracer";
		displayname = "4.6x30 40Rnd (Tracer) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 675;
		mass = 7;
		lastroundstracer = 40;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "4.6x30 Tracer";
		dlc="ff7";
	};
/////////////////////////////////////////////////////////	MAGAZINE .300BLK	//////////////////////////////////////////
	class ff7_300BLK_30Rnd_TR: 30Rnd_556x45_Stanag
	{
		ammo = "ff7_B_300BLK_TR";
		count = 30;
		descriptionshort = "TypicalSpeed: 625m/s <br />BulletMass: 8.01g <br />BulletType: Tracer";
		displayname = ".300BLK 30Rnd (Tracer) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 625;
		mass = 9;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = ".300BLK Tracer";
		dlc="ff7";
	};
	class ff7_300BLK_30Rnd_VMAX: 30Rnd_556x45_Stanag
	{
		ammo = "ff7_B_300BLK_VMAX";
		count = 30;
		descriptionshort = "TypicalSpeed: 725m/s <br />BulletMass: 7.45g <br />BulletType: Barrier";
		displayname = ".300BLK 30Rnd (VMAX) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 725;
		mass = 9;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = ".300BLK VMAX";
		dlc="ff7";
	};
	class ff7_300BLK_30Rnd_SUB: 30Rnd_556x45_Stanag
	{
		ammo = "ff7_B_300BLK_SUB";
		count = 30;
		descriptionshort = "TypicalSpeed: 325m/s <br />BulletMass: 14.26g <br />BulletType: SubSonic";
		displayname = ".300BLK 30Rnd (SUB) Mag";
		author = "BI, ACE3, FoxForce7";
		initspeed = 325;
		mass = 9;
		lastroundstracer = 30;
		scope = 2;
		tracersevery = 1;
		displaynameshort = ".300BLK SUB";
		dlc="ff7";
	};
///////////////////////
	/*
	class ff7_40mm_1RND_HE: 1Rnd_HE_Grenade_shell
	{
		author = "BI, ACE3, FoxForce7";
		displayName="40mmGL 1Rnd HE (M1060)";
		displayNameShort="40mmGL HE";
		descriptionshort = "High Explosive";
		scope=2;
		picture="\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		//dlc="ff7";
		ammo="ff7_G_40mm_HE";
		//initSpeed=80;
		count=1;
		weaponPoolAvailable=1;
		mass=4;	//181g
	};
	class ff7_40mm_1RND_HEDP: 1Rnd_HE_Grenade_shell
	{
		author = "BI, ACE3, FoxForce7";
		displayName="40mmGL 1Rnd HEDP (M443)";
		displayNameShort="40mmGL HEDP";
		descriptionshort = "High Explosive Dual Purpose";
		scope=2;
		picture="\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
		//dlc="ff7";
		ammo="ff7_G_40mm_HEDP";
		//initSpeed=80;
		count=1;
		weaponPoolAvailable=1;
		mass=4;
	};
	class ff7_40mm_1RND_FLR: UGL_FlareWhite_F
	{
		author = "BI, ACE3, FoxForce7";
		displayName="40mmGL 1Rnd Flare (M992)";
		displayNameShort="40mmGL Flare";
		descriptionshort = "Color: :o <br />Duration: 60sec <br />Weight: 136g";
		scope=2;
		picture="\A3\Weapons_F\Data\UI\gear_UGL_Flare_CA.paa";
		//dlc="ff7";
		ammo="ff7_G_40mm_FLR";
		//initSpeed=80;
		count=1;
		weaponPoolAvailable=1;
		mass=3;	//136g
	};*/
///////////////////////
	/*class ff7_50BW_10Rnd_EXP: 10Rnd_50BW_Mag_F
	{
		ammo = "ff7_B_50BW_EXP";
		count = 10;
		descriptionShort = "Caliber: .50 BW EXP<br />Rounds: 10<br />Used in: Type 115";
		displayName = ".50 BW 10Rnd EXP Mag";
		displayNameShort=".50BW EXP";
		initSpeed = 333;
		mass = 10;
		lastroundstracer = 10;
		scope = 2;
		tracersevery = 1;
	};*/
	/*
	class ff7_50BW_10Rnd_AIRB: 10Rnd_50BW_Mag_F
	{
		ammo = "ff7_B_50BW_AIRB";
		count = 10;
		descriptionShort = "Caliber: .50 BW AIRB<br />Rounds: 10<br />Used in: Type 115";
		displayName = ".50 BW 10Rnd AIRB Mag";
		displayNameShort=".50BW AIRB";
		initSpeed = 333;
		mass = 10;
		lastroundstracer = 10;
		scope = 2;
		tracersevery = 1;
	};*/
///////////////////////
	/*
	class ff7_CLF_200Rnd_APDS: 100Rnd_65x39_caseless_mag
	{
		ammo = "ff7_B_CLF_APDS";
		count = 200;
		descriptionshort = "TypicalSpeed: 1175m/s <br />BulletMass: 2.72g <br />BulletType: 3.2x31mm Flechette";
		displayname = "CLF 200Rnd (APDS) Box";
		author = "BI, ACE3, FoxForce7";
		initspeed = 1175;
		mass = 45;
		lastroundstracer = 200;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "CLF APDS";
		//picture="\fox_ammo\data\pic_box2_ca.paa";
		dlc="ff7";
		ace_isbelt = 1;
	};
	class ff7_CLF_200Rnd_APFSDS: 100Rnd_65x39_caseless_mag
	{
		ammo = "ff7_B_CLF_APFSDS";
		count = 200;
		descriptionshort = "TypicalSpeed: 1350m/s <br />BulletMass: 1.81g <br />BulletType: 1.8x33mm Flechette";
		displayname = "CLF 200Rnd (APFSDS) Box";
		author = "BI, ACE3, FoxForce7";
		initspeed = 1350;
		mass = 45;
		lastroundstracer = 200;
		scope = 2;
		tracersevery = 1;
		displaynameshort = "CLF APFSDS";
		//picture="\fox_ammo\data\pic_box2_ca.paa";
		dlc="ff7";
		ace_isbelt = 1;
	};*/
///////////////////////
///////////////////////
///////////////////////
///////////////////////
};