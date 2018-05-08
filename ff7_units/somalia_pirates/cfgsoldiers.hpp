/*
replace:



arifle_AK12_GL_F gl





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

class ff7_I_somalia_pirates_Soldier_base_F: B_Soldier_base_F {
	scope=0;
	side=2;
	faction="ff7_I_somalia_pirates";
	identityTypes[] = {"LanguageFRE_F","Head_African","NoGlasses"};
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
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
	weapons[] = {
		arifle_AKS_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AKS_F, 
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
		mag_10(30Rnd_545x39_Mag_green_F),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_545x39_Mag_green_F),
		mag_6(SmokeShell),
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		H_Shemag_olive,
		V_LegStrapBag_olive_F, 
	};
	respawnLinkedItems[] = {
		H_Shemag_olive,
		V_LegStrapBag_olive_F,
	};
};
class ff7_I_somalia_pirates_soldier_F: ff7_I_somalia_pirates_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";
	_generalMacro = "ff7_I_somalia_pirates_soldier_F";
};
class ff7_I_somalia_pirates_soldier_LAT_F: ff7_I_somalia_pirates_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (AT)";
	_generalMacro = "ff7_I_somalia_pirates_soldier_LAT_F";
	role = "MissileSpecialist";
	threat[] = {1, 1, 0.2};	
	icon = "iconManAT";
	backpack = "B_ff7_rpg7_oli";
	weapons[] = {
		arifle_AKS_F, 
		launch_RPG7_F	,	
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_AKS_F, 
		launch_RPG7_F	,	
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(30Rnd_545x39_Mag_green_F),
		RPG7_F,		
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_545x39_Mag_green_F),
		RPG7_F,		
		mag_2(HandGrenade),
	};
};
class ff7_I_somalia_pirates_soldier_SL_F: ff7_I_somalia_pirates_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	_generalMacro = "ff7_I_somalia_pirates_soldier_SL_F";
	icon = "iconManLeader";
	linkedItems[] = {
		H_ShemagOpen_tan,
		V_LegStrapBag_olive_F,

	};
	respawnLinkedItems[] = {
		H_ShemagOpen_tan,
		V_LegStrapBag_olive_F,

	};
};
class ff7_I_somalia_pirates_soldier_AR_F: ff7_I_somalia_pirates_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	_generalMacro = "ff7_I_somalia_pirates_soldier_AR_F";
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
class ff7_I_somalia_pirates_soldier_A_F: ff7_I_somalia_pirates_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Ammobearer";
	_generalMacro = "ff7_I_somalia_pirates_soldier_A_F";
	backpack = "B_ff7_somalia_ammo_oli";	
	magazines[] = {
		mag_6(150Rnd_762x54_Box_Tracer),
		mag_10(30Rnd_545x39_Mag_green_F),
		mag_10(30Rnd_545x39_Mag_green_F),

	};
	respawnMagazines[] = {
		mag_10(30Rnd_545x39_Mag_green_F),
		mag_10(30Rnd_545x39_Mag_green_F),
		mag_6(150Rnd_762x54_Box_Tracer),

	};
};
class ff7_I_somalia_pirates_medic_F: ff7_I_somalia_pirates_Soldier_base_F {
	backpack = "B_ff7_medic_oli_F";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Combat Life Saver";
	_generalMacro = "ff7_I_somalia_pirates_medic_F";
	role = "CombatLifeSaver";
	attendant = 1;
	icon = "iconManMedic";
};
class ff7_I_somalia_pirates_soldier_TL_F: ff7_I_somalia_pirates_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	_generalMacro = "ff7_I_somalia_pirates_soldier_TL_F";
	icon = "iconManLeader";
};
class ff7_I_somalia_pirates_soldier_M_F: ff7_I_somalia_pirates_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	_generalMacro = "ff7_I_somalia_pirates_soldier_M_F";
	role = "Marksman";
	weapons[] = {
		srifle_DMR_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_DMR_01_F,  
		Throw, 
		Put
	};
	magazines[] = {
		mag_10(10Rnd_762x54_Mag),
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(10Rnd_762x54_Mag),
		mag_2(HandGrenade),
	};
};
class ff7_I_somalia_pirates_soldier_GL_F: ff7_I_somalia_pirates_Soldier_base_F {
	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	_generalMacro = "ff7_I_somalia_pirates_soldier_GL_F";
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
class ff7_I_somalia_pirates_engineer_F: ff7_I_somalia_pirates_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	_generalMacro = "ff7_I_somalia_pirates_engineer_F";
	role = "Sapper";
	canDeactivateMines = true;
	engineer = true;
	icon = "iconManEngineer";

};
class ff7_I_somalia_pirates_soldier_exp_F: ff7_I_somalia_pirates_Soldier_base_F {
	backpack = "B_ff7_util_oli";		
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Explosive Specialist";
	_generalMacro = "ff7_I_somalia_pirates_soldier_exp_F";
	role = "Sapper";
	canDeactivateMines = true;
	icon = "iconManExplosive";

};
class ff7_O_I_somalia_piratesfficer_F: ff7_I_somalia_pirates_Soldier_base_F {
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	_generalMacro = "ff7_O_I_somalia_piratesfficer_F";
	icon = "iconManOfficer";
};

