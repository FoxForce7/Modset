class CfgPatches
{
	class ff7_ammo
	{
		name="ff7_ammo";
		requiredAddons[]=
		{
			"ff7_core",
			"ace_common",
			"ace_ballistics",
			"ace_smallarms"
		};
		author="FoxForce7";
		authors[]=
		{
			"BI, ACETeam, csathdfw"
		};
		version="2.13";
		requiredVersion=1.8200001;
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
	};
};
class CfgAmmo
{
	class BulletCore;
	class BulletBase;
	class FlareCore;
	class FlareBase: FlareCore
	{
	};
	class F_40mm_White: FlareBase
	{
	};
	class B_9x21_Ball: BulletBase
	{
		airLock=1;
		caliber=1;
		deflecting=25;
		hit=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=405;
		tracerScale=0.5;
		tracerendtime=1.5;
		tracerstarttime=0.050000001;
		ACE_bulletMass=7.45187;
		ACE_ballisticCoefficients[]={0.175};
		ACE_muzzleVelocities[]={300,390,405,428,435,440,445,450};
		ACE_barrelLengths[]={93.5,101.6,127,152.39999,177.8,190.5,228.60001,254};
	};
	class B_9x21_Ball_Tracer_Green: B_9x21_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=0.80000001;
	};
	class B_9x21_Ball_Tracer_Red: B_9x21_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.80000001;
	};
	class B_9x21_Ball_Tracer_Yellow: B_9x21_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_fmj: B_9x21_Ball
	{
		airFriction=-0.0020399999;
		caliber=1.2;
		deflecting=20;
		hit=5;
		timeToLive=4;
		typicalSpeed=375;
		ACE_bulletMass=8.0350599;
		ACE_ballisticCoefficients[]={0.185};
		ACE_muzzleVelocities[]={340,355,375,395,405};
		ACE_barrelLengths[]={93.5,101.6,127,177.8,228.60001};
	};
	class ff7_b_9x21_fmj_trcg: ff7_b_9x21_fmj
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_fmj_trcr: ff7_b_9x21_fmj
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_fmj_trcy: ff7_b_9x21_fmj
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_sub: B_9x21_Ball
	{
		airFriction=-0.0023099999;
		caliber=1;
		deflecting=25;
		hit=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		timeToLive=4;
		typicalSpeed=315;
		ACE_caliber=9.0170002;
		ACE_bulletLength=15.494;
		ACE_bulletMass=10.2382;
		ACE_ammoTempMuzzleVelocityShifts[]={-2.655,-2.5469999,-2.2850001,-2.0120001,-1.698,-1.28,-0.764,-0.153,0.59600002,1.517,2.619};
		ACE_ballisticCoefficients[]={0.155};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={290,305,315,320,325};
		ACE_barrelLengths[]={93.5,101.6,127,177.8,228.60001};
	};
	class ff7_b_9x21_sub_trcg: ff7_b_9x21_sub
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_sub_trcr: ff7_b_9x21_sub
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.80000001;
	};
	class ff7_b_9x21_sub_trcy: ff7_b_9x21_sub
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.80000001;
	};
	class ACE_9x19_Ball: B_9x21_Ball
	{
		airFriction=-0.0020699999;
		caliber=1.1;
		deflecting=25;
		hit=5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=390;
		tracerScale=0.5;
		ACE_bulletMass=6.1559;
		ACE_muzzleVelocities[]={384,392,401};
		ACE_barrelLengths[]={93.5,127,228.60001};
	};
	class B_45ACP_Ball: BulletBase
	{
		airFriction=-0.0028200001;
		caliber=0.89999998;
		hit=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=288;
		tracerScale=0.5;
		tracerendtime=1.5;
		tracerstarttime=0.050000001;
		ACE_bulletMass=14.9037;
		ACE_ballisticCoefficients[]={0.16500001};
		ACE_muzzleVelocities[]={246,271,288,297,306,315,323,329};
		ACE_barrelLengths[]={93.5,101.6,127,152.39999,177.8,190.5,228.60001,254};
	};
	class B_45ACP_Ball_Green: B_45ACP_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=0.80000001;
	};
	class ff7_b_45acp_trcr: B_45ACP_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=0.80000001;
	};
	class B_45ACP_Ball_Yellow: B_45ACP_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=0.80000001;
	};
	class ff7_b_45acp_plus: B_45ACP_Ball
	{
		airFriction=-0.0025299999;
		caliber=1.3;
		deflecting=20;
		hit=5;
		timeToLive=4;
		typicalSpeed=384;
		ACE_bulletLength=16.141001;
		ACE_bulletMass=9.3958397;
		ACE_ballisticCoefficients[]={0.175};
		ACE_muzzleVelocities[]={370,384,410,435,460};
		ACE_barrelLengths[]={76.199997,127,134.60001,177.8,228.60001};
	};
	class ff7_b_46x30_shp: B_9x21_Ball
	{
		airFriction=-0.00254;
		airLock=1;
		caliber=1.3;
		visibleFire=3;
		audibleFire=5;
		deflecting=20;
		hit=6;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		timeToLive=4;
		typicalSpeed=675;
		tracerScale=0.5;
		tracerendtime=1.3;
		tracerstarttime=0.079999998;
		ACE_caliber=4.6500001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=2.0088;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.119};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={605,635,675,715,745};
		ACE_barrelLengths[]={93.5,101.6,127,190.5,254};
	};
	class ff7_b_46x30_fmj: ff7_b_46x30_shp
	{
		airFriction=-0.0022799999;
		airLock=1;
		caliber=1;
		visibleFire=3;
		audibleFire=5;
		deflecting=25;
		hit=7;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		timeToLive=4;
		typicalSpeed=605;
		tracerScale=0.5;
		ACE_caliber=4.6500001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=2.7216001;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.18700001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={535,570,605,640,665};
		ACE_barrelLengths[]={93.5,101.6,127,190.5,254};
	};
	class ff7_b_46x30_dm11: ff7_b_46x30_shp
	{
		airFriction=-0.0023699999;
		airLock=1;
		caliber=1.8;
		visibleFire=3;
		audibleFire=6;
		deflecting=15;
		hit=5;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		timeToLive=4;
		typicalSpeed=725;
		tracerScale=0.5;
		ACE_caliber=4.6500001;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=2.0088;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={655,680,725,770,805};
		ACE_barrelLengths[]={93.5,101.6,127,190.5,254};
	};
	class B_545x39_Ball_F: BulletBase
	{
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=880;
		tracerScale=0.69999999;
		tracerEndTime=1;
		ACE_ballisticCoefficients[]={0.17200001};
		ACE_muzzleVelocities[]={735,773,802,841,879,892,904,912};
		ACE_barrelLengths[]={190.5,279.39999,368.29999,381,406.39999,444.5,508,660.40002};
	};
	class B_545x39_Ball_Green_F: B_545x39_Ball_F
	{
		airFriction=-0.00124;
		caliber=1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed=870;
		tracerScale=1;
		tracerEndTime=1.5;
		ACE_bulletLength=25.32;
		ACE_bulletMass=3.207546;
		ACE_ballisticCoefficients[]={0.167};
		ACE_muzzleVelocities[]={722,817,868,882,896};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_545x39_trcr: B_545x39_Ball_Green_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class ff7_b_545x39_trcy: B_545x39_Ball_Green_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ff7_b_545x39_7n24: B_545x39_Ball_F
	{
		airFriction=-0.00106;
		caliber=1.4;
		deflecting=15;
		hit=7;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=835;
		tracerScale=0.69999999;
		tracerEndTime=1;
		ACE_bulletLength=21.59;
		ACE_bulletMass=4.14713;
		ACE_ballisticCoefficients[]={0.221};
		ACE_muzzleVelocities[]={719,778,837,862,878};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_545x39_7u1: B_545x39_Ball_F
	{
		airFriction=-0.00131;
		caliber=0.89999998;
		hit=8;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=305;
		tracerScale=0.69999999;
		tracerEndTime=1;
		ACE_bulletLength=23.709999;
		ACE_bulletMass=5.1839099;
		ACE_ballisticCoefficients[]={0.20299999};
		ACE_muzzleVelocities[]={285,296,306,314,322};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_556x45_Ball: BulletBase
	{
		caliber=0.89999998;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=885;
		tracerScale=0.69999999;
		ACE_bulletLength=19.893999;
		ACE_bulletMass=4.01753;
		ACE_ballisticCoefficients[]={0.15099999};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={634,726,803,842,885,898,911,924};
		ACE_barrelLengths[]={190.5,279.39999,368.29999,381,406.39999,444.5,508,660.40002};
	};
	class B_556x45_Ball_Tracer_Green: B_556x45_Ball
	{
		airFriction=-0.00141078;
		caliber=0.89999998;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
		typicalSpeed=840;
		ACE_bulletLength=29.297001;
		ACE_bulletMass=4.1276898;
		ACE_ballisticCoefficients[]={0.127};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={613,726,841,898,911};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_556x45_Ball_Tracer_Red: B_556x45_Ball_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class B_556x45_Ball_Tracer_Yellow: B_556x45_Ball_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ACE_B_556x45_Ball_Tracer_Dim: B_556x45_Ball_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=0.89999998;
		nvgOnly=1;
	};
	class ACE_556x45_Ball_M995_AP: B_556x45_Ball
	{
		airFriction=-0.00128;
		caliber=1.5;
		hit=8;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=900;
		tracerScale=0.69999999;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.01753;
		ACE_ballisticCoefficients[]={0.152};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={640,780,900,915,925};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ACE_556x45_Ball_Mk262: B_556x45_Ball
	{
		caliber=0.80000001;
		deflecting=20;
		hit=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=825;
		tracerScale=0.69999999;
		ACE_bulletMass=4.9896002;
		ACE_ballisticCoefficients[]={0.18099999};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={624,816,825,832,838};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ACE_556x45_Ball_Mk318: B_556x45_Ball
	{
		caliber=1.2;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=875;
		tracerScale=0.69999999;
		ACE_bulletLength=23.011999;
		ACE_bulletMass=4.01753;
		ACE_ballisticCoefficients[]={0.167};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={628,752,876,903,917};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_556x45_sub: B_556x45_Ball
	{
		airFriction=-0.0011699999;
		caliber=1;
		deflecting=20;
		hit=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=320;
		tracerScale=0.69999999;
		ACE_bulletLength=22.813999;
		ACE_bulletMass=5.5079098;
		ACE_ballisticCoefficients[]={0.29499999};
		ACE_standardAtmosphere="ASM";
		ACE_dragModel=1;
		ACE_muzzleVelocities[]={297,308,319,322,327};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_580x42_Ball_F: BulletBase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=900;
		tracerScale=0.69999999;
		tracerStartTime=0.079999998;
		tracerEndTime=1.2;
		ACE_muzzleVelocities[]={790,822,849,871,898,914,929,937};
		ACE_barrelLengths[]={190.5,279.39999,368.29999,381,406.39999,444.5,508,660.40002};
	};
	class ff7_b_58x42_trcg: B_580x42_Ball_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
	};
	class ff7_b_58x42_trcr: B_580x42_Ball_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class ff7_b_58x42_trcy: B_580x42_Ball_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ff7_58x42_dbp10: B_580x42_Ball_F
	{
		airFriction=-0.0011399999;
		caliber=1.4;
		deflecting=15;
		hit=8;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=880;
		tracerScale=0.69999999;
		ACE_bulletLength=24.747999;
		ACE_bulletMass=4.6007199;
		ACE_ballisticCoefficients[]={0.193};
		ACE_muzzleVelocities[]={779,841,879,904,921};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_65x39_Caseless: BulletBase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=820;
		tracerScale=0.69999999;
		tracerStartTime=0.079999998;
		tracerEndTime=1.3;
		ACE_muzzleVelocities[]={730,760,788,801,822,830,834,846};
		ACE_barrelLengths[]={190.5,279.39999,368.29999,381,406.39999,444.5,508,660.40002};
	};
	class B_65x39_Caseless_green: B_65x39_Caseless
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
	};
	class ff7_b_65x39cl_trcr: B_65x39_Caseless_green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class B_65x39_Caseless_yellow: B_65x39_Caseless_green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ff7_b_65x39cl_fmjbt: B_65x39_Caseless
	{
		caliber=1.5;
		hit=9;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=865;
		tracerScale=0.69999999;
		ACE_bulletLength=32.472;
		ACE_bulletMass=7.1278801;
		ACE_ballisticCoefficients[]={0.28799999};
		ACE_muzzleVelocities[]={758,801,863,881,894};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ACE_65x39_Caseless_green_Tracer_Dim: B_65x39_Caseless_green
	{
		nvgOnly=1;
		tracerScale=0.89999998;
	};
	class ACE_65x39_Caseless_Tracer_Dim: B_65x39_Caseless_green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgOnly=1;
		tracerScale=0.89999998;
	};
	class B_762x39_Ball_F: BulletBase
	{
		hit=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=730;
		tracerScale=0.80000001;
		tracerStartTime=0.050000001;
		tracerEndTime=1.3;
		ACE_bulletLength=27.414;
		ACE_bulletMass=7.9702702;
		ACE_ballisticCoefficients[]={0.29499999};
		ACE_muzzleVelocities[]={653,687,706,713,729,738,744,752};
		ACE_barrelLengths[]={190.5,279.39999,368.29999,381,406.39999,444.5,508,660.40002};
	};
	class B_762x39_Ball_Green_F: B_762x39_Ball_F
	{
		airFriction=-0.00171;
		caliber=1.1;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed=715;
		tracerScale=1;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=7.5490699;
		ACE_ballisticCoefficients[]={0.278};
		ACE_muzzleVelocities[]={651,701,716,734,749};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_762x39_trcr: B_762x39_Ball_Green_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class ff7_b_762x39_trcy: B_762x39_Ball_Green_F
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ff7_b_300blk_otm: B_556x45_Ball
	{
		airFriction=-0.00154;
		airLock=1;
		caliber=1;
		deflecting=15;
		hit=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalspeed=670;
		tracerscale=0.80000001;
		tracerstarttime=0.050000001;
		tracerendtime=1.5;
		timeToLive=5;
		visiblefire=5;
		audiblefire=7;
		ACE_caliber=7.8200002;
		ACE_bulletLength=28.396999;
		ACE_bulletMass=8.0998602;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.308};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={577,621,668,685,692};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_300blk_ttsx: ff7_b_300blk_otm
	{
		airFriction=-0.00127;
		airLock=1;
		caliber=1.3;
		deflecting=15;
		hit=9;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalspeed=745;
		tracerscale=0.80000001;
		tracerstarttime=0.050000001;
		tracerendtime=1.5;
		timeToLive=5;
		visiblefire=5;
		audiblefire=8;
		ACE_caliber=7.8200002;
		ACE_bulletLength=28.396999;
		ACE_bulletMass=7.4519;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.28200001};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={658,697,743,776,789};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_300blk_sub: ff7_b_300blk_otm
	{
		airFriction=-0.00119;
		airLock=1;
		caliber=0.89999998;
		deflecting=20;
		hit=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalspeed=320;
		tracerscale=0.80000001;
		tracerstarttime=0.050000001;
		tracerendtime=1.5;
		timeToLive=5;
		visiblefire=3;
		audiblefire=5;
		ACE_caliber=7.8200002;
		ACE_bulletLength=32.823002;
		ACE_bulletMass=14.2558;
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999,-25.469999,-22.85,-20.120001,-16.98,-12.8,-7.6399999,-1.53,5.96,15.17,26.190001};
		ACE_ballisticCoefficients[]={0.248};
		ACE_velocityBoundaries[]={};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={291,303,318,326,331};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_65x39_Case: B_65x39_Caseless
	{
		airFriction=-0.00062437;
		caliber=1.3;
		hit=11;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=795;
		tracerScale=0.69999999;
		ACE_bulletLength=33.262001;
		ACE_bulletMass=8.3590603;
		ACE_ballisticCoefficients[]={0.28600001};
		ACE_muzzleVelocities[]={718,734,761,794,834};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class B_65x39_Case_green: B_65x39_Case
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
	};
	class ff7_b_65x39c_trcr: B_65x39_Case_green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
	};
	class B_65x39_Case_yellow: B_65x39_Case_green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1;
	};
	class ACE_65_Creedmor_Ball: B_65x39_Case
	{
		nvgOnly=1;
		tracerScale=0.89999998;
	};
	class B_762x51_Ball: BulletBase
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=820;
		tracerScale=0.80000001;
		ACE_muzzleVelocities[]={705,735,775,800,821,833,845,855};
		ACE_barrelLengths[]={254,304.79999,381,406.39999,508,609.59998,635,660.40002};
	};
	class B_762x51_Tracer_Green: B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1.1;
	};
	class B_762x51_Tracer_Red: B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1.1;
	};
	class B_762x51_Tracer_Yellow: B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1.1;
	};
	class ACE_762x51_Ball_M118LR: B_762x51_Ball
	{
		airFriction=-0.00081;
		caliber=1.3;
		deflecting=20;
		hit=13;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=805;
		tracerScale=0.80000001;
		ACE_bulletMass=11.14547;
		ACE_ballisticCoefficients[]={0.243};
		ACE_muzzleVelocities[]={751,784,804,821,829};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class ACE_762x51_Ball_M993_AP: B_762x51_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=910;
		tracerScale=0.80000001;
		ACE_muzzleVelocities[]={850,875,910,930,940};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class ACE_762x51_Ball_Mk316_Mod_0: B_762x51_Ball
	{
		caliber=1.5;
		deflecting=20;
		hit=13;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=790;
		tracerScale=0.80000001;
		ACE_bulletMass=11.33981;
		ACE_muzzleVelocities[]={749,781,790,807,815};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class ACE_762x51_Ball_Mk319_Mod_0: B_762x51_Ball
	{
		caliber=1.8;
		hit=12;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=895;
		tracerScale=0.80000001;
		ACE_muzzleVelocities[]={845,885,895,910,920};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class ACE_762x51_Ball_Subsonic: B_762x51_Ball
	{
		deflecting=20;
		hit=12;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=320;
		tracerScale=0.80000001;
		ACE_muzzleVelocities[]={305,314,318,323,328};
		ACE_barrelLengths[]={254,406.39999,508,609.59998,660.40002};
	};
	class ACE_B_762x51_Tracer_Dim: B_762x51_Ball
	{
		nvgOnly=1;
		tracerScale=0.89999998;
	};
	class B_762x54_Ball: B_762x51_Ball
	{
		caliber=1.5;
		hit=13;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=825;
		tracerScale=0.80000001;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=9.7975998;
		ACE_ballisticCoefficients[]={0.39700001};
		ACE_muzzleVelocities[]={760,795,825,845,865};
		ACE_barrelLengths[]={254,406.39999,508,604.5,736.59998};
	};
	class B_762x54_Tracer_Green: B_762x54_Ball
	{
		airFriction=-0.00103739;
		caliber=1.5;
		deflecting=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed=800;
		tracerScale=1.1;
		ACE_bulletLength=28.629;
		ACE_bulletMass=9.6552;
		ACE_ballisticCoefficients[]={0.37200001};
		ACE_muzzleVelocities[]={735,770,798,809,838};
		ACE_barrelLengths[]={254,406.39999,508,604.5,736.59998};
	};
	class B_762x54_Tracer_Red: B_762x54_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.1;
	};
	class B_762x54_Tracer_Yellow: B_762x54_Tracer_Green
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1.1;
	};
	class ACE_762x54_Ball_7T2: B_762x54_Ball
	{
		caliber=1.5;
		typicalSpeed=800;
		nvgOnly=1;
		tracerScale=0.89999998;
		ACE_bulletMass=9.6552;
		ACE_ballisticCoefficients[]={0.37200001};
		ACE_muzzleVelocities[]={735,770,798,809,838};
		ACE_barrelLengths[]={254,406.39999,508,604.5,736.59998};
	};
	class ff7_b_762x54r_7n14: B_762x54_Ball
	{
		airFriction=-0.00106;
		caliber=2.0999999;
		deflecting=15;
		hit=11;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=865;
		tracerScale=0.80000001;
		ACE_bulletLength=28.150999;
		ACE_bulletMass=9.4023199;
		ACE_ballisticCoefficients[]={0.37400001};
		ACE_muzzleVelocities[]={744,812,864,873,882};
		ACE_barrelLengths[]={254,406.39999,508,604.5,736.59998};
	};
	class ff7_b_762x54r_sub: B_762x54_Ball
	{
		airFriction=-0.00098000001;
		caliber=1.1;
		deflecting=20;
		hit=12;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=320;
		tracerScale=0.80000001;
		ACE_bulletLength=28.472;
		ACE_bulletMass=12.6358;
		ACE_ballisticCoefficients[]={0.33199999};
		ACE_muzzleVelocities[]={290,308,319,326,329};
		ACE_barrelLengths[]={254,406.39999,508,604.5,736.59998};
	};
	class B_338_Ball: BulletBase
	{
		airFriction=-0.00060840999;
		caliber=1.9;
		hit=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		typicalSpeed=880;
		tracerScale=1.1;
		tracerStartTime=0.072999999;
		tracerEndTime=2.3;
		ACE_bulletMass=16.199699;
		ACE_muzzleVelocities[]={803,867,882,908,921};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_338_NM_Ball: B_338_Ball
	{
		airFriction=-0.00053639;
		caliber=1.8;
		deflecting=20;
		hit=16;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=760;
		tracerScale=0.80000001;
		tracerStartTime=0.072999999;
		tracerEndTime=2.3;
		ACE_bulletLength=43.18;
		ACE_bulletMass=19.440001;
		ACE_ballisticCoefficients[]={0.38100001};
		ACE_muzzleVelocities[]={755,791,806,822,836};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class ACE_338_Ball: B_338_Ball
	{
		airFriction=-0.00055706;
		caliber=1.5;
		deflecting=20;
		hit=16;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=825;
		tracerScale=0.80000001;
		ACE_bulletLength=44.0182;
		ACE_bulletMass=19.440001;
		ACE_ballisticCoefficients[]={0.368};
		ACE_muzzleVelocities[]={778,798,826,842,858};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class ACE_338_Ball_API526: B_338_Ball
	{
		airFriction=-0.00069219997;
		caliber=2.8;
		hit=14;
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		typicalSpeed=895;
		tracerScale=0.80000001;
		ACE_bulletLength=38.988998;
		ACE_bulletMass=16.394131;
		ACE_ballisticCoefficients[]={0.292};
		ACE_muzzleVelocities[]={809,884,896,912,931};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_93x64_Ball: BulletBase
	{
		airFriction=-0.00110727;
		caliber=2.2;
		deflecting=15;
		hit=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed=785;
		tracerScale=0.89999998;
		tracerStartTime=0.072999999;
		tracerEndTime=2.3;
		ACE_muzzleVelocities[]={714,751,787,848,882};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class ff7_b_93x64_hpbt: B_93x64_Ball
	{
		airFriction=-0.00103;
		caliber=1.7;
		deflecting=20;
		hit=16;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=740;
		ACE_bulletMass=16.588499;
		ACE_ballisticCoefficients[]={0.33700001};
		ACE_muzzleVelocities[]={702,726,742,814,841};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_127x54_Ball: BulletBase
	{
		airFriction=-0.00019568;
		caliber=3.2;
		hit=18;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		typicalSpeed=315;
		tracerScale=1.1;
		tracerStartTime=0.072999999;
		tracerEndTime=2.5;
		ACE_muzzleVelocities[]={298,311,317,323,327};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_408_Ball: BulletBase
	{
		caliber=1.8;
		deflecting=15;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=910;
		tracerScale=1;
		tracerStartTime=0.072999999;
		tracerEndTime=2.5;
		ACE_muzzleVelocities[]={747,802,867,908,927};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class ACE_408_Ball: B_408_Ball
	{
		airFriction=-0.00065414002;
		caliber=2.9000001;
		hit=18;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=1065;
		ACE_bulletLength=41.452801;
		ACE_bulletMass=19.7637;
		ACE_ballisticCoefficients[]={0.27900001};
		ACE_muzzleVelocities[]={796,884,972,1067,1123};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_127x99_Ball: BulletBase
	{
		caliber=2.0999999;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=880;
		tracerScale=1;
		tracerStartTime=0.072999999;
		tracerEndTime=2.5;
		ACE_ballisticCoefficients[]={0.67199999};
		ACE_muzzleVelocities[]={767,812,867,883,914};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_127x99_Ball_Tracer_Green: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.2;
	};
	class B_127x99_Ball_Tracer_Red: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1.2;
	};
	class B_127x99_Ball_Tracer_Yellow: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale=1.2;
	};
	class ACE_127x99_API: B_127x99_Ball
	{
		hit=20;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=875;
		tracerScale=1;
		ACE_muzzleVelocities[]={764,811,867,876,908};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class ACE_127x99_Ball_AMAX: B_127x99_Ball
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=855;
		tracerScale=1;
		ACE_bulletMass=48.599201;
		ACE_muzzleVelocities[]={748,804,847,857,892};
		ACE_barrelLengths[]={254,406.39999,508,604.5,762};
	};
	class B_50BW_Ball_F: BulletBase
	{
		airFriction=-0.00339;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed=385;
		tracerScale=0.80000001;
		visibleFire=5;
		audibleFire=5;
		ACE_ballisticCoefficients[]={0.131};
		ACE_muzzleVelocities[]={333,352,384,402,435};
		ACE_barrelLengths[]={127,152.39999,228.60001,304.79999,406.39999};
	};
	class ff7_b_flr: F_40mm_White
	{
		model="\A3\Weapons_F\Ammo\UGL_Flare";
		intensity=25000;
		flareSize=12;
		timeToLive=30;
		lightColor[]={0.66000003,0.66000003,1,1};
		visibleFire=5;
		audibleFire=3;
	};
	class ff7_b_65x39_slap: B_65x39_Caseless
	{
		airFriction=-0.00031999999;
		airLock=1;
		caliber=3;
		deflecting=15;
		hit=2;
		indirectHit=1;
		indirectHitRange=0.1;
		typicalSpeed=1175;
		visibleFire=6;
		audibleFire=9;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=0.80000001;
		tracerendtime=1.3;
		tracerstarttime=0.079999998;
		ACE_caliber=6.7059999;
		ACE_bulletLength=31.011999;
		ACE_bulletMass=3.1782;
		ACE_ballisticCoefficients[]={0.34999999};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={850,1025,1100,1250,1325};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
	class ff7_b_762x51_slap: B_762x51_Ball
	{
		airFriction=-0.00034999999;
		airLock=1;
		caliber=4;
		deflecting=15;
		hit=3;
		indirectHit=1;
		indirectHitRange=0.1;
		typicalSpeed=1245;
		visibleFire=6;
		audibleFire=9;
		model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale=0.80000001;
		tracerendtime=1.3;
		tracerstarttime=0.079999998;
		ACE_caliber=7.823;
		ACE_bulletLength=28.955999;
		ACE_bulletMass=4.8599;
		ACE_ballisticCoefficients[]={0.38};
		ACE_standardAtmosphere="ICAO";
		ACE_dragModel=7;
		ACE_muzzleVelocities[]={890,1070,1160,1310,1385};
		ACE_barrelLengths[]={190.5,279.39999,406.39999,508,660.40002};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class 30Rnd_9x21_Mag: CA_Magazine
	{
		lastroundstracer=3;
		tracersevery=5;
		count=30;
		mass=9;
		initspeed=314;
		descriptionshort="subsonic<br />315m/s / 1033fps<br />10.24g / 158gr<br />Flight ++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 30Rnd (SUB) Mag";
		displaynameshort="9x21 SUB";
		ammo="ff7_b_9x21_sub";
	};
	class 30Rnd_9x21_Green_Mag: 30Rnd_9x21_Mag
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=314;
		descriptionshort="subsonic<br />315m/s / 1033fps<br />10.24g / 158gr<br />Flight ++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 30Rnd (SUB Green) Mag";
		displaynameshort="9x21 SUB Tracer";
		ammo="ff7_b_9x21_sub_trcg";
	};
	class 30Rnd_9x21_Red_Mag: 30Rnd_9x21_Mag
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=314;
		descriptionshort="subsonic<br />315m/s / 1033fps<br />10.24g / 158gr<br />Flight ++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 30Rnd (SUB Red) Mag";
		displaynameshort="9x21 SUB Tracer";
		ammo="ff7_b_9x21_sub_trcr";
	};
	class 30Rnd_9x21_Yellow_Mag: 30Rnd_9x21_Mag
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=315;
		descriptionshort="subsonic<br />315m/s / 1033fps<br />10.24g / 158gr<br />Flight ++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 30Rnd (SUB Yellow) Mag";
		displaynameshort="9x21 SUB Tracer";
		ammo="ff7_b_9x21_sub_trcy";
	};
	class 30Rnd_9x21_Mag_SMG_02: 30Rnd_9x21_Mag
	{
		lastroundstracer=3;
		tracersevery=5;
		count=30;
		mass=9;
		initspeed=374;
		descriptionshort="375m/s / 1230 fps<br />8.04g / 124gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++";
		displayname="9x21 30Rnd (FMJ+P) Mag";
		displaynameshort="9x21 FMJ+P";
		ammo="ff7_b_9x21_fmj";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Green: 30Rnd_9x21_Mag_SMG_02
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=374;
		descriptionshort="375m/s / 1230 fps<br />8.04g / 124gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++";
		displayname="9x21 30Rnd (FMJ+P Green) Mag";
		displaynameshort="9x21 FMJ+P Tracer";
		ammo="ff7_b_9x21_fmj_trcg";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Red: 30Rnd_9x21_Mag_SMG_02
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=374;
		descriptionshort="375m/s / 1230 fps<br />8.04g / 124gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++";
		displayname="9x21 30Rnd (FMJ+P Red) Mag";
		displaynameshort="9x21 FMJ+P Tracer";
		ammo="ff7_b_9x21_fmj_trcr";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_9x21_Mag_SMG_02_Tracer_Yellow: 30Rnd_9x21_Mag_SMG_02
	{
		lastroundstracer=30;
		tracersevery=1;
		count=30;
		mass=9;
		initspeed=374;
		descriptionshort="375m/s / 1230 fps<br />8.04g / 124gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++";
		displayname="9x21 30Rnd (FMJ+P Yellow) Mag";
		displaynameshort="9x21 FMJ+P";
		ammo="ff7_b_9x21_fmj_trcy";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 16Rnd_9x21_Mag: 30Rnd_9x21_Mag
	{
		lastroundstracer=2;
		tracersevery=5;
		count=18;
		mass=7;
		initspeed=404;
		descriptionshort="405m/s / 1329fps<br />7.45g / 115gr<br />Flight +++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 18Rnd (JHP) Mag";
		displaynameshort="9x21 JHP";
		ammo="B_9x21_Ball";
		picture="\ff7_ammo\data\mag_psmg_m_ca.paa";
	};
	class 16Rnd_9x21_green_Mag: 16Rnd_9x21_Mag
	{
		lastroundstracer=18;
		tracersevery=1;
		count=18;
		mass=7;
		initspeed=404;
		descriptionshort="405m/s / 1329fps<br />7.45g / 115gr<br />Flight +++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 18Rnd (JHP Green) Mag";
		displaynameshort="9x21 JHP Tracer";
		ammo="B_9x21_Ball_Tracer_Green";
		picture="\ff7_ammo\data\mag_psmg_m_ca.paa";
	};
	class 16Rnd_9x21_red_Mag: 16Rnd_9x21_Mag
	{
		lastroundstracer=18;
		tracersevery=1;
		count=18;
		mass=7;
		initspeed=404;
		descriptionshort="405m/s / 1329fps<br />7.45g / 115gr<br />Flight +++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 18Rnd (JHP Red) Mag";
		displaynameshort="9x21 JHP Tracer";
		ammo="B_9x21_Ball_Tracer_Red";
		picture="\ff7_ammo\data\mag_psmg_m_ca.paa";
	};
	class 16Rnd_9x21_yellow_Mag: 16Rnd_9x21_Mag
	{
		lastroundstracer=18;
		tracersevery=1;
		count=18;
		mass=7;
		initspeed=404;
		descriptionshort="405m/s / 1329fps<br />7.45g / 115gr<br />Flight +++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 18Rnd (JHP Yellow) Mag";
		displaynameshort="9x21 JHP Tracer";
		ammo="B_9x21_Ball_Tracer_Yellow";
		picture="\ff7_ammo\data\mag_psmg_m_ca.paa";
	};
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		lastroundstracer=2;
		tracersevery=5;
		count=13;
		mass=5;
		initspeed=374;
		descriptionshort="375m/s / 1230 fps<br />8.04g / 124gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++";
		displayname="9x21 13Rnd (FMJ+P) Mag";
		displaynameshort="9x21 FMJ+P";
		ammo="ff7_b_9x21_fmj";
		picture="\ff7_ammo\data\mag_psmg_s_ca.paa";
	};
	class ff7_13rnd_9x21_sub_mag: 10Rnd_9x21_Mag
	{
		author="BI, ACE3, FoxForce7";
		scope=2;
		lastroundstracer=2;
		tracersevery=5;
		count=13;
		mass=5;
		initspeed=314;
		descriptionshort="subsonic<br />315m/s / 1033fps<br />10.24g / 158gr<br />Flight ++++++<br />Pierce ++<br />Wound +++++";
		displayname="9x21 13Rnd (SUB) Mag";
		displaynameshort="9x21 SUB";
		ammo="ff7_b_9x21_sub";
		picture="\ff7_ammo\data\mag_psmg_s_ca.paa";
	};
	class ACE_16Rnd_9x19_mag: 16Rnd_9x21_Mag
	{
		lastroundstracer=2;
		tracersevery=5;
		count=10;
		mass=5;
		initSpeed=389;
		descriptionshort="390m/s / 1280fps<br />6.16g / 95gr<br />Flight +++++++<br />Pierce +++<br />Wound ++++";
		displayname="9x18PM 10Rnd (SP-7) Mag";
		displaynameshort="9x18PM SP-7";
		ammo="ACE_9x19_Ball";
		picture="\ff7_ammo\data\mag_psmg_s_ca.paa";
	};
	class 11Rnd_45ACP_Mag: CA_Magazine
	{
		lastroundstracer=2;
		tracersevery=5;
		count=10;
		mass=5;
		initSpeed=289;
		descriptionshort="subsonic<br />290m/s / 951fps<br />14.91g / 230gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".45ACP 10Rnd (SUB) Mag";
		displaynameshort=".45ACP SUB";
		ammo="B_45ACP_Ball";
		picture="\ff7_ammo\data\mag_psmg_s_ca.paa";
	};
	class ff7_10rnd_45acp_plus_mag: 11Rnd_45ACP_Mag
	{
		author="BI, ACE3, FoxForce7";
		scope=2;
		lastroundstracer=2;
		tracersevery=5;
		count=10;
		mass=5;
		initSpeed=384;
		descriptionshort="385m/s / 1263fps<br />9.39g / 145gr<br />Flight +++++++<br />Pierce ++++<br />Wound ++++";
		displayname=".45ACP 10Rnd (FMJ+P) Mag";
		displaynameshort=".45ACP FMJ+P";
		ammo="ff7_b_45acp_plus";
		picture="\ff7_ammo\data\mag_psmg_s_ca.paa";
	};
	class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag
	{
		lastroundstracer=2;
		tracersevery=5;
		count=25;
		mass=9;
		initSpeed=289;
		descriptionshort="subsonic<br />290m/s / 951fps<br />14.91g / 230gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".45ACP 25Rnd (SUB) Mag";
		displaynameshort=".45ACP SUB";
		ammo="B_45ACP_Ball";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_45ACP_Mag_SMG_01
	{
		lastroundstracer=25;
		tracersevery=1;
		count=25;
		mass=9;
		initSpeed=289;
		descriptionshort="subsonic<br />290m/s / 951fps<br />14.91g / 230gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".45ACP 25Rnd (SUB Green) Mag";
		displaynameshort=".45ACP SUB Tracer";
		ammo="B_45ACP_Ball_Green";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_45ACP_Mag_SMG_01
	{
		lastroundstracer=25;
		tracersevery=1;
		count=25;
		mass=9;
		initSpeed=289;
		descriptionshort="subsonic<br />290m/s / 951fps<br />14.91g / 230gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".45ACP 25Rnd (SUB Red) Mag";
		displaynameshort=".45ACP SUB Tracer";
		ammo="ff7_b_45acp_trcr";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_45ACP_Mag_SMG_01
	{
		lastroundstracer=25;
		tracersevery=1;
		count=25;
		mass=9;
		initSpeed=289;
		descriptionshort="subsonic<br />290m/s / 951fps<br />14.91g / 230gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".45ACP 25Rnd (SUB Yellow) Mag";
		displaynameshort=".45ACP SUB Tracer";
		ammo="B_45ACP_Ball_Yellow";
		picture="\ff7_ammo\data\mag_psmg_l_ca.paa";
	};
	class 9Rnd_45ACP_Mag: 11Rnd_45ACP_Mag
	{
		lastroundstracer=2;
		tracersevery=5;
		count=15;
		mass=7;
		initSpeed=384;
		descriptionshort="385m/s / 1263fps<br />9.39g / 145gr<br />Flight +++++++<br />Pierce ++++<br />Wound ++++";
		displayname=".45ACP 15Rnd (FMJ+P) Mag";
		displaynameshort=".45ACP FMJ+P";
		ammo="ff7_b_45acp_plus";
		picture="\ff7_ammo\data\mag_psmg_m_ca.paa";
	};
	class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag
	{
		lastroundstracer=1;
		tracersevery=3;
		count=6;
		initSpeed=384;
		descriptionshort="385m/s / 1263fps<br />9.39g / 145gr<br />Flight +++++++<br />Pierce ++++<br />Wound ++++";
		displayname=".45ACP 6Rnd (FMJ+P) Cylinder";
		displaynameshort=".45ACP FMJ+P";
		ammo="ff7_b_45acp_plus";
	};
	class ff7_40rnd_46x30_shp_mag: 30Rnd_9x21_Mag
	{
		author="BI, ACE3, FoxForce7";
		scope=2;
		lastroundstracer=2;
		tracersevery=5;
		count=40;
		mass=9;
		initSpeed=674;
		descriptionshort="675m/s / 2215fps<br />2.01g / 31gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		displayname="4.6x30 40Rnd (SHP) Mag";
		displaynameshort="4.6x30 SHP";
		ammo="ff7_b_46x30_shp";
	};
	class ff7_40rnd_46x30_fmj_mag: ff7_40rnd_46x30_shp_mag
	{
		author="BI, ACE3, FoxForce7";
		scope=2;
		lastroundstracer=2;
		tracersevery=5;
		count=40;
		mass=9;
		initSpeed=604;
		descriptionshort="605m/s / 1985fps<br />2.72g / 42gr<br />Flight +++++++++<br />Pierce +++<br />Wound ++++++";
		displayname="4.6x30 40Rnd (FMJ) Mag";
		displaynameshort="4.6x30 FMJ";
		ammo="ff7_b_46x30_fmj";
	};
	class ff7_40rnd_46x30_dm11_mag: ff7_40rnd_46x30_shp_mag
	{
		author="BI, ACE3, FoxForce7";
		scope=2;
		lastroundstracer=2;
		tracersevery=5;
		count=40;
		mass=9;
		initSpeed=724;
		descriptionshort="725m/s / 2379fps<br />2.01g / 31gr<br />Flight ++++++++<br />Pierce ++++++++<br />Wound ++++";
		displayname="4.6x30 40Rnd (DM11) Mag";
		displaynameshort="4.6x30 DM11";
		ammo="ff7_b_46x30_dm11";
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		displayname="5.45x39 30Rnd (7N6M) Mag";
		displaynameshort="5.45x39 7N6M";
		descriptionshort="880m/s / 2887fps<br />3.43g / 53gr<br />Flight ++++++++<br />Pierce +++++<br />Wound +++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		ammo="B_545x39_Ball_F";
		count=30;
		initSpeed=879;
	};
	class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F
	{
		displayname="5.45x39 30Rnd (7T3M Green) Mag";
		displaynameshort="5.45x39 Tracer";
		descriptionshort="870m/s /2854fps<br />3.21g 49.5gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		ammo="B_545x39_Ball_Green_F";
		count=30;
		initSpeed=869;
	};
	class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F
	{
		displayname="5.45x39 30Rnd (7T3M Red) Mag";
		displaynameshort="5.45x39 Tracer";
		descriptionshort="870m/s /2854fps<br />3.21g 49.5gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		ammo="ff7_b_545x39_trcr";
		count=30;
		initSpeed=869;
	};
	class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F
	{
		displayname="5.45x39 30Rnd (7T3M Yellow) Mag";
		displaynameshort="5.45x39 Tracer";
		descriptionshort="870m/s /2854fps<br />3.21g 49.5gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		ammo="ff7_b_545x39_trcy";
		count=30;
		initSpeed=869;
	};
	class ff7_30rnd_545x39_7n24_mag: 30Rnd_545x39_Mag_F
	{
		displayname="5.45x39 30Rnd (7N24) Mag";
		displaynameshort="5.45x39 7N24";
		descriptionshort="835m/s / 2740fps<br />4.15g / 64gr<br />Flight +++++++++<br />Pierce +++++++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		ammo="ff7_b_545x39_7n24";
		count=30;
		initSpeed=834;
	};
	class ff7_30rnd_545x39_7u1_mag: 30Rnd_545x39_Mag_F
	{
		displayname="5.45x39 30Rnd (7U1) Mag";
		displaynameshort="5.45x39 7U1";
		descriptionshort="subsonic<br />305m/s / 1001fps<br />5.18g / 80gr<br />Flight +++++<br />Pierce ++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		ammo="ff7_b_545x39_7u1";
		count=30;
		initSpeed=304;
	};
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
		displayName="5.56x45 30Rnd (M855) Mag";
		displaynameshort="5.56x45 M855";
		descriptionshort="885m/s / 2904fps<br />4.02g / 62gr<br />Flight +++++++<br />Pierce ++++++<br />bWound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=884;
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		displayName="5.56x45 30Rnd (M856 Red) Mag";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=9;
		initSpeed=839;
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		displayName="5.56x45 30Rnd (M856 Green) Mag";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=9;
		initSpeed=839;
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		displayName="5.56x45 30Rnd (M856 Yellow) Mag";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=9;
		initSpeed=839;
	};
	class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag_Tracer_Red
	{
		displayname="5.56x45 30Rnd (M856 IR) Mag";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=9;
		initSpeed=839;
	};
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		displayname="5.56x45 30Rnd (EPR/M885A1) Mag";
		displaynameshort="5.56x45 EPR";
		descriptionshort="900m/s / 2053fps<br />4.02g / 62gr<br />Flight +++++++<br />Pierce +++++++++<br />Wound ++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=899;
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		displayname="5.56x45 30Rnd (SPR/Mk262Mod1) Mag";
		displaynameshort="5.56x45 SPR";
		descriptionshort="825m/s / 2707fps<br />4.99g / 77gr<br />Flight +++++++++<br />Pierce ++<br />Wound ++++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=824;
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		displayname="5.56x45 30Rnd (SOST/Mk318Mod1) Mag";
		displaynameshort="5.56x45 SOST";
		descriptionshort="875m/s / 2871fps<br />4.02g / 62gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=874;
	};
	class ff7_30rnd_556x45_sub_mag: 30Rnd_556x45_Stanag
	{
		displayname="5.56x45 30Rnd (SUB) Mag";
		displaynameshort="5.56x45 SUB";
		descriptionshort="subsomic<br />315m/s / 1035fps<br />5.51g / 85gr<br />Flight +++++<br />Pierce +++<br />Wound +++++++";
		tracersevery=5;
		mass=9;
		initSpeed=314;
		ammo="ff7_b_556x45_sub";
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		displayName="5.56x45 150Rnd (M855) Drum";
		displaynameshort="5.56x45 M855";
		descriptionshort="885m/s / 2904fps<br />4.02g / 62gr<br />Flight +++++++<br />Pierce ++++++<br />bWound ++++++";
		lastroundstracer=5;
		tracersevery=5;
		initSpeed=884;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		displayName="5.56x45 150Rnd (M856 Red) Drum";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=150;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class ff7_150rnd_556x45_trcg_drum: 150Rnd_556x45_Drum_Mag_Tracer_F
	{
		displayName="5.56x45 150Rnd (M856 Green) Drum";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=150;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Green";
	};
	class ff7_150rnd_556x45_trcy_drum: 150Rnd_556x45_Drum_Mag_Tracer_F
	{
		displayName="5.56x45 150Rnd (M856 Yellow) Drum";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=150;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Yellow";
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		displayName="5.56x45 200Rnd (M855) Box";
		displaynameshort="5.56x45 M855";
		descriptionshort="885m/s / 2904fps<br />4.02g / 62gr<br />Flight +++++++<br />Pierce ++++++<br />bWound ++++++";
		lastroundstracer=5;
		tracersevery=5;
		initSpeed=884;
	};
	class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
	{
		displayName="5.56x45 200Rnd (M856 Red) Box";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Red";
	};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
	{
		displayName="5.56x45 200Rnd (M856 Yellow) Box";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Yellow";
	};
	class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
	{
		displayName="5.56x45 200Rnd (M856 Green) Box";
		displaynameshort="5.56x45 Tracer";
		descriptionshort="840m/s / 2756fps<br />4.13g / 63.7gr<br />Flight ++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=839;
		ammo="B_556x45_Ball_Tracer_Green";
	};
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		displayname="5.8x42 30Rnd (DBP95) Mag";
		displaynameshort="5.8x42 DBP95";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		ammo="B_580x42_Ball_F";
		count=30;
		initSpeed=899;
	};
	class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F
	{
		displayname="5.8x42 30Rnd (DBP95 Green) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		ammo="ff7_b_58x42_trcg";
		initSpeed=899;
	};
	class ff7_30rnd_58x42_trcr_mag: 30Rnd_580x42_Mag_Tracer_F
	{
		displayname="5.8x42 30Rnd (DBP95 Red) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		ammo="ff7_b_58x42_trcr";
		initSpeed=899;
	};
	class ff7_30rnd_58x42_trcy_mag: 30Rnd_580x42_Mag_Tracer_F
	{
		displayname="5.8x42 30Rnd (DBP95 Yellow) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		ammo="ff7_b_58x42_trcy";
		count=30;
		initSpeed=899;
	};
	class ff7_30rnd_58x42_dbp10_mag: 30Rnd_580x42_Mag_F
	{
		displayname="5.8x42 30Rnd (DBP10) Mag";
		displaynameshort="5.8x42 DBP10";
		descriptionshort="880m/s / 2887fps<br />4.60g / 71gr<br />Flight ++++++++<br />Pierce ++++++++<br />Wound ++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="ff7_58x42_dbp10";
		initSpeed=879;
	};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		displayname="5.8x42 100Rnd (DBP95) Mag";
		displaynameshort="5.8x42 DBP95";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_580x42_Ball_F";
		initSpeed=899;
		count=100;
		mass=20;
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		displayname="5.8x42 100Rnd (DBP95 Green) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=100;
		tracersevery=1;
		ammo="ff7_b_58x42_trcg";
		initSpeed=899;
	};
	class ff7_100rnd_58x42_trcr_mag: 100Rnd_580x42_Mag_Tracer_F
	{
		displayname="5.8x42 100Rnd (DBP95 Red) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=100;
		tracersevery=1;
		ammo="ff7_b_58x42_trcr";
		initSpeed=899;
	};
	class ff7_100rnd_58x42_trcy_mag: 100Rnd_580x42_Mag_Tracer_F
	{
		displayname="5.8x42 100Rnd (DBP95 Yellow) Mag";
		displaynameshort="5.8x42 Tracer";
		descriptionshort="900m/s / 2953fps<br />4.15g / 64gr<br />Flight +++++++<br />Pierce +++++<br />Wound +++++";
		lastroundstracer=100;
		tracersevery=1;
		ammo="ff7_b_58x42_trcy";
		initSpeed=899;
	};
	class ff7_100rnd_58x42_dbp10_mag: 100Rnd_580x42_Mag_F
	{
		displayname="5.8x42 100Rnd (DBP10) Mag";
		displaynameshort="5.8x42 DBP10";
		descriptionshort="880m/s / 2887fps<br />4.60g / 71gr<br />Flight ++++++++<br />Pierce ++++++++<br />Wound ++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="ff7_58x42_dbp10";
		initSpeed=879;
	};
	class 30Rnd_65x39_caseless_mag: CA_Magazine
	{
		displayname="6.5x39CL 30Rnd (Ball) Mag";
		displaynameshort="6.5x39CL Ball";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=819;
	};
	class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
	{
		displayname="6.5x39CL 30Rnd (Tracer Red) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=819;
	};
	class ACE_30Rnd_65x39_caseless_mag_Tracer_Dim: 30Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5x39CL 30Rnd (Tracer IR) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=819;
		ammo="ACE_65x39_Caseless_Tracer_Dim";
	};
	class 100Rnd_65x39_caseless_mag: CA_Magazine
	{
		displayname="6.5x39CL 100Rnd (Ball) Mag";
		displaynameshort="6.5x39CL Ball";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=5;
		tracersevery=5;
		initSpeed=819;
	};
	class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5x39CL 100Rnd (Tracer) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=100;
		tracersevery=1;
		initSpeed=819;
	};
	class ACE_100Rnd_65x39_caseless_mag_Tracer_Dim: 100Rnd_65x39_caseless_mag_Tracer
	{
		displayname="6.5x39CL 100Rnd (Tracer IR) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=819;
	};
	class 30Rnd_65x39_caseless_green: 30Rnd_65x39_caseless_mag
	{
		displayname="6.5x39CL 30Rnd (Ball) Mag";
		displaynameshort="6.5x39CL Ball";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=9;
		initSpeed=819;
	};
	class 30Rnd_65x39_caseless_green_Tracer: 30Rnd_65x39_caseless_green
	{
		displayname="6.5x39CL 30Rnd (Tracer Green) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=819;
	};
	class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green
	{
		displayname="6.5x39CL 30Rnd (FMJBT) Mag";
		displaynameshort="6.5x39CL FMJBT";
		descriptionshort="865m/s / 2838fps<br />7.13g / 110gr<br />Flight +++++++++<br />Pierce ++++++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=864;
		ammo="ff7_b_65x39cl_fmjbt";
	};
	class ACE_30Rnd_65x39_caseless_green_mag_Tracer_Dim: 30Rnd_65x39_caseless_green_mag_Tracer
	{
		displayname="6.5x39CL 30Rnd (Tracer IR) Mag";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=30;
		tracersevery=1;
		mass=9;
		initSpeed=819;
		ammo="ACE_65x39_Caseless_green_Tracer_Dim";
	};
	class ff7_200rnd_65x39cl_ball_box: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5x39CL 200Rnd (Ball) Box";
		displaynameshort="6.5x39CL Ball";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_65x39_Caseless";
		initSpeed=819;
		mass=40;
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_ca.paa";
	};
	class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag
	{
		displayname="6.5x39CL 200Rnd (Tracer Green) Box";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=819;
		mass=40;
		ammo="B_65x39_Caseless_green";
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_green_ca.paa";
	};
	class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box
	{
		displayname="6.5x39CL 200Rnd (Tracer Red) Box";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=819;
		mass=40;
		ammo="ff7_b_65x39cl_trcr";
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_red_ca.paa";
	};
	class ff7_200rnd_65x39cl_trcr_box: ff7_200rnd_65x39cl_ball_box
	{
		displayname="6.5x39CL 200Rnd (Tracer Yellow) Box";
		displaynameshort="6.5x39CL Tracer";
		descriptionshort="820m/s / 2690fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=200;
		tracersevery=1;
		ammo="B_65x39_Caseless_yellow";
		initSpeed=819;
		mass=40;
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_yellow_ca.paa";
	};
	class ACE_200Rnd_65x39_cased_Box_Tracer_Dim: 200Rnd_65x39_cased_Box
	{
		displayname="6.5x39CL 200Rnd (FMJBT) Box";
		displaynameshort="6.5x39CL FMJBT";
		descriptionshort="865m/s / 2838fps<br />7.13g / 110gr<br />Flight +++++++++<br />Pierce ++++++++<br />Wound +++++";
		lastroundstracer=200;
		tracersevery=1;
		initSpeed=864;
		mass=40;
		ammo="ff7_b_65x39cl_fmjbt";
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_ca.paa";
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		displayname="7.62x39 30Rnd (57-N-231M) Mag";
		displaynameshort="7.62x39 57-N-231";
		descriptionshort="730m/s / 2395fps<br />7.97g / 123gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_762x39_Ball_F";
		count=30;
		initSpeed=729;
		mass=10;
	};
	class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F
	{
		displayname="7.62x39 30Rnd (57-N-231PM Green) Mag";
		displaynameshort="7.62x39 Tracer";
		descriptionshort="715m/s / 2346fps<br />7.55g 116.5gr<br />Flight +++++++<br />Pierce ++++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		ammo="B_762x39_Ball_Green_F";
		count=30;
		initSpeed=714;
		mass=10;
	};
	class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F
	{
		displayname="7.62x39 30Rnd (57-N-231PM Red) Mag";
		displaynameshort="7.62x39 Tracer";
		descriptionshort="715m/s / 2346fps<br />7.55g 116.5gr<br />Flight +++++++<br />Pierce ++++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		ammo="ff7_b_762x39_trcr";
		count=30;
		initSpeed=714;
		mass=10;
	};
	class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F
	{
		displayname="7.62x39 30Rnd (57-N-231PM Yellow) Mag";
		displaynameshort="7.62x39 Tracer";
		descriptionshort="715m/s / 2346fps<br />7.55g 116.5gr<br />Flight +++++++<br />Pierce ++++++<br />Wound +++++";
		lastroundstracer=30;
		tracersevery=1;
		ammo="ff7_b_762x39_trcy";
		count=30;
		initSpeed=714;
		mass=10;
	};
	class ff7_30Rnd_300blk_otm_mag: 30Rnd_556x45_Stanag
	{
		ammo="ff7_b_300blk_otm";
		count=30;
		descriptionshort="670m/s / 2198fps<br />8.01g / 125gr<br />Flight +++++++++<br />Pierce +++++<br />Wound +++++";
		displayname=".300BLK 30Rnd (OTM) Mag";
		author="BI, ACE3, FoxForce7";
		initspeed=625;
		mass=10;
		lastroundstracer=30;
		scope=2;
		tracersevery=1;
		displaynameshort=".300BLK OTM";
	};
	class ff7_30Rnd_300blk_ttsx_mag: 30Rnd_556x45_Stanag
	{
		ammo="ff7_b_300blk_ttsx";
		count=30;
		descriptionshort="745m/s / 2444fps<br />7.45g / 115gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound ++++";
		displayname=".300BLK 30Rnd (TTSX) Mag";
		author="BI, ACE3, FoxForce7";
		initspeed=725;
		mass=10;
		lastroundstracer=3;
		scope=2;
		tracersevery=5;
		displaynameshort=".300BLK TTSX";
	};
	class ff7_30Rnd_300blk_sub_mag: 30Rnd_556x45_Stanag
	{
		ammo="ff7_b_300blk_sub";
		count=30;
		descriptionshort="subsonic<br />320m/s / 1050fps<br />14.26g / 220gr<br />Flight +++++<br />Pierce ++<br />Wound +++++";
		displayname=".300BLK 30Rnd (SUB) Mag";
		author="BI, ACE3, FoxForce7";
		initspeed=325;
		mass=10;
		lastroundstracer=3;
		scope=2;
		tracersevery=5;
		displaynameshort=".300BLK SUB";
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		displayname="6.5x39C 20Rnd (FMJBT) Mag";
		displaynameshort="6.5x39C FMJBT";
		descriptionshort="795m/s / 2608fps<br />8.36g / 129gr<br />Flight ++++++++<br />Pierce +++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_65x39_Case";
		count=20;
		initSpeed=794;
		mass=7;
	};
	class ff7_20rnd_65x39c_trcg_mag: 20Rnd_650x39_Cased_Mag_F
	{
		displayname="6.5x39C 20Rnd (FMJBT Green) Mag";
		displaynameshort="6.5x39C Tracer";
		descriptionshort="795m/s / 2608fps<br />8.36g / 129gr<br />Flight ++++++++<br />Pierce +++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_65x39_Case_Green";
		initSpeed=794;
	};
	class ff7_20rnd_65x39c_trcr_mag: 20Rnd_650x39_Cased_Mag_F
	{
		displayname="6.5x39C 20Rnd (FMJBT Red) Mag";
		displaynameshort="6.5x39C Tracer";
		descriptionshort="795m/s / 2608fps<br />8.36g / 129gr<br />Flight ++++++++<br />Pierce +++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="ff7_b_65x39c_trcr";
		initSpeed=794;
	};
	class ff7_20rnd_65x39c_trcy_mag: 20Rnd_650x39_Cased_Mag_F
	{
		displayname="6.5x39C 20Rnd (FMJBT Yellow) Mag";
		displaynameshort="6.5x39C Tracer";
		descriptionshort="795m/s / 2608fps<br />8.36g / 129gr<br />Flight ++++++++<br />Pierce +++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="B_65x39_Case_Yellow";
		initSpeed=794;
	};
	class ff7_20rnd_65x39c_trci_mag: 20Rnd_650x39_Cased_Mag_F
	{
		displayname="6.5x39C 20Rnd (FMJBT IR) Mag";
		displaynameshort="6.5x39C Tracer";
		descriptionshort="795m/s / 2608fps<br />8.36g / 129gr<br />Flight ++++++++<br />Pierce +++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		ammo="ACE_65_Creedmor_Ball";
		initSpeed=794;
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
		displayname="7.62x51 20Rnd (M80A1) Mag";
		displaynameshort="7.62x51 M80A1";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=819;
	};
	class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (M80A1 Green) Mag";
		displaynameshort="7.62x51 Tracer";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=11;
		initSpeed=819;
		lastroundstracer=20;
		tracersevery=1;
		ammo="B_762x51_Tracer_Green";
	};
	class ff7_20rnd_762x51_trcr_mag: ACE_20Rnd_762x51_Mag_Tracer
	{
		displayname="7.62x51 20Rnd (M80A1 Red) Mag";
		displaynameshort="7.62x51 Tracer";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=11;
		initSpeed=819;
		lastroundstracer=20;
		tracersevery=1;
		ammo="B_762x51_Tracer_Red";
	};
	class ff7_20rnd_762x51_trcy_mag: ACE_20Rnd_762x51_Mag_Tracer
	{
		displayname="7.62x51 20Rnd (M80A1 Yellow Mag";
		displaynameshort="7.62x51 Tracer";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=11;
		initSpeed=819;
		lastroundstracer=20;
		tracersevery=1;
		ammo="B_762x51_Tracer_Yellow";
	};
	class ACE_20Rnd_762x51_Mag_Tracer_Dim: ACE_20Rnd_762x51_Mag_Tracer
	{
		displayname="7.62x51 20Rnd (M80A1 IR) Mag";
		displaynameshort="7.62x51 Tracer";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		mass=11;
		initSpeed=819;
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (M118LR) Mag";
		displaynameshort="7.62x51 M118LR";
		descriptionshort="VeryLowDrag<br />805m/s / 2641fps<br />11.15g / 172gr<br />Flight +++++++++<br />Pierce +++<br />Wound ++++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=789;
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (M993) Mag";
		displaynameshort="7.62x51 M993";
		descriptionshort="910m/s / 2986fps<br />8.23g / 127gr<br />Flight ++++++++<br />Pierce +++++++++<br />Wound +++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=909;
	};
	class ACE_20Rnd_762x51_Mk316_Mod_Mag: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (Mk316) Mag";
		displaynameshort="7.62x51 Mk316";
		descriptionshort="VeryLowDrag<br />790m/s / 2592fps<br />11.34g / 175gr<br />Flight +++++++++<br />Pierce ++++<br />Wound ++++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=789;
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (Mk319) Mag";
		displaynameshort="7.62x51 Mk319";
		descriptionshort="895m/s / 2936fps<br />8.42g / 130gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=894;
	};
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (SUB) Mag";
		displaynameshort="7.62x51 SUB";
		descriptionshort="subsonic<br />320m/s / 1050fps<br />12.96g / 200gr<br />Flight +++++<br />Pierce +++<br />Wound ++++++";
		lastroundstracer=3;
		tracersevery=5;
		mass=11;
		initSpeed=319;
	};
	class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag
	{
		initSpeed=833;
		scope=1;
	};
	class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_762x51_Mag
	{
		ammo="ACE_762x51_Ball_M118LR";
		initSpeed=780;
		scope=1;
	};
	class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		ammo="ACE_762x51_Ball_Mk316_Mod_0";
		initSpeed=790;
		scope=1;
	};
	class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_762x51_Mag
	{
		ammo="ACE_762x51_Ball_Mk319_Mod_0";
		initSpeed=900;
		scope=1;
	};
	class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_762x51_Mag
	{
		ammo="ACE_762x51_Ball_M993_AP";
		initSpeed=920;
		scope=1;
	};
	class 150Rnd_762x51_Box: CA_Magazine
	{
		displayname="7.62x51 150Rnd (M80A1) Box";
		displaynameshort="7.62x51 M80A1";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=5;
		tracersevery=5;
		initSpeed=819;
	};
	class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
	{
		displayname="7.62x51 150Rnd (M80A1 Tracer) Box";
		displaynameshort="7.62x51 Tracer";
		descriptionshort="820m/s / 2690fps<br />9.46g / 156gr<br />Flight +++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=150;
		tracersevery=1;
		initSpeed=819;
	};
	class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag
	{
		displayname="7.62x54R 10Rnd (7N1) Mag";
		displaynameshort="7.62x54R 7N1";
		descriptionshort="825m/s / 2707fps<br />9.80g / 151gr<br />Flight +++++++++<br />Pierce ++++++<br />Wound +++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=8;
		initSpeed=824;
	};
	class ff7_10rnd_762x54r_7n14_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (7N14) Mag";
		displaynameshort="7.62x54R 7N14";
		descriptionshort="865m/s / 2838fps<br />9.40g / 145gr<br />Flight ++++++++<br />Pierce +++++++++<br />Wound +++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=8;
		initSpeed=864;
		ammo="ff7_b_762x54r_7n14";
	};
	class ff7_10rnd_762x54r_sub_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (SUB) Mag";
		displaynameshort="7.62x54R SUB";
		descriptionshort="subsonic<br />320m/s / 1050fps<br />12.64g / 195gr<br />Flight +++++<br />Pierce +++<br />Wound ++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=8;
		initSpeed=319;
		ammo="ff7_b_762x54r_sub";
	};
	class ff7_10rnd_762x54r_trcg_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (7T2 Green) Mag";
		displaynameshort="7.62x54R Tracer";
		descriptionshort="800m/s / 2625fps<br />9.66g / 149gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=10;
		tracersevery=1;
		ammo="B_762x54_Tracer_Green";
		initSpeed=799;
	};
	class ff7_10rnd_762x54r_trcr_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (7T2 Red) Mag";
		displaynameshort="7.62x54R Tracer";
		descriptionshort="800m/s / 2625fps<br />9.66g / 149gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=10;
		tracersevery=1;
		ammo="B_762x54_Tracer_Red";
		initSpeed=799;
	};
	class ff7_10rnd_762x54r_trcy_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (7T2 Yellow) Mag";
		displaynameshort="7.62x54R Tracer";
		descriptionshort="800m/s / 2625fps<br />9.66g / 149gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=10;
		tracersevery=1;
		ammo="B_762x54_Tracer_Yellow";
		initSpeed=799;
	};
	class ACE_10Rnd_762x54_Tracer_mag: 10Rnd_762x54_Mag
	{
		displayname="7.62x54R 10Rnd (7T2 IR) Mag";
		displaynameshort="7.62x54R Tracer";
		descriptionshort="800m/s / 2625fps<br />9.66g / 149gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++";
		lastroundstracer=10;
		tracersevery=1;
		ammo="ACE_762x54_Ball_7T2";
		initSpeed=799;
	};
	class 150Rnd_762x54_Box: 150Rnd_762x51_Box
	{
		initSpeed=778;
		scope=1;
	};
	class 10Rnd_338_Mag: CA_Magazine
	{
		displayname=".338 10Rnd (FMJ) Mag";
		displaynameshort=".338 FMJ";
		descriptionshort="880m/s / 2887fps<br />16.20g / 250gr<br />Flight +++++++<br />Pierce +++++++<br />Wound ++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=13;
		initSpeed=879;
		ammo="B_338_Ball";
	};
	class 10Rnd_338_NM_Mag: 10Rnd_338_Mag
	{
		displayname=".338 10Rnd (FMJBT) Mag";
		displaynameshort=".338 FMJBT";
		descriptionshort="VeryLowDrag<br />760m/s / 2493fps<br />19.44g / 300gr<br />Flight +++++++++<br />Pierce +++++<br />Wound +++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=13;
		initSpeed=759;
		ammo="B_338_NM_Ball";
	};
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		displayname=".338 10Rnd (HPBT) Mag";
		displaynameshort=".338 HPBT";
		descriptionshort="VeryLowDrag<br />825m/s / 2707fps<br />19.44g / 300gr<br />Flight ++++++++<br />Pierce ++++<br />Wound ++++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=13;
		initSpeed=824;
	};
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		displayname=".338 10Rnd (API526) Mag";
		displaynameshort=".338 API526";
		descriptionshort="895m/s / 2936fps<br />19.39g / 299gr<br />Flight ++++++<br />Pierce +++++++++<br />Wound +++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=13;
		initSpeed=894;
	};
	class 130Rnd_338_Mag: CA_Magazine
	{
		displayname=".338 130Rnd (FMJ) Box";
		displaynameshort=".338 FMJ";
		descriptionshort="880m/s / 2887fps<br />16.20g / 250gr<br />Flight +++++++<br />Pierce +++++++<br />Wound ++++++";
		lastroundstracer=5;
		tracersevery=3;
		initSpeed=879;
		ammo="B_338_Ball";
	};
	class ff7_130rnd_338_api_box: 130Rnd_338_Mag
	{
		displayname=".338 130Rnd (API526) Box";
		displaynameshort=".338 API526";
		descriptionshort="895m/s / 2936fps<br />19.39g / 299gr<br />Flight ++++++<br />Pierce +++++++++<br />Wound +++++";
		lastroundstracer=5;
		tracersevery=3;
		initSpeed=894;
		ammo="ACE_338_Ball_API526";
	};
	class 150Rnd_93x64_Mag: CA_Magazine
	{
		displayname="9.3x64 150Rnd (9SN) Mag";
		displaynameshort="9.3x64 9SN";
		descriptionshort="785m/s / 2576fps<br />14.91g / 230gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound ++++++";
		lastroundstracer=5;
		tracersevery=3;
		initSpeed=784;
	};
	class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
	{
		displayname="9.3x64 10Rnd (9SN) Mag";
		displaynameshort="9.3x64 9SN";
		descriptionshort="785m/s / 2576fps<br />14.91g / 230gr<br />Flight ++++++++<br />Pierce +++++++<br />Wound ++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=15;
		initSpeed=784;
	};
	class ff7_10rnd_93x64_hpbt_mag: 10Rnd_93x64_DMR_05_Mag
	{
		displayname="9.3x64 10Rnd (HPBT) Mag";
		displaynameshort="9.3x64 HPBT";
		descriptionshort="740m/s / 2428fps<br />16.59g / 256gr<br />Flight +++++++++<br />Pierce +++<br />Wound ++++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=15;
		initSpeed=784;
		ammo="ff7_b_93x64_hpbt";
	};
	class 10Rnd_127x54_Mag: CA_Magazine
	{
		displayname="12.7x54 10Rnd (SUB) Mag";
		displaynameshort="12.7x54 SUB";
		descriptionshort="315m/s / 1033fps<br />48.62g / 750gr<br />Flight +++++<br />Pierce ++++++<br />Wound +++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=12;
		initSpeed=314;
	};
	class 7Rnd_408_Mag: CA_Magazine
	{
		displayname=".408CheyTac 7Rnd (VLD) Mag";
		displaynameshort=".408CheyTac VLD";
		descriptionshort="VeryLowDrag<br />910m/s / 2986fps<br />27.15g / 419gr<br />Flight +++++++++<br />Pierce ++++++<br />Wound +++++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=14;
		initSpeed=909;
	};
	class ACE_7Rnd_408_305gr_Mag: 7Rnd_408_Mag
	{
		displayname=".408CheyTac 7Rnd (BDR) Mag";
		displaynameshort=".408CheyTac BDR";
		descriptionshort="BattlefieldDominationRound<br />1065m/s / 3494fps<br />19.76g / 305gr<br />Flight +++++++<br />Pierce ++++++++<br />Wound +++++++";
		lastroundstracer=2;
		tracersevery=0;
		mass=14;
		ammo="ACE_408_Ball";
		initSpeed=1064;
	};
	class 5Rnd_127x108_Mag: CA_Magazine
	{
		initSpeed=820;
		scope=1;
	};
	class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
	{
		initSpeed=890;
		scope=1;
	};
	class ACE_5Rnd_127x99_Mag: 5Rnd_127x108_Mag
	{
		displayname=".50BMG 5Rnd (HPBT) Mag";
		displaynameshort=".50BMG FMJBT";
		descriptionshort="880m/s / 2887fps<br />41.93g / 647gr<br />Flight ++++++++<br />Pierce ++++++<br />Wound ++++++++++";
		lastroundstracer=1;
		tracersevery=0;
		ammo="B_127x99_Ball";
		initSpeed=879;
		mass=15;
	};
	class ACE_5Rnd_127x99_API_Mag: 5Rnd_127x108_Mag
	{
		displayname=".50BMG 5Rnd (API) Mag";
		displaynameshort=".50BMG API";
		descriptionshort="875m/s / 2871fps<br />41.99g 648gr<br />Flight ++++++++<br />Pierce ++++++++++<br />Wound +++++++";
		lastroundstracer=1;
		tracersevery=0;
		ammo="ACE_127x99_API";
		initSpeed=874;
		mass=15;
	};
	class ACE_5Rnd_127x99_AMAX_Mag: 5Rnd_127x108_Mag
	{
		displayname=".50BMG 5Rnd (AMAX) Mag";
		displaynameshort=".50BMG AMAX";
		descriptionshort="VeryLowDrag<br />855m/s / 2805fps<br />48.60g / 750gr<br />Flight ++++++++++<br />Pierce ++++++++<br />Wound +++++++++";
		lastroundstracer=1;
		tracersevery=0;
		ammo="ACE_127x99_Ball_AMAX";
		initSpeed=854;
		mass=15;
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		displayName=".50BW 7Rnd (Ball) Mag";
		displaynameshort=".50BW Ball";
		descriptionshort="385m/s / 1236fps<br />21.71g / 335gr<br />Flight +++++<br />Pierce ++++++++<br />Wound ++++++++";
		ammo="B_50BW_Ball_F";
		count=7;
		initSpeed=384;
		tracersEvery=1;
		lastRoundsTracer=7;
		mass=10;
	};
	class ff7_7rnd_50bw_flr_mag: 10Rnd_50BW_Mag_F
	{
		displayName=".50BW 7Rnd (Flare) Mag";
		displaynameshort=".50BW Flare";
		descriptionShort="White Flare <br /> 25s lifetime <br /> its like a tiny sun :o";
		ammo="ff7_b_flr";
		count=7;
		initSpeed=133;
		tracersEvery=1;
		lastRoundsTracer=7;
		mass=10;
	};
	class ff7_20rnd_65x39_slap_mag: 20Rnd_650x39_Cased_Mag_F
	{
		displayname="6.5x39C 20Rnd (SLAP) Mag";
		displaynameshort="6.5x39C SLAP";
		descriptionshort="SabotedLightArmorPenetrator<br />1175m/s / 3855fps<br />3.18g / 49gr<br />Flight ++++++++++<br />Pierce ++++++++++<br />Wound ++";
		lastroundstracer=3;
		tracersevery=2;
		ammo="ff7_b_65x39_slap";
		count=20;
		initSpeed=1174;
		mass=7;
	};
	class ff7_200rnd_65x39_slap_box: ff7_200rnd_65x39cl_ball_box
	{
		displayname="6.5x39CL 200Rnd (SLAP) Box";
		displaynameshort="6.5x39CL SLAP";
		descriptionshort="SabotedLightArmorPenetrator<br />1175m/s / 3855fps<br />3.18g / 49gr<br />Flight ++++++++++<br />Pierce ++++++++++<br />Wound ++";
		lastroundstracer=3;
		tracersevery=2;
		ammo="ff7_b_65x39_slap";
		initSpeed=1174;
		mass=40;
		picture="\A3\weapons_f\data\ui\m_200rnd_65x39_ca.paa";
	};
	class ff7_20rnd_762x51_slap_mag: 20Rnd_762x51_Mag
	{
		displayname="7.62x51 20Rnd (M948/SLAP) Mag";
		displaynameshort="7.62x51 SLAP";
		descriptionshort="SabotedLightArmorPenetrator<br />1245m/s / 4085fps<br />4.86g / 75gr<br />Flight ++++++++++<br />Pierce ++++++++++<br />Wound +++";
		lastroundstracer=3;
		tracersevery=2;
		mass=11;
		initSpeed=1244;
		ammo="ff7_b_762x51_slap";
	};
	class ff7_150rnd_762x51_slap_box: 150Rnd_762x51_Box
	{
		displayname="7.62x51 150Rnd (M948/SLAP) Box";
		displaynameshort="7.62x51 SLAP";
		descriptionshort="SabotedLightArmorPenetrator<br />1245m/s / 4085fps<br />4.86g / 75gr<br />Flight ++++++++++<br />Pierce ++++++++++<br />Wound +++";
		lastroundstracer=5;
		tracersevery=2;
		initSpeed=1244;
		ammo="ff7_b_762x51_slap";
	};
};
class cfgMods
{
	author="FoxForce7";
	timepacked="1531163588";
};
