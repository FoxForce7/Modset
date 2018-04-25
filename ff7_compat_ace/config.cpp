class CfgPatches
{
	class ff7_compat_ace
	{
		name="FoxForce7ACE3 Compatibility";
		version=1.1;
		units[]={};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
			"ff7_compat_core",
			"ace_smallarms",
			"ace_ballistics"
		};
		author="FoxForce7";
		authors[]=
		{
			"csathdfw",
			"Whigital"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 30Rnd_556x45_Stanag: CA_Magazine
	{
	};
	class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
	{
		displayName="5.56 mm 30rnd Tracer (Red) Mag";
		displaynameshort="5.56mm";
	};
	class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag
	{
		displayName="5.56 mm 30rnd Tracer (Green) Mag";
		displaynameshort="5.56mm";
	};
	class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag
	{
		displayName="5.56 mm 30rnd Tracer (Yellow) Mag";
		displaynameshort="5.56mm";
	};
	class ACE_30Rnd_556x45_Stanag_M995_AP_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort="TypicalSpeed: 870m/s <br />BulletMass: 4.02g <br />BulletType: Penetrator";
		displayname="5.56x45 30Rnd (EPR/M995) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="5.56x45 EPR";
	};
	class ACE_30Rnd_556x45_Stanag_Mk262_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort="TypicalSpeed: 835m/s <br />BulletMass: 4.99g <br />BulletType: Expander";
		displayname="5.56x45 30Rnd (SPR/Mk262) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="5.56x45 SPR";
	};
	class ACE_30Rnd_556x45_Stanag_Mk318_mag: 30Rnd_556x45_Stanag
	{
		descriptionshort="TypicalSpeed: 885m/s <br />BulletMass: 4.02g <br />BulletType: Barrier";
		displayname="5.56x45 30Rnd (SOST/Mk318) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="5.56x45 SOST";
	};
	class 20Rnd_762x51_Mag: CA_Magazine
	{
	};
	class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
	{
		descriptionshort="TypicalSpeed: 320m/s <br />BulletMass: 12.96g <br />BulletType: Expander";
		displayname="7.62x51 20Rnd (SUB) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="7.62x51 SUB";
	};
	class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort="TypicalSpeed: 790m/s <br />BulletMass: 11.34g <br />BulletType: Expander";
		displayname="7.62x51 20Rnd (M118LR) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="7.62x51 M118LR";
	};
	class ACE_20Rnd_762x51_Mk316_Mod_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort="TypicalSpeed: 790m/s <br />BulletMass: 11.34g <br />BulletType: Expander";
		displayname="7.62x51 20Rnd (Mk316) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="7.62x51 Mk316";
	};
	class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort="TypicalSpeed: 900m/s <br />BulletMass: 8.42g <br />BulletType: Barrier";
		displayname="7.62x51 20Rnd (Mk319) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="7.62x51 Mk319";
	};
	class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
	{
		descriptionshort="TypicalSpeed: 910m/s <br />BulletMass: 8.20g <br />BulletType: Penetrator";
		displayname="7.62x51 20Rnd (M993) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort="7.62x51 M993";
	};
	class 10Rnd_338_Mag;
	class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
	{
		descriptionshort="TypicalSpeed: 800m/s <br />BulletMass: 19.44g <br />BulletType: Expander";
		displayname=".338 10Rnd (HPBT) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort=".338 (HPBT)";
	};
	class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
	{
		descriptionshort="TypicalSpeed: 880m/s <br />BulletMass: 16.39g <br />BulletType: Penetrator";
		displayname=".338 10Rnd (API526) Mag";
		author="BI, ACE3, FoxForce7";
		displaynameshort=".338 (API526)";
	};
};
