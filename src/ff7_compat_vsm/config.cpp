class CfgPatches
{
	class ff7_compat_vsm
	{
		name="FoxForce7VSM Compatibility";
		version=1.2;
		units[]={};
		weapons[]={};
		requiredVersion=1.8;
		requiredAddons[]=
		{
			"VSM_HELMETS",
			"VSM_Shemagh_config",
			"ace_goggles",
			"VSM_AOR1_Config",
			"VSM_CSAT_OD_Config",
			"VSM_M81_Config",
			"VSM_Multicam_Config",
			"VSM_MulticamTropic_Config",
			"VSM_OCP_Config",
			"VSM_OGA_Config",
			"VSM_ProjectHonor_Config",
			"VSM_Scorpion_Config"
		};
		author="FoxForce7";
		authors[]=
		{
			"Whigital",
			"Bliss"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgVehicles
{
	class B_AssaultPack_Base;
	class B_kitbag_Base;
	class B_Carryall_Base;
	class VSM_AOR1_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Backpack_Compact.paa";
	};
	class VSM_AOR1_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Backpack_Kitbag.paa";
	};
	class VSM_AOR1_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_carryall.paa";
	};
	class VSM_M81_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Backpack_Compact.paa";
	};
	class VSM_M81_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Backpack_Kitbag.paa";
	};
	class VSM_M81_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_carryall.paa";
	};
	class VSM_MulticamTropic_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Backpack_Compact.paa";
	};
	class VSM_MulticamTropic_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Backpack_Kitbag.paa";
	};
	class VSM_MulticamTropic_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_carryall.paa";
	};
	class VSM_Multicam_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Backpack_Compact.paa";
	};
	class VSM_Multicam_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Backpack_Kitbag.paa";
	};
	class VSM_Multicam_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_carryall.paa";
	};
	class VSM_OCP_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Backpack_Compact.paa";
	};
	class VSM_OCP_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Backpack_Kitbag.paa";
	};
	class VSM_OCP_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_carryall.paa";
	};
	class VSM_OGA_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Backpack_Compact.paa";
	};
	class VSM_OGA_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Backpack_Kitbag.paa";
	};
	class VSM_OGA_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_carryall.paa";
	};
	class VSM_OGA_OD_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_OD_Backpack_Compact.paa";
	};
	class VSM_OGA_OD_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_OD_Backpack_Kitbag.paa";
	};
	class VSM_OGA_OD_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_OD_carryall.paa";
	};
	class VSM_ProjectHonor_Backpack_Compact: B_AssaultPack_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Backpack_Compact.paa";
	};
	class VSM_ProjectHonor_Backpack_Kitbag: B_kitbag_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Backpack_Kitbag.paa";
	};
	class VSM_ProjectHonor_carryall: B_Carryall_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_carryall.paa";
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class HeadgearItem;
	class VSM_Mich2000_AOR1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_M81: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_MulticamTropic: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_Multicam: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_ocp: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_CamoSprayOD: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_OGA_OD: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_OGA: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_ProjectHonor: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_CamoSprayTAN: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_aor1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_M81: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_MulticamTropic: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_Multicam: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_OCP: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_CamoSprayOD: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_OGA_OD: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_OGA: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_ProjectHonor: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Mich2000_2_CamoSprayTAN: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_Helmet1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_OD_Helmet1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_Helmet2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_OD_Helmet2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_aor1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Black_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_M81_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_multicam: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_MulticamTropic_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_ocp: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OD_spray_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_OD_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_oga_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_ProjectHonor_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Tan_spray_OPS: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_2_AOR1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Black_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_M81_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_2_multicam: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_MulticamTropic_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OPS_2_ocp: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OD_Spray_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_OGA_OD_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_oga_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_ProjectHonor_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Tan_spray_OPS_2: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_AOR1: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_coyote: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_M81: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_OCP: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_OD: ItemCore
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_FullShemagh_OD_pattern: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_FullShemagh_OD: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_FullShemagh_Tan_pattern: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_FullShemagh_Tan: ItemCore
	{
		ace_hearing_protection=0;
		ace_hearing_lowerVolume=0.1;
	};
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class VSM_AOR1_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_BDU_OD_pants_Uniform.paa";
	};
	class VSM_AOR1_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_BDU_tan_pants_Uniform.paa";
	};
	class VSM_AOR1_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_BDU_Uniform.paa";
	};
	class VSM_AOR1_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Casual_uniform.paa";
	};
	class VSM_AOR1_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_grey_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_od_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_od_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_SS_Uniform.paa";
	};
	class VSM_AOR1_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_tan_pants_Uniform.paa";
	};
	class VSM_AOR1_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_AOR1_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_Tee_Uniform.paa";
	};
	class VSM_AOR1_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Crye_Uniform.paa";
	};
	class VSM_AOR1_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_od_pants_Uniform.paa";
	};
	class VSM_AOR1_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_od_pants_Uniform_SS.paa";
	};
	class VSM_AOR1_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_od_shirt_Uniform.paa";
	};
	class VSM_AOR1_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_od_shirt_Uniform_SS.paa";
	};
	class VSM_AOR1_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_tan_pants_Uniform.paa";
	};
	class VSM_AOR1_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_tan_pants_Uniform_SS.paa";
	};
	class VSM_AOR1_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_tan_shirt_Uniform.paa";
	};
	class VSM_AOR1_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_tan_shirt_Uniform_SS.paa";
	};
	class VSM_AOR1_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Uniform.paa";
	};
	class VSM_AOR1_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Uniform_SS.paa";
	};
	class VSM_AOR1_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_AOR1_Uniform_TShirt.paa";
	};
	class VSM_CSAT_AOR2_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_CSAT_AOR2_Uniform.paa";
	};
	class VSM_CSAT_MulticamTropic_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_CSAT_MulticamTropic_Uniform.paa";
	};
	class VSM_M81_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_BDU_OD_pants_Uniform.paa";
	};
	class VSM_M81_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_BDU_tan_pants_Uniform.paa";
	};
	class VSM_M81_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_BDU_Uniform.paa";
	};
	class VSM_M81_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Casual_uniform.paa";
	};
	class VSM_M81_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_grey_pants_Uniform.paa";
	};
	class VSM_M81_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_od_pants_Uniform.paa";
	};
	class VSM_M81_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_od_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_M81_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_M81_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_M81_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_SS_Uniform.paa";
	};
	class VSM_M81_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_tan_pants_Uniform.paa";
	};
	class VSM_M81_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_M81_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_Tee_Uniform.paa";
	};
	class VSM_M81_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Crye_Uniform.paa";
	};
	class VSM_M81_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_od_pants_Uniform.paa";
	};
	class VSM_M81_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_od_pants_Uniform_SS.paa";
	};
	class VSM_M81_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_od_shirt_Uniform.paa";
	};
	class VSM_M81_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_od_shirt_Uniform_SS.paa";
	};
	class VSM_M81_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_tan_pants_Uniform.paa";
	};
	class VSM_M81_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_tan_pants_Uniform_SS.paa";
	};
	class VSM_M81_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_tan_shirt_Uniform.paa";
	};
	class VSM_M81_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_tan_shirt_Uniform_SS.paa";
	};
	class VSM_M81_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Uniform.paa";
	};
	class VSM_M81_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Uniform_SS.paa";
	};
	class VSM_M81_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_M81_Uniform_TShirt.paa";
	};
	class VSM_MulticamTropic_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_BDU_OD_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_BDU_tan_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_BDU_Uniform.paa";
	};
	class VSM_MulticamTropic_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Casual_uniform.paa";
	};
	class VSM_MulticamTropic_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_grey_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_od_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_od_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_SS_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_tan_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_Tee_Uniform.paa";
	};
	class VSM_MulticamTropic_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Crye_Uniform.paa";
	};
	class VSM_MulticamTropic_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_od_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_od_pants_Uniform_SS.paa";
	};
	class VSM_MulticamTropic_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_od_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_od_shirt_Uniform_SS.paa";
	};
	class VSM_MulticamTropic_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_tan_pants_Uniform.paa";
	};
	class VSM_MulticamTropic_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_tan_pants_Uniform_SS.paa";
	};
	class VSM_MulticamTropic_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_tan_shirt_Uniform.paa";
	};
	class VSM_MulticamTropic_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_tan_shirt_Uniform_SS.paa";
	};
	class VSM_MulticamTropic_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Uniform.paa";
	};
	class VSM_MulticamTropic_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Uniform_SS.paa";
	};
	class VSM_MulticamTropic_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_MulticamTropic_Uniform_TShirt.paa";
	};
	class VSM_Multicam_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_BDU_OD_pants_Uniform.paa";
	};
	class VSM_Multicam_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_BDU_tan_pants_Uniform.paa";
	};
	class VSM_Multicam_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_BDU_Uniform.paa";
	};
	class VSM_Multicam_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Casual_uniform.paa";
	};
	class VSM_Multicam_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_grey_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_od_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_od_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_SS_Uniform.paa";
	};
	class VSM_Multicam_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_tan_pants_Uniform.paa";
	};
	class VSM_Multicam_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_Multicam_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_Tee_Uniform.paa";
	};
	class VSM_Multicam_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Crye_Uniform.paa";
	};
	class VSM_Multicam_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_od_pants_Uniform.paa";
	};
	class VSM_Multicam_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_od_pants_Uniform_SS.paa";
	};
	class VSM_Multicam_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_od_shirt_Uniform.paa";
	};
	class VSM_Multicam_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_od_shirt_Uniform_SS.paa";
	};
	class VSM_Multicam_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_tan_pants_Uniform.paa";
	};
	class VSM_Multicam_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_tan_pants_Uniform_SS.paa";
	};
	class VSM_Multicam_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_tan_shirt_Uniform.paa";
	};
	class VSM_Multicam_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_tan_shirt_Uniform_SS.paa";
	};
	class VSM_Multicam_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Uniform.paa";
	};
	class VSM_Multicam_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Uniform_SS.paa";
	};
	class VSM_Multicam_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Multicam_Uniform_TShirt.paa";
	};
	class VSM_OCP_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_BDU_OD_pants_Uniform.paa";
	};
	class VSM_OCP_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_BDU_tan_pants_Uniform.paa";
	};
	class VSM_OCP_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_BDU_Uniform.paa";
	};
	class VSM_OCP_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Casual_uniform.paa";
	};
	class VSM_OCP_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_grey_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_od_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_od_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_SS_Uniform.paa";
	};
	class VSM_OCP_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_tan_pants_Uniform.paa";
	};
	class VSM_OCP_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_OCP_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_Tee_Uniform.paa";
	};
	class VSM_OCP_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Crye_Uniform.paa";
	};
	class VSM_OCP_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_od_pants_Uniform.paa";
	};
	class VSM_OCP_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_od_pants_Uniform_SS.paa";
	};
	class VSM_OCP_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_od_shirt_Uniform.paa";
	};
	class VSM_OCP_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_od_shirt_Uniform_SS.paa";
	};
	class VSM_OCP_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_tan_pants_Uniform.paa";
	};
	class VSM_OCP_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_tan_pants_Uniform_SS.paa";
	};
	class VSM_OCP_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_tan_shirt_Uniform.paa";
	};
	class VSM_OCP_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_tan_shirt_Uniform_SS.paa";
	};
	class VSM_OCP_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Uniform.paa";
	};
	class VSM_OCP_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Uniform_SS.paa";
	};
	class VSM_OCP_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OCP_Uniform_TShirt.paa";
	};
	class VSM_OGA_Crye_grey_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_grey_od_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_grey_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_grey_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_grey_tan_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_grey_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_grey_Uniform.paa";
	};
	class VSM_OGA_Crye_od_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_od_grey_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_od_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_od_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_od_tan_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_od_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_od_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_grey_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_grey_od_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_grey_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_grey_tan_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_grey_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_grey_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_od_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_od_grey_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_od_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_od_tan_pants_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_od_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_od_Uniform.paa";
	};
	class VSM_OGA_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_SS_Uniform.paa";
	};
	class VSM_OGA_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Crye_Uniform.paa";
	};
	class VSM_OGA_grey_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_grey_Casual_uniform.paa";
	};
	class VSM_OGA_OD_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_OD_Casual_uniform.paa";
	};
	class VSM_OGA_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_pants_Uniform.paa";
	};
	class VSM_OGA_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_pants_Uniform_SS.paa";
	};
	class VSM_OGA_od_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_tan_pants_Uniform.paa";
	};
	class VSM_OGA_od_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_tan_pants_Uniform_SS.paa";
	};
	class VSM_OGA_od_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_Uniform.paa";
	};
	class VSM_OGA_od_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_od_Uniform_SS.paa";
	};
	class VSM_OGA_tan_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_tan_Casual_uniform.paa";
	};
	class VSM_OGA_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Uniform.paa";
	};
	class VSM_OGA_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_OGA_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_BDU_OD_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_BDU_OD_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_BDU_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_BDU_tan_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_BDU_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_BDU_Uniform.paa";
	};
	class VSM_ProjectHonor_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Casual_uniform.paa";
	};
	class VSM_ProjectHonor_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_grey_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_od_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_od_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_SS_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_tan_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_Tee_Uniform.paa";
	};
	class VSM_ProjectHonor_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Crye_Uniform.paa";
	};
	class VSM_ProjectHonor_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_od_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_od_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_od_pants_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_od_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_od_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_od_shirt_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_tan_pants_Uniform.paa";
	};
	class VSM_ProjectHonor_tan_pants_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_tan_pants_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_tan_shirt_Uniform.paa";
	};
	class VSM_ProjectHonor_tan_shirt_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_tan_shirt_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Uniform.paa";
	};
	class VSM_ProjectHonor_Camo_SS: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Uniform_SS.paa";
	};
	class VSM_ProjectHonor_Camo_TShirt: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_ProjectHonor_Uniform_TShirt.paa";
	};
	class VSM_Scorpion_Casual_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Casual_uniform.paa";
	};
	class VSM_Scorpion_Crye_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_grey_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_grey_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_od_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_od_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_grey_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_grey_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_grey_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_grey_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_od_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_od_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_od_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_od_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_tan_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_tan_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_SS_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_SS_Uniform.paa";
	};
	class VSM_Scorpion_Crye_tan_pants_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_tan_pants_Uniform.paa";
	};
	class VSM_Scorpion_Crye_tan_shirt_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_tan_shirt_Uniform.paa";
	};
	class VSM_Scorpion_Crye_Tee_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_Tee_Uniform.paa";
	};
	class VSM_Scorpion_Crye_Camo: Uniform_Base
	{
		picture="\ff7\compat_vsm\data\icon\VSM_Scorpion_Crye_Uniform.paa";
	};
	class Vest_Camo_Base;
	class VSM_MBSS_Green: Vest_Camo_Base
	{
	};
	class VSM_MBSS_WTF: VSM_MBSS_Green
	{
		scope=1;
	};
	class VSM_MBSS_PACA: Vest_Camo_Base
	{
	};
	class VSM_MBSS_PACA_WTF: VSM_MBSS_PACA
	{
		scope=1;
	};
};
class CfgGlasses
{
	class VSM_Balaclava_black_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava_black_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_OD_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_tan_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_black_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Peltor_AOR1_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_coyote_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_m81_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_OCP_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Peltor_OD_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava2_black_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava2_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava2_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Balaclava2_black_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_OD_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_tan_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_black_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_black_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Facemask_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Facemask_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Facemask_black_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_OD_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_tan_Peltor_glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_black_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Balaclava_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Balaclava_OD_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_tan_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Balaclava2_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Balaclava2_OD_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_tan_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_OD_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Facemask_tan_Peltor
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
	};
	class VSM_Shemagh_Facemask_OD_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_tan_Peltor_Glasses
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_OD_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_tan_Peltor_Goggles
	{
		ace_hearing_protection=0.75;
		ace_hearing_lowerVolume=0.1;
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_black_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_OD_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_tan_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_black_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_black_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_OD_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_tan_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_black_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Balaclava2_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_black_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_OD_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_tan_glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_black_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Facemask_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_OD_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_tan_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_OD_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_tan_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Balaclava2_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_OD_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_tan_Glasses
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_OD_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Facemask_tan_Goggles
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Glasses_OD
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_glasses_tan
	{
		ACE_Overlay="";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\Cracked.paa";
		ACE_Resistance=1;
		ACE_Protection=0;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=16;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_Goggles_OD
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
	class VSM_Shemagh_goggles_tan
	{
		ACE_Overlay="\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";
		ACE_OverlayCracked="\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";
		ACE_Resistance=2;
		ACE_Protection=1;
		ACE_Color[]={0,0,0};
		ACE_TintAmount=24;
		ACE_OverlayDirt="A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_DustPath="\z\ace\addons\goggles\textures\fx\dust\%1.paa";
	};
};
