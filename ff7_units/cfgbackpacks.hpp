#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class B_Carryall_ghex_F;
class B_Carryall_cbr;
class B_Carryall_ocamo;
class B_Carryall_khk;
class B_Carryall_mcamo;
class B_Carryall_oli;
class B_Carryall_oucamo;
class B_FieldPack_ghex_F;
class B_FieldPack_blk;
class B_FieldPack_oucamo;
class B_FieldPack_ocamo;
class B_FieldPack_khk;
class B_FieldPack_oli;
class B_FieldPack_cbr;
class B_Kitbag_sgg;
class B_Kitbag_mcamo;
class B_Kitbag_rgr;
class B_Kitbag_cbr;



//################## MEDIC CARRYALL

class B_ff7_medic_ghex_F: B_Carryall_ghex_F //greenhex
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_cbr_F: B_Carryall_cbr //olive
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_ocamo_F: B_Carryall_ocamo //hex
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_khk_F: B_Carryall_khk //khaki
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_mcamo_F: B_Carryall_mcamo //mtp
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_oli_F: B_Carryall_oli //olive
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_medic_oucamo_F: B_Carryall_oucamo //urban
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};

//##################RPG7 Fieldpacks

class B_ff7_rpg7_ghex_F: B_FieldPack_ghex_F //green hex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_blk: B_FieldPack_blk //black
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_oucamo: B_FieldPack_oucamo //urban
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_cbr: B_FieldPack_cbr //coyote
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_oli: B_FieldPack_oli //olive
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_khk: B_FieldPack_khk //khaki
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg7_ocamo: B_FieldPack_ocamo //hex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,4);
    };
	class TransportItems
	{

	};
};

//##################RPG32 Fieldpacks

class B_ff7_rpg32_rgr_F: B_Kitbag_rgr //green 
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG32_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg32_mtp: B_Kitbag_mcamo //mtp
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG32_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg32_sgg: B_Kitbag_sgg //sage
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG32_F,4);
    };
	class TransportItems
	{

	};
};
class B_ff7_rpg32_cbr: B_Kitbag_cbr //coyote 
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG32_F,4);
    };
	class TransportItems
	{

	};
};




//#############kitbag medic

class B_ff7_kit_medic_cbr: B_Kitbag_cbr //coyote
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_kit_medic_rgr: B_Kitbag_rgr //green
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_kit_medic_mcamo: B_Kitbag_mcamo //mtp
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};
class B_ff7_kit_medic_sgg: B_Kitbag_sgg //sage
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,20);
        item_xx(ACE_morphine,10);
        item_xx(ACE_epinephrine,2);
		item_xx(ACE_bloodIV,2);
	};
};



//##############AT Titan

class B_ff7_AT_ghex_F: B_Carryall_ghex_F //greenhex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_cbr_F: B_Carryall_cbr //olive
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_ocamo_F: B_Carryall_ocamo //hex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_khk_F: B_Carryall_khk //khaki
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_mcamo_F: B_Carryall_mcamo //mtp
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_oli_F: B_Carryall_oli //olive
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AT_oucamo_F: B_Carryall_oucamo //urban
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AT,3);
    };
	class TransportItems
	{

	};
};


//############## AA Titan

class B_ff7_AA_ghex_F: B_Carryall_ghex_F //greenhex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_cbr_F: B_Carryall_cbr //coyote
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_ocamo_F: B_Carryall_ocamo //hex
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_khk_F: B_Carryall_khk //khaki
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_mcamo_F: B_Carryall_mcamo //mtp
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_oli_F: B_Carryall_oli //olive
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};
class B_ff7_AA_oucamo_F: B_Carryall_oucamo //urban
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(Titan_AA,3);
    };
	class TransportItems
	{

	};
};



//######### utils

class B_ff7_util_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(DemoCharge_Remote_Mag,6);
		item_xx(ACE_Clacker,1);
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ToolKit,1);
		item_xx(ACE_wirecutter,1);
	};
};

// ###### ammo

class B_ff7_china_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(100Rnd_580x42_Mag_F,2);
        mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(20Rnd_650x39_Cased_Mag_F,2);
		mag_xx(RPG7_F,4);

    };
	class TransportItems
	{

	};
};

class B_ff7_iran_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(150Rnd_762x54_Box_Tracer,2);
        mag_xx(30Rnd_762x39_Mag_green_F,8);
		mag_xx(10Rnd_762x54_Mag,2);
		mag_xx(RPG7_F,4);

    };
	class TransportItems
	{

	};
};
class B_ff7_russia_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(150Rnd_762x54_Box_Tracer,2);
        mag_xx(30Rnd_762x39_Mag_green_F,8);
		mag_xx(10Rnd_127x54_Mag,2);
		mag_xx(RPG7_F,4);

    };
	class TransportItems
	{

	};
};
class B_ff7_congo_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(150Rnd_762x54_Box_Tracer,2);
        mag_xx(30Rnd_762x39_Mag_green_F,8);
		mag_xx(10Rnd_762x54_Mag,2);
		mag_xx(RPG7_F,4);

    };
	class TransportItems
	{

	};
};
class B_ff7_somalia_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(150Rnd_762x54_Box_Tracer,2);
        mag_xx(30Rnd_545x39_Mag_green_F,8);
		mag_xx(10Rnd_762x54_Mag,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{

	};
};
class B_ff7_urban_mercenaries_ammo_oucamo: B_Carryall_oucamo
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(200Rnd_65x39_cased_Box,2);
        mag_xx(30Rnd_9x21_Mag_SMG_02_Tracer_Green,8);
		mag_xx(20Rnd_762x51_Mag,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{

	};
};
class B_ff7_uk_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(200Rnd_556x45_Box_Red_F,2);
        mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(20Rnd_762x51_Mag,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{

	};
};
class B_ff7_us_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(200Rnd_556x45_Box_Red_F,2);
        mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(20Rnd_762x51_Mag,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{

	};
};
class B_ff7_nz_ammo_oli: B_Carryall_oli
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(200Rnd_556x45_Box_Red_F,2);
        mag_xx(30Rnd_556x45_Stanag,8);
		mag_xx(20Rnd_762x51_Mag,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{

	};
};
