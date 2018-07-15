class CfgPatches
{
	class ff7_compat_rh
	{
		name="ff7 rh acc compat";
		units[]={};
		weapons[]={};
		requiredVersion=1.78;
		requiredAddons[]=
		{
			"RH_acc"
		};
		author="ace-team, FoxForce7";
		authors[]=
		{
			"Ruthberg",
			"csathdfw"
		};
	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class RH_accupoint: ItemCore
	{
		ACE_ScopeHeightAboveRail=3.7260001;
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Accupoint
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class RH_m3lr: ItemCore
	{
		ACE_ScopeHeightAboveRail=3.5750999;
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class m3lr
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class RH_c79: ItemCore
	{
		ACE_ScopeHeightAboveRail=4.1673102;
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class c79scope
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class RH_c79_2d: ItemCore
	{
		ACE_ScopeHeightAboveRail=4.1673102;
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class c79scope
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
	class RH_anpvs10: ItemCore
	{
		ACE_ScopeHeightAboveRail=2.64379;
		ACE_ScopeAdjust_Vertical[]={-4,30};
		ACE_ScopeAdjust_Horizontal[]={-6,6};
		ACE_ScopeAdjust_VerticalIncrement=0.1;
		ACE_ScopeAdjust_HorizontalIncrement=0.1;
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class pvs10
				{
					discreteDistance[]={100};
					discreteDistanceInitIndex=0;
				};
			};
		};
	};
};
class cfgMods
{
	author="FoxForce7";
	timepacked="1524481696";
};
