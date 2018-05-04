
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
	class ff7_blank: B_762x51_Ball	//Blank
	{
		hit = 0;
		typicalspeed = 0;
		airFriction = -0.001;	//.0015
		caliber = 0;
		deflecting = 0;
		cartridge = "FxCartridge_762";
		//tracerendtime = 2;
		//tracerscale = 1;
		//tracerstarttime = 0.05;
		visiblefire = 5;
		audiblefire = 8;
		airLock = 1;//
		//model="\A3\Weapons_f\Data\bullettracer\tracer_white";
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		ACE_caliber = 0;
		ACE_bulletLength = 0;
		ACE_bulletMass = 0;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
		ACE_ballisticCoefficients[] = {0.};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {0,0,0};
		ACE_barrelLengths[] = {254.0,355.6,533.4};
	};
	
//////////////////////////////////////////
};
