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

class FF7_I_DIC_soldier_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman";
	_generalMacro = "FF7_I_DIC_soldier_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_LAT_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Rifleman (AT)";
	_generalMacro = "FF7_I_DIC_soldier_LAT_F";
	role = "MissileSpecialist";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 1, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManAT";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_Holo_F, 
		launch_RPG32_ghex_F,
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_Holo_F,
		launch_RPG32_ghex_F,
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		RPG32_F,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		RPG32_F,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk,
		H_Bandanna_gry,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk,
		H_Bandanna_gry,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_SL_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Squad Leader";
	_generalMacro = "FF7_I_DIC_soldier_SL_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManLeader";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_MRCO_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_MRCO_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier2_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier2_blk,
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"H_Bandanna_khk_hs_custom",1,
		"H_Watchcap_blk_custom",1,
		"H_Watchcap_camo_custom",1,
		"H_Watchcap_cbr_custom",1,
		"H_Watchcap_khk_custom",1
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_AR_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Autorifleman";
	_generalMacro = "FF7_I_DIC_soldier_AR_F";
	role = "MachineGunner";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManMG";
	backpack = "";
	weapons[] = {
		arifle_CTARS_blk_ACO_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTARS_blk_ACO_F, 
		hgun_Pistol_01_F, 
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
		mag_6(100Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_6(100Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		H_Bandanna_gry,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		H_Bandanna_gry,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_A_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Ammobearer";
	_generalMacro = "FF7_I_DIC_soldier_A_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "B_ViperHarness_blk_A_F";
	weapons[] = {
		arifle_CTAR_blk_Holo_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_Holo_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_medic_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Combat Life Saver";
	_generalMacro = "FF7_I_DIC_medic_F";
	role = "CombatLifeSaver";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 1;
	icon = "iconManMedic";
	backpack = "B_ViperLightHarness_blk_medic_F";
	weapons[] = {
		arifle_CTAR_blk_ACO_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_ACO_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk,
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk,
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_TL_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Team Leader";
	_generalMacro = "FF7_I_DIC_soldier_TL_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManLeader";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_Holo_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_Holo_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk,
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk,
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"H_Bandanna_khk_hs_custom",1,
		"H_Watchcap_blk_custom",1,
		"H_Watchcap_camo_custom",1,
		"H_Watchcap_cbr_custom",1,
		"H_Watchcap_khk_custom",1
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_M_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Marksman";
	_generalMacro = "FF7_I_DIC_soldier_M_F";
	role = "Marksman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_4_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		srifle_DMR_07_blk_MRCO_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_DMR_07_blk_MRCO_F, 
		hgun_Pistol_01_F, 
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
		mag_10(20Rnd_650x39_Cased_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(20Rnd_650x39_Cased_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_GL_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Grenadier";
	_generalMacro = "FF7_I_DIC_soldier_GL_F";
	role = "Grenadier";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.8, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		arifle_CTAR_GL_blk_Holo_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_GL_blk_Holo_F, 
		hgun_Pistol_01_F, 
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
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		mag_4(1Rnd_HE_Grenade_shell),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_engineer_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Engineer";
	_generalMacro = "FF7_I_DIC_engineer_F";
	role = "Sapper";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_4_F";
	canDeactivateMines = true;
	engineer = true;
	attendant = 0;
	icon = "iconManEngineer";
	backpack = "B_ViperLightHarness_blk_engineer_F";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_exp_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Explosive Specialist";
	_generalMacro = "FF7_I_DIC_soldier_exp_F";
	role = "Sapper";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	canDeactivateMines = true;
	engineer = false;
	attendant = 0;
	icon = "iconManExplosive";
	backpack = "B_ViperLightHarness_blk_exp_F";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_sniper_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Sniper";
	_generalMacro = "FF7_I_DIC_sniper_F";
	role = "Marksman";
	cost = 50000;
	camouflage = 0.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_5_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		srifle_GM6_LRPS_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		srifle_GM6_LRPS_F, 
		hgun_Pistol_01_F, 
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
		mag_5(5Rnd_127x108_Mag),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_5(5Rnd_127x108_Mag),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_spotter_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Spotter";
	_generalMacro = "FF7_I_DIC_spotter_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 0.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_4_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_6(30Rnd_580x42_Mag_F),
		mag_3(5Rnd_127x108_Mag),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_6(30Rnd_580x42_Mag_F),
		mag_3(5Rnd_127x108_Mag),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_AT_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AT)";
	_generalMacro = "FF7_I_DIC_soldier_AT_F";
	role = "MissileSpecialist";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {0.8, 1, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_2_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManAT";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		launch_O_Titan_short_ghex_F,
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		launch_O_Titan_short_ghex_F,
		hgun_Pistol_01_F, 
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
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		Titan_AT,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		Titan_AT,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_AAT_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AT)";
	_generalMacro = "FF7_I_DIC_soldier_AAT_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_2_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "B_ViperHarness_blk_AAT_F";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_AA_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Missile Specialist (AA)";
	_generalMacro = "FF7_I_DIC_soldier_AA_F";
	role = "MissileSpecialist";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {0.8, 0.2, 1};
	uniformClass = "U_I_C_Soldier_Bandit_2_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManAT";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		launch_O_Titan_ghex_F,
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		launch_O_Titan_ghex_F,
		hgun_Pistol_01_F, 
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
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		Titan_AA,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_8(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		Titan_AA,
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_Chestrig_blk, 
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_soldier_AAA_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Asst. Missile Specialist (AA)";
	_generalMacro = "FF7_I_DIC_soldier_AAA_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_2_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "B_ViperHarness_blk_AAA_F";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier1_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier1_blk, 
		H_Watchcap_blk,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_helicrew_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Helicopter Crew";
	_generalMacro = "FF7_I_DIC_helicrew_F";
	role = "Crewman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_3_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconMan";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_6(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green
	};
	respawnMagazines[] = {
		mag_6(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green
	};
	linkedItems[] = {
		V_BandollierB_blk, 
		H_PilotHelmetHeli_B,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_BandollierB_blk, 
		H_PilotHelmetHeli_B,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};
class FF7_I_DIC_officer_F: FF7_DIC_I_Soldier_base_F
{
	author = "Newsparta";
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Officer";
	_generalMacro = "FF7_I_DIC_officer_F";
	role = "Rifleman";
	cost = 50000;
	camouflage = 1.5;
	sensitivity = 2.5;
	threat[] = {1, 0.2, 0.2};
	uniformClass = "U_I_C_Soldier_Bandit_1_F";
	canDeactivateMines = false;
	engineer = false;
	attendant = 0;
	icon = "iconManOfficer";
	backpack = "";
	weapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
		Throw, 
		Put
	};
	respawnWeapons[] = {
		arifle_CTAR_blk_F, 
		hgun_Pistol_01_F, 
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
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	respawnMagazines[] = {
		mag_10(30Rnd_580x42_Mag_F),
		mag_3(10Rnd_9x21_Mag),
		SmokeShell, 
		SmokeShellGreen, 
		Chemlight_green, 
		mag_2(HandGrenade),
	};
	linkedItems[] = {
		V_PlateCarrier2_blk, 
		H_Cap_oli_hs,
		G_Shades_Black,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	respawnLinkedItems[] = {
		V_PlateCarrier2_blk, 
		H_Cap_oli_hs,
		G_Shades_Black,
		ItemMap, 
		ItemCompass, 
		ItemWatch, 
		ItemRadio
	};
	headgearList[]=
	{
		"",0.7,
		"H_FakeHeadgear",0.7,
		"H_Bandanna_gry_custom",0.5,
		"H_Bandanna_cbr_custom",0.5,
		"H_Bandanna_khk_hs_custom",0.5,
		"H_Bandanna_khk_custom",0.5,
		"H_Bandanna_sand_custom",0.5,
		"H_Watchcap_blk_custom",0.4,
		"H_Watchcap_camo_custom",0.4,
		"H_Watchcap_cbr_custom",0.4,
		"H_Watchcap_khk_custom",0.4
	};
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	};
};

// ---------- VEHICLES ----------

class FF7_I_DIC_LSV_02_unarmed_F: O_T_LSV_02_unarmed_F
{
	scopeCurator=2;
	side=2;
	author="Newsparta";
	forceInGarage=1;
	faction="FF7_I_Dilong_Corp";
	displayName="Qilin (unarmed)";
	vehicleclass = "Car"; //Unit Group
	crew="FF7_I_DIC_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
		class _xx_Medikit
		{
			name="Medikit";
			count=1;
		};
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
};
class FF7_I_DIC_LSV_02_armed_F: O_T_LSV_02_armed_F
{
	scopeCurator=2;
	side=2;
	author="Newsparta";
	forceInGarage=1;
	faction="FF7_I_Dilong_Corp";
	displayName="Qilin (armed)";
	vehicleclass = "Car"; //Unit Group
	crew="FF7_I_DIC_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
		class _xx_Medikit
		{
			name="Medikit";
			count=1;
		};
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
};
class FF7_I_DIC_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F
{
	scopeCurator=2;
	side=2;
	author="Newsparta";
	forceInGarage=1;
	faction="FF7_I_Dilong_Corp";
	displayName="Ka-60";
	vehicleclass = "Air"; //Unit Group
	crew="FF7_I_DIC_helicrew_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
		class _xx_Medikit
		{
			name="Medikit";
			count=1;
		};
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
};
class FF7_I_DIC_Hatchback_01_F: C_Hatchback_01_F
{
	scopeCurator=2;
	side=2;
	author="Newsparta";
	forceInGarage=1;
	faction="FF7_I_Dilong_Corp";
	displayName="Hatchback";
	vehicleclass = "Car"; //Unit Group
	crew="FF7_I_DIC_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
		class _xx_Medikit
		{
			name="Medikit";
			count=1;
		};
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
};
class FF7_I_DIC_Van_01_transport_F: C_Van_01_transport_F
{
	scopeCurator=2;
	side=2;
	author="Newsparta";
	forceInGarage=1;
	faction="FF7_I_Dilong_Corp";
	displayName="Truck";
	vehicleclass = "Car"; //Unit Group
	crew="FF7_I_DIC_soldier_F";
	textureList[] = 
	{
		"Black",1
	};
	typicalCargo[]=
	{

	};
	enableGPS=1;
	transportMaxBackpacks=6;
	class TransportItems
	{
		class _xx_ToolKit
		{
			name="ToolKit";
			count=1;
		};
		class _xx_Medikit
		{
			name="Medikit";
			count=1;
		};
		class _xx_FirstAidKit
		{
			name="FirstAidKit";
			count=10;
		};
	};
};