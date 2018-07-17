#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

class B_ViperHarness_blk_A_F: B_ViperHarness_blk_F
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(100Rnd_580x42_Mag_F,2);
        mag_xx(30Rnd_580x42_Mag_F,8);
		mag_xx(20Rnd_650x39_Cased_Mag_F,2);
		mag_xx(RPG32_F,2);
		mag_xx(RPG32_HE_F,2);
    };
	class TransportItems
	{
		
	};
};
class B_ViperHarness_blk_AAT_F: B_ViperHarness_blk_F
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
class B_ViperHarness_blk_AAA_F: B_ViperHarness_blk_F
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
class B_ViperLightHarness_blk_medic_F: B_ViperLightHarness_blk_F
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ACE_fieldDressing,60);
        item_xx(ACE_morphine,40);
        item_xx(ACE_epinephrine,10);
	};
};
class B_ViperLightHarness_blk_exp_F: B_ViperLightHarness_blk_F
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(DemoCharge_Remote_Mag,3);
        item_xx(ClaymoreDirectionalMine_Remote_Mag,3);
        item_xx(SLAMDirectionalMine_Wire_Mag,2);
		item_xx(APERSTripMine_Wire_Mag,2);
		item_xx(ACE_Clacker,1);
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
	};
};
class B_ViperLightHarness_blk_engineer_F: B_ViperLightHarness_blk_F
{
    scope = 1;      
    class TransportMagazines
    {

    };
	class TransportItems
	{
		item_xx(ToolKit,1);
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_wirecutter,1);
	};
};
class B_ViperLightHarness_blk_LAT_F: B_ViperLightHarness_blk_F
{
    scope = 1;      
    class TransportMagazines
    {
		mag_xx(RPG7_F,5);
    };
	class TransportItems
	{

	};
};