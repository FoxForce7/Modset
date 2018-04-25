class CfgPatches
{
    class ff7_units
    {
        name = "ff7 units";
        version="0.1";
        units[] =
        {
			// ---------- DILONG CORP (indep)----------
			"FF7_I_DIC_soldier_F",
			"FF7_I_DIC_soldier_LAT_F",
			"FF7_I_DIC_soldier_SL_F",
			"FF7_I_DIC_soldier_AR_F",
			"FF7_I_DIC_soldier_A_F",
			"FF7_I_DIC_medic_F",
			"FF7_I_DIC_soldier_TL_F",
			"FF7_I_DIC_soldier_M_F",
			"FF7_I_DIC_soldier_GL_F",
			"FF7_I_DIC_sniper_F",
			"FF7_I_DIC_spotter_F",
			"FF7_I_DIC_soldier_AT_F",
			"FF7_I_DIC_soldier_AAT_F",
			"FF7_I_DIC_soldier_AA_F",
			"FF7_I_DIC_soldier_AAA_F",
			"FF7_I_DIC_helicrew_F",
			"FF7_I_DIC_officer_F",
			"FF7_I_DIC_LSV_02_unarmed_F",
			"FF7_I_DIC_LSV_02_armed_F",
			"FF7_I_DIC_Heli_Light_02_unarmed_F",
			"FF7_I_DIC_Van_01_transport_F",
        };
        weapons[] = 
		{
			"arifle_CTAR_blk_ACO_F",
			"arifle_CTAR_blk_Holo_F",
			"arifle_CTAR_blk_MRCO_F",
			"arifle_CTAR_GL_blk_Holo_F",
			"arifle_CTARS_blk_ACO_F",
			"srifle_DMR_07_blk_MRCO_F",
			"srifle_GM6_LRPS_F"
		};
        requiredVersion = 1.64;
        requiredAddons[] =
        {
            "ff7_base"
        };
        magazines[] ={};
        ammo[] ={};
        author = "FoxForce7";
        authors[] = {"NewSparta"};
    };
};

class cfgFactionClasses
{
	 class FF7_I_Dilong_Corp
	 {
		  displayName = "Dilong Corporation";
		  icon = "";
		  priority = 99;
		  side = 2;
	 };
	 class FF7_O_Dilong_Corp
	 {
		  displayName = "Dilong Corporation";
		  icon = "";
		  priority = 99;
		  side = 0;
	 };
};

class CfgVehicleClasses
{
	 class Men
	 {
		displayName = "Men";
		priority = 0;
	 };
	 class Car
	 {
		displayName = "Cars";
		priority = 0;
	 };
	 class Air
	 {
		displayName = "Air";
		priority = 0;
	 };
};

class CfgWeapons
{
	// ---------- WEAPONS ----------
	
	class arifle_CTAR_blk_F;
	class arifle_CTARS_blk_F;
	class arifle_CTAR_GL_blk_F;
	class srifle_DMR_07_blk_F;
	class srifle_GM6_F;
	
	// ---------- INCLUDES ----------
	#include "Dilong Corp (indep)\cfgWeapons.hpp"
};

class CfgVehicles
{
	// ---------- SOLDIERS ----------
	class B_Soldier_base_F;
	class FF7_DIC_I_Soldier_base_F: B_Soldier_base_F
	{
		scope=0;
		side=2;
		faction="FF7_I_Dilong_Corp";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		class EventHandlers;
	};
	class FF7_DIC_O_Soldier_base_F: B_Soldier_base_F
	{
		scope=0;
		side=0;
		faction="FF7_O_Dilong_Corp";
		identityTypes[] = {"LanguageCHI_F","Head_Asian","G_CIVIL_male"};
		class EventHandlers;
	};
	
	// ---------- BACKPACKS ----------
	
	class B_ViperHarness_blk_F;
	class B_ViperLightHarness_blk_F;
	
	// ---------- VEHICLES ----------
	class C_Van_01_transport_F;
	class C_Hatchback_01_F;
	class O_Heli_Light_02_unarmed_F;
	class O_T_LSV_02_armed_F;
	class O_T_LSV_02_unarmed_F;
	
	// ---------- INCLUDES ----------
	#include "Dilong Corp (indep)\cfgBackpacks.hpp"
	#include "Dilong Corp (indep)\cfgSoldiers.hpp"
	//#include "Dilong Corp (east)\cfgSoldiers.hpp"
};

class CfgGroups
{
	#include "Dilong Corp (indep)\cfgGroups.hpp"
	//#include "Dilong Corp (east)\cfgGroups.hpp"
};