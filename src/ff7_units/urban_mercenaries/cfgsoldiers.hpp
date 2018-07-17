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

class ff7_urban_mercenaries_army_O_Soldier_base_F:  C_man_w_worker_F {
	
	scope=0;
	side=2;
	modelsides[] = {3,2,1,0};
	faction="ff7_I_urban_mercenaries";
	identityTypes[] = {"LanguageENG_F","Head_Euro","NoGlasses"};
	uniformClass = "U_C_WorkerCoveralls";
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
	headgearList[] = {"",1,"H_Cap_blk",90};
	weapons[] = {
		SMG_05_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		SMG_05_F, 
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
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		H_Cap_blk,
		V_Rangemaster_belt, 
	};
	respawnLinkedItems[] = {
		H_Cap_blk,
		V_Rangemaster_belt,
	};
};
class ff7_I_urban_mercenaries_soldier_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_F";
};
class ff7_I_urban_mercenaries_soldier_LAT_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (AT)";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_LAT_F";
	role = "MissileSpecialist";
	threat[] = {1, 1, 0.2};	
	icon = "iconManAT";
	backpack = "B_ff7_rpg32_sgg";
	weapons[] = {
		SMG_05_F, 
		launch_RPG32_F	,	
		Throw, 
		Put
	};
	respawnWeapons[] = {
		SMG_05_F, 
		launch_RPG32_F	,	
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		RPG32_F,		
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		RPG32_F,		
		mag_2(HandGrenade),
	};
};
class ff7_I_urban_mercenaries_soldier_SL_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_SL_F";
	icon = "iconManLeader";
	linkedItems[] = {
		H_Cap_tan,
		V_Rangemaster_belt,

	};
	respawnLinkedItems[] = {
		H_Cap_tan,
		V_Rangemaster_belt,

	};
};
class ff7_I_urban_mercenaries_soldier_AR_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_AR_F";
	role = "MachineGunner";
	icon = "iconManMG";
	weapons[] = {
		lmg_Mk200_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		lmg_Mk200_F, 
		Throw, 
		Put
	};
	magazines[] = {
		mag_6(200Rnd_65x39_cased_Box),

	};
	respawnMagazines[] = {
		mag_6(200Rnd_65x39_cased_Box),

	};
};
class ff7_I_urban_mercenaries_soldier_A_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Ammobearer";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_A_F";
	backpack = "B_ff7_urban_mercenaries_ammo_oucamo";	
	magazines[] = {
		mag_6(200Rnd_65x39_cased_Box),
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),

	};
	respawnMagazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_6(200Rnd_65x39_cased_Box),

	};
};
class ff7_I_urban_mercenaries_medic_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_medic_oucamo_F";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Combat Life Saver";
	_generalMacro = "ff7_I_urban_mercenaries_medic_F";
	role = "CombatLifeSaver";
	attendant = 1;
	icon = "iconManMedic";
};
class ff7_I_urban_mercenaries_soldier_TL_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_TL_F";
	icon = "iconManLeader";
};
class ff7_I_urban_mercenaries_soldier_M_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_M_F";
	role = "Marksman";
	weapons[] = {
		srifle_DMR_03_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_DMR_03_F,  
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(20Rnd_762x51_Mag),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(20Rnd_762x51_Mag),
		mag_2(HandGrenade),
	};
};
class ff7_I_urban_mercenaries_soldier_GL_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_GL_F";
	role = "Grenadier";
	threat[] = {1, 0.8, 0.2};
	weapons[] = {
		arifle_Mk20_GL_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_Mk20_GL_F, 
		Throw, 
		Put
	};
	magazines[] = {
		mag_8(30Rnd_556x45_Stanag_green),
		mag_8(1Rnd_HE_Grenade_shell),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_8(30Rnd_556x45_Stanag_green),
		mag_8(1Rnd_HE_Grenade_shell),
		mag_2(HandGrenade),
	};
};
class ff7_I_urban_mercenaries_engineer_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	_generalMacro = "ff7_I_urban_mercenaries_engineer_F";
	role = "Sapper";
	canDeactivateMines = true;
	engineer = true;
	icon = "iconManEngineer";

};
class ff7_I_urban_mercenaries_soldier_exp_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Explosive Specialist";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_exp_F";
	role = "Sapper";
	canDeactivateMines = true;
	icon = "iconManExplosive";

};
class ff7_I_urban_mercenaries_sniper_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Sniper";
	_generalMacro = "ff7_I_urban_mercenaries_sniper_F";
	role = "Marksman";
	camouflage = 0.5;
	icon = "iconMan";
	weapons[] = {
		srifle_GM6_LRPS_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_GM6_LRPS_F, 
		Throw, 
		Put
	};
	magazines[] = {
		mag_5(5Rnd_127x108_Mag),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_5(5Rnd_127x108_Mag),
		mag_2(HandGrenade),
	};
};
class ff7_I_urban_mercenaries_spotter_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Spotter";
	_generalMacro = "ff7_I_urban_mercenaries_spotter_F";
	camouflage = 0.5;
};
class ff7_I_urban_mercenaries_soldier_AT_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_AT_oucamo_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AT)";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_AT_F";
	role = "MissileSpecialist";
	threat[] = {0.8, 1, 0.2};
	icon = "iconManAT";
	weapons[] = {
		SMG_05_F, 
		launch_o_titan_short_F,
		Throw, 
		Put
	};
	respawnWeapons[] = {
		SMG_05_F, 
		launch_o_titan_short_F,
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_2(Titan_AT),

	};
	respawnMagazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_2(Titan_AT),
	};
};
class ff7_I_urban_mercenaries_soldier_AAT_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_AT_oucamo_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AT)";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_AAT_F";
};
class ff7_I_urban_mercenaries_soldier_AA_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_AA_oucamo_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AA)";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_AA_F";
	role = "MissileSpecialist";
	threat[] = {0.8, 0.2, 1};
	icon = "iconManAT";
	weapons[] = {
		SMG_05_F, 
		launch_o_titan_F,
		Throw, 
		Put
	};
	respawnWeapons[] = {
		SMG_05_F, 
		launch_o_titan_F,
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_3(Titan_AA),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
		mag_3(Titan_AA),
	};
};
class ff7_I_urban_mercenaries_soldier_AAA_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	backpack = "B_ff7_AA_oucamo_F";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AA)";
	_generalMacro = "ff7_I_urban_mercenaries_soldier_AAA_F";
};
class ff7_I_urban_mercenaries_helicrew_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Helicopter Crew";
	_generalMacro = "ff7_I_urban_mercenaries_helicrew_F";
	role = "Crewman";

	linkedItems[] = {
		H_PilotHelmetHeli_B,
		V_Rangemaster_belt
	};
	respawnLinkedItems[] = {
		H_PilotHelmetHeli_B,
		V_Rangemaster_belt

	};
};
class ff7_I_urban_mercenaries_officer_F: ff7_urban_mercenaries_army_O_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	_generalMacro = "ff7_I_urban_mercenaries_officer_F";
	icon = "iconManOfficer";
};

