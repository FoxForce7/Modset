/*
replace:






*/
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a

class ff7_russia_army_O_Soldier_base_F:   I_C_Soldier_base_F {
	scope=0;
	side=0;
	faction="ff7_O_russia_army";
	identityTypes[] = {"LanguageGRE_F","Head_Euro","NoGlasses"};
	uniformClass = "U_I_C_Soldier_Camo_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	threat[] = {1, 0.2, 0.2};
	backpack = "";	
	icon = "iconMan";
	headgearList[] = {"",1,"H_PASGT_basic_black_F",90};
	weapons[] = {
		arifle_AK12_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AK12_F, 
		Throw, 
		Put
	};
	Items[] = {
		FirstAidKit
	};
	RespawnItems[] = {
		FirstAidKit
	};

	magazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		H_PASGT_basic_black_F,
		V_PlateCarrierIA1_dgtl, 
	};
	respawnLinkedItems[] = {
		H_PASGT_basic_black_F,
		V_PlateCarrierIA1_dgtl,
	};
};
class ff7_O_russia_army_soldier_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";
	_generalMacro = "ff7_O_russia_army_soldier_F";
};
class ff7_O_russia_army_soldier_LAT_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (AT)";
	_generalMacro = "ff7_O_russia_army_soldier_LAT_F";
	role = "MissileSpecialist";
	threat[] = {1, 1, 0.2};	
	icon = "iconManAT";
	backpack = "B_ff7_rpg7_ocamo";
	weapons[] = {
		arifle_AK12_F, 
		launch_RPG7_F	,	
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AK12_F, 
		launch_RPG7_F	,	
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		RPG7_F,		
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		RPG7_F,		
		mag_2(HandGrenade),
	};
};
class ff7_O_russia_army_soldier_SL_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	_generalMacro = "ff7_O_russia_army_soldier_SL_F";
	icon = "iconManLeader";
	linkedItems[] = {
		H_MilCap_blue,
		V_PlateCarrierIA1_dgtl,

	};
	respawnLinkedItems[] = {
		H_MilCap_blue,
		V_PlateCarrierIA1_dgtl,
		V_PlateCarrierIA1_dgtl
	};
};
class ff7_O_russia_army_soldier_AR_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	_generalMacro = "ff7_O_russia_army_soldier_AR_F";
	role = "MachineGunner";
	icon = "iconManMG";
	weapons[] = {
		LMG_Zafir_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		LMG_Zafir_F, 
		Throw, 
		Put
	};
	magazines[] = {
		mag_6(150Rnd_762x54_Box_Tracer),

	};
	respawnMagazines[] = {
		mag_6(150Rnd_762x54_Box_Tracer),

	};
};
class ff7_O_russia_army_soldier_A_F: ff7_russia_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Ammobearer";
	_generalMacro = "ff7_O_russia_army_soldier_A_F";
	backpack = "B_ff7_russia_ammo_oli";	
	magazines[] = {
		mag_6(150Rnd_762x54_Box_Tracer),
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_10(30Rnd_762x39_Mag_green_F),

	};
	respawnMagazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_6(150Rnd_762x54_Box_Tracer),

	};
};
class ff7_O_russia_army_medic_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_medic_cbr_F";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Combat Life Saver";
	_generalMacro = "ff7_O_russia_army_medic_F";
	role = "CombatLifeSaver";
	attendant = 1;
	icon = "iconManMedic";
};
class ff7_O_russia_army_soldier_TL_F: ff7_russia_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	_generalMacro = "ff7_O_russia_army_soldier_TL_F";
	icon = "iconManLeader";
};
class ff7_O_russia_army_soldier_M_F: ff7_russia_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	_generalMacro = "ff7_O_russia_army_soldier_M_F";
	role = "Marksman";
	weapons[] = {
		srifle_DMR_04_DMS_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_DMR_04_DMS_F,  
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(10Rnd_127x54_Mag),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(10Rnd_127x54_Mag),
		mag_2(HandGrenade),
	};
};
class ff7_O_russia_army_soldier_GL_F: ff7_russia_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	_generalMacro = "ff7_O_russia_army_soldier_GL_F";
	role = "Grenadier";
	threat[] = {1, 0.8, 0.2};
	weapons[] = {
		arifle_AK12_GL_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AK12_GL_F, 
		Throw, 
		Put
	};
	magazines[] = {
		mag_8(30Rnd_762x39_Mag_green_F),
		mag_4(1Rnd_HE_Grenade_shell),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_8(30Rnd_762x39_Mag_green_F),
		mag_4(1Rnd_HE_Grenade_shell),
		mag_2(HandGrenade),
	};
};
class ff7_O_russia_army_engineer_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	_generalMacro = "ff7_O_russia_army_engineer_F";
	role = "Sapper";
	canDeactivateMines = true;
	engineer = true;
	icon = "iconManEngineer";

};
class ff7_O_russia_army_soldier_exp_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Explosive Specialist";
	_generalMacro = "ff7_O_russia_army_soldier_exp_F";
	role = "Sapper";
	canDeactivateMines = true;
	icon = "iconManExplosive";

};
class ff7_O_russia_army_sniper_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Sniper";
	_generalMacro = "ff7_O_russia_army_sniper_F";
	role = "Marksman";
	camouflage = 0.5;
	icon = "iconMan";
	weapons[] = {
		srifle_LRR_LRPS_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_LRR_LRPS_F		Throw, 
		Put
	};
	magazines[] = {
		mag_5(7Rnd_408_Mag),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_5(7Rnd_408_Mag),
		mag_2(HandGrenade),
	};
};
class ff7_O_russia_army_spotter_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Spotter";
	_generalMacro = "ff7_O_russia_army_spotter_F";
	camouflage = 0.5;
};
class ff7_O_russia_army_soldier_AT_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_AT_khk_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AT)";
	_generalMacro = "ff7_O_russia_army_soldier_AT_F";
	role = "MissileSpecialist";
	threat[] = {0.8, 1, 0.2};
	icon = "iconManAT";
	weapons[] = {
		arifle_AK12_F, 
		launch_o_titan_short_F,
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AK12_F, 
		launch_o_titan_short_F,
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_2(Titan_AT),

	};
	respawnMagazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_2(Titan_AT),
	};
};
class ff7_O_russia_army_soldier_AAT_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_AT_khk_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AT)";
	_generalMacro = "ff7_O_russia_army_soldier_AAT_F";
};
class ff7_O_russia_army_soldier_AA_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_AA_khk_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AA)";
	_generalMacro = "ff7_O_russia_army_soldier_AA_F";
	role = "MissileSpecialist";
	threat[] = {0.8, 0.2, 1};
	icon = "iconManAT";
	weapons[] = {
		arifle_AK12_F, 
		launch_o_titan_F,
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AK12_F, 
		launch_o_titan_F,
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_3(Titan_AA),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_762x39_Mag_green_F),
		mag_3(Titan_AA),
	};
};
class ff7_O_russia_army_soldier_AAA_F: ff7_russia_army_O_Soldier_base_F {
	backpack = "B_ff7_AA_khk_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AA)";
	_generalMacro = "ff7_O_russia_army_soldier_AAA_F";
};
class ff7_O_russia_army_helicrew_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Helicopter Crew";
	_generalMacro = "ff7_O_russia_army_helicrew_F";
	role = "Crewman";

	linkedItems[] = {
		H_PilotHelmetHeli_B,
		V_PlateCarrierIA1_dgtl
	};
	respawnLinkedItems[] = {
		H_PilotHelmetHeli_B,
		V_PlateCarrierIA1_dgtl

	};
};
class ff7_O_russia_army_officer_F: ff7_russia_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	_generalMacro = "ff7_O_russia_army_officer_F";
	icon = "iconManOfficer";
};

