class CfgPatches
{
	class ff7_gear_vsm
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"VSM_M81_Config",
			"VSM_ProjectHonor_Config",
			"VSM_Vests_Config",
			"VSM_HELMETS",
			"VSM_Shemagh_config"
		};
		author="FoxForce7";
		authors[]=
		{
			"|||BEN|||",
			"Whigital"
		};
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_03_f;
	class B_Soldier_base_F;
	class VSM_M81_Crye_Uniform;
	class FF7_VSM_Arc_Crye_Uniform: VSM_M81_Crye_Uniform
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Crye Gen3 Arctic";
		uniformClass="FF7_VSM_Arc_Crye_Uniform";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\uniform\ff7_vsm_crye_gen3_arc.paa"
		};
	};
	class B_AssaultPack_Base;
	class VSM_M81_Backpack_Compact;
	class FF7_VSM_Backpack_Compact_ARC: VSM_M81_Backpack_Compact
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Compact Bag (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\backpack\ff7_vsm_compact_arc.paa"
		};
	};
	class B_kitbag_Base;
	class VSM_M81_Backpack_Kitbag;
	class FF7_VSM_Backpack_Kitbag_ARC: VSM_M81_Backpack_Kitbag
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Kitbag (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\backpack\ff7_vsm_kitbag_arc.paa"
		};
	};
	class B_Carryall_Base;
	class VSM_M81_carryall;
	class FF7_VSM_carryall_ARC: VSM_M81_carryall
	{
		author="VSM, FoxForce7";
		displayName="[FF7] CarryAll (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\backpack\ff7_vsm_carryall_arc.paa"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_M81_Crye_Camo: Uniform_Base
	{
	};
	class FF7_VSM_Crye_Snow: VSM_M81_Crye_Camo
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Crye Gen3 (Arctic)";
		class ItemInfo: UniformItem
		{
			uniformClass="FF7_VSM_Arc_Crye_Uniform";
			containerClass="Supply70";
			mass=35;
		};
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_RAV_operator_M81;
	class FF7_VSM_RAV_operator_ARC: VSM_RAV_operator_M81
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Paraclete RAV: Operator (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_chestrig_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_battlebelt_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_dropholster_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_serpa_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_gear_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_radiopouch_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_rav_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_pouches_arc.paa"
		};
	};
	class VSM_RAV_MG_M81;
	class FF7_VSM_RAV_MG_ARC: VSM_RAV_MG_M81
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Paraclete RAV: Gunner (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_chestrig_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_battlebelt_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_boxmag_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_dropholster_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_serpa_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_gear_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_radiopouch_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_rav_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_pouches_arc.paa"
		};
	};
	class VSM_RAV_Breacher_M81;
	class FF7_VSM_RAV_Breacher_ARC: VSM_RAV_Breacher_M81
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Paraclete RAV: Breacher (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_chestrig_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_battlebelt_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_dropholster_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_serpa_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_gear_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_radiopouch_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_rav_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_pouches_arc.paa",
			"\ff7_gear_vsm\data\tex\vest\ff7_vsm_buttpouch_arc.paa"
		};
	};
	class HeadgearItem;
	class VSM_Mich2000_M81;
	class FF7_VSM_Mich2000_ARC: VSM_Mich2000_M81
	{
		author="VSM, FoxForce7";
		displayName="[FF7] MICH 2000 (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\helmet\ff7_vsm_mich2000_arc.paa",
			"\ff7_gear_vsm\data\tex\helmet\ff7_vsm_ops.paa"
		};
	};
	class VSM_M81_OPS;
	class FF7_VSM_OPS_ARC: VSM_M81_OPS
	{
		author="VSM, FoxForce7";
		displayName="[FF7] OpsCore (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\helmet\ff7_vsm_ops_arc.paa",
			"\ff7_gear_vsm\data\tex\helmet\vsm_helmet_pouch.paa",
			"\ff7_gear_vsm\data\tex\helmet\secco2.paa",
			"\ff7_gear_vsm\data\tex\helmet\headset_co.paa"
		};
	};
	class VSM_Beanie_Black;
	class FF7_VSM_Beanie_ARC: VSM_Beanie_Black
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Beanie (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\head\ff7_vsm_beanie_arc.paa"
		};
	};
	class VSM_FullShemagh_Tan_pattern;
	class FF7_VSM_FullShemagh_ARC: VSM_FullShemagh_Tan_pattern
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Shemagh (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\head\ff7_vsm_fullshemagh_arc.paa"
		};
	};
	class VSM_M81_Boonie;
	class FF7_VSM_Boonie_ARC: VSM_M81_Boonie
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Boonie (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\head\ff7_vsm_boonie_arc.paa"
		};
	};
	class VSM_M81_Cap;
	class FF7_VSM_Cap_ARC: VSM_M81_Cap
	{
		author="VSM, FoxForce7";
		displayName="[FF7] Cap (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\head\ff7_vsm_cap_arc.paa"
		};
	};
};
class CfgGlasses
{
	class VSM_Peltor_m81_glasses;
	class FF7_VSM_Peltor_glasses_ARC: VSM_Peltor_m81_glasses
	{
		author="VSM, FoxForce7";
		displayname="[FF7] Peltor (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\face\ff7_vsm_peltor_arc.paa"
		};
	};
	class VSM_Balaclava2_black_glasses;
	class FF7_VSM_Balaclava2_glasses_ARC: VSM_Balaclava2_black_glasses
	{
		author="VSM, FoxForce7";
		displayname="[FF7] Balaclava2 + Glasses (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\face\ff7_vsm_peltor_arc.paa"
		};
	};
	class VSM_Shemagh_Facemask_tan_Peltor_Goggles;
	class FF7_VSM_Shemagh_Facemask_Peltor_Goggles_ARC: VSM_Shemagh_Facemask_tan_Peltor_Goggles
	{
		author="VSM, FoxForce7";
		displayname="[FF7] Shemagh + FaceMask + Peltor + Goggles (Arctic)";
		hiddenSelectionsTextures[]=
		{
			"\ff7_gear_vsm\data\tex\face\VSM_Facemask_Black.paa",
			"\ff7_gear_vsm\data\tex\face\vsm_peltor_coyote.paa",
			"\ff7_gear_vsm\data\tex\face\ff7_vsm_scarf2_arc.paa"
		};
	};
};
