class CfgRespawnInventory
{
	#include "AbstractInventory.sqf" 
	
	/*
		Riflemen
	*/

	class Rifleman : AbstractInventory{
		displayName = "Rifleman";
		role = "Rifleman";
		weapons[] = {
			"arifle_MX_F",
			"Binocular"
		};
		magazines[] = {
			"30Rnd_65x39_caseless_mag"
		};
	};
	
	class Grenadier : Rifleman{
		displayName = "Grenadier";
		weapons[] = {
			"arifle_MX_GL_F",
			"Binocular"
		};
		magazines[] = {
			"30Rnd_65x39_caseless_mag",

			"3Rnd_HE_Grenade_shell",

			"UGL_FlareCIR_F",
			"UGL_FlareYellow_F",

			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};

	class AutoRifleman : Rifleman{
		displayName = "Auto-Rifleman";
		weapons[] = {
			"arifle_MX_SW_F",
			"Binocular"
		};
		magazines[] = {
			"100Rnd_65x39_caseless_mag"
		};
	};

	/*
		Officers
	*/
	class Officer : AbstractInventory{
		displayName = "Officer";
		role = "Officer";
		weapons[] = {
			"arifle_MX_F",
			"Binocular"
		};		
		magazines[] = {
			"30Rnd_65x39_caseless_mag"
		};
	};

	/*
		DMR RECON
	*/
	class DMRRecon : AbstractInventory{
		role = "DMRRecon";
		weapons[] = {
			"arifle_MXM_Black_F",
			"Binocular"
		};
		magazines[] = {
			"30Rnd_65x39_caseless_mag"
		};
	};
	class DMR : DMRRecon{
		displayName = "Designated Marksman";
	};
	class Sniper : DMRRecon{
		displayName = "Sniper";
		weapons[] = {
			"srifle_LRR_F",
			"Binocular"
		};
		magazines[] = {
			"7Rnd_408_Mag"
		};
	};
	class Spotter : DMRRecon{
		displayName = "Spotter";
		weapons[] = {
			"arifle_MXM_Black_F",
			"Binocular"
		};
		magazines[] = {};
	};

	/*
		Support
	*/
	class Support : AbstractInventory{
		role = "Support";
		backpack = "B_Kitbag_rgr";
		magazines[] = {};
	};

	class Medic : Support{
		displayName = "Medic";
	};

	class Engineer  : Support{
		displayName = "Engineer";
	};


};