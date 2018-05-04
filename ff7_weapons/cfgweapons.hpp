
/*
(30Rnd 9mm) __smg9mm_fox_mags
(30Rnd .45) __smg45_fox_mags
(30Rnd 5.45mm) __30r545ak_fox_mags
(20Rnd 5.56mm dual) __556water_fox_mags
(30Rnd 5.56mm) __30r556_fox_mags
(150Rnd 5.56mm) __150belt556_fox_mags
(200Rnd 5.56mm) __200belt556_fox_mags
(30Rnd 5.8mm) __30r58_fox_mags
(100Rnd 5.8mm) __100belt58_fox_mags
(20rnd 6.5mm) __20r65_fox_mags
(30Rnd 6.5mm) __30r65_fox_mags
(30Rnd 6.5mm Caseless) __30r65c_fox_mags
(100Rnd 6.5mm) __100belt65_fox_mags
(200Rnd 6.5mm) __200belt65_fox_mags
(30Rnd 7.62mm) __30r762ak_fox_mags 
(10Rnd 7.62mm) __10r762_fox_mags
(20Rnd 7.62mm) __20r762_fox_mags
(150Rnd 7.62mm) __150belt762_fox_mags
(10Rnd .338) __10r338_fox_mags
(130Rnd .338) __130belt338_fox_mags
(10Rnd 9.3mm) __10r93_fox_mags
(150Rnd 9.3mm) __150belt93_fox_mags
(7Rnd .408) __7r408_fox_mags
(5Rnd 12.7mm) __5r127_fox_mags
(10Rnd 12.7mm) __10r127_fox_mags



*/

class CfgWeapons {
//########Vanilla#######	
	
//##########AK##########
//AK12 (30Rnd 7.62mm)	
	class arifle_AK12_base_F : Rifle_Base_F {
		magazines[] += { __30r762ak_fox_mags }; };
	class arifle_AK12_F : arifle_AK12_base_F {
		displayName = "AR AK12 7.62x39";
		};
//AK12 GL (30Rnd 7.62mm)		
	class arifle_AK12_GL_base_F : arifle_AK12_base_F {};
	class arifle_AK12_GL_F : arifle_AK12_GL_base_F{
		displayName = "ARGL AK12 7.62x39";
		};		
//AKM (30Rnd 7.62mm)		
	class arifle_AKM_base_F : Rifle_Base_F {
		magazines[] += { __30r762ak_fox_mags }; };
	class arifle_AKM_F : arifle_AKM_base_F{
		displayName = "AR AKM 7.62";
		};
//AKS-74U (30Rnd 5.45mm)
	class arifle_AKS_base_F : Rifle_Base_F {
		magazines[] += { __30r545ak_fox_mags }; };
	class arifle_AKS_F : arifle_AKS_base_F{
		displayName = "AR AKS 5.45";
		};

//##########sniper/DMR##########
//GM6 Lynx (5Rnd 12.7mm)
	class GM6_base_F : Rifle_Long_Base_F {
		magazines[] += { __5r127_fox_mags }; };
	class srifle_GM6_F : GM6_base_F{
		displayName = "S GM6 Lynx 12.7";
		};
	class srifle_GM6_camo_F : srifle_GM6_F{
		displayName = "S GM6 Lynx 12.7 camo";
		};
	class srifle_GM6_ghex_F : srifle_GM6_F{
		displayName = "S GM6 Lynx 12.7 hex";
		};
//M320 LRR (7Rnd .408)
	class LRR_base_F : Rifle_Long_Base_F {
		magazines[] += { __7r408_fox_mags }; };
	class srifle_LRR_F : LRR_base_F{
		displayName = "S M320 LRR .408";
		};
	class srifle_LRR_camo_F : srifle_LRR_F{
		displayName = "S M320 LRR .408 camo";
		};
	class srifle_LRR_tna_F : srifle_LRR_F{
		displayName = "S M320 LRR .408 camo2";
		};
//Mk18 ABR (20Rnd 7.62mm)
	class EBR_base_F : Rifle_Long_Base_F {
		magazines[] += { __20r762_fox_mags }; };
	class srifle_EBR_F : EBR_base_F{
		displayName = "DMR Mk18 ABR 7.62mm";
		};
//Rahim (10Rnd 7.62mm)
	class DMR_01_base_F : Rifle_Long_Base_F {
		magazines[] += { __10r762_fox_mags }; };
	class srifle_DMR_01_F : DMR_01_base_F {
		displayName = "S Rahim 7.62mm";
		};
//MAR-10 (10Rnd .338)
	class DMR_02_base_F : Rifle_Long_Base_F {
		magazines[] += { __10r338_fox_mags }; };
	class srifle_DMR_02_F : DMR_02_base_F{
		displayName = "S MAR-10 .338";
		};
	class srifle_DMR_02_camo_F : srifle_DMR_02_F{
		displayName = "S MAR-10 .338 camo";
		};
	class srifle_DMR_02_sniper_F : srifle_DMR_02_F{
		displayName = "S MAR-10 camo 2";
		};
//Mk-1-EMR (20Rnd 7.62mm)
	class DMR_03_base_F : Rifle_Long_Base_F {
		magazines[] += { __20r762_fox_mags }; };
	class srifle_DMR_03_F : DMR_03_base_F{
		displayName = "DMR Mk-1-EMR 7.62mm";
		};
	class srifle_DMR_03_khaki_F : srifle_DMR_03_F{
		displayName = "DMR Mk-1-EMR 7.62 camo";
		};
	class srifle_DMR_03_tan_F : srifle_DMR_03_F{
		displayName = "DMR Mk-1-EMR 7.62mm camo2";
		};
	class srifle_DMR_03_multicam_F : srifle_DMR_03_F{
		displayName = "DMR Mk-1-EMR 7.62mm camo3";
		};
	class srifle_DMR_03_woodland_F : srifle_DMR_03_F{
		displayName = "DMR Mk-1-EMR 7.62mm camo4";
		};
//ASP-1 Kir (10Rnd 12.7mm)
	class DMR_04_base_F : Rifle_Long_Base_F {
		magazines[] += { __10r127_fox_mags }; };
	class srifle_DMR_04_F : DMR_04_base_F{
		displayName = "S ASP-1 Kir 12.7mm";
		};
	class srifle_DMR_04_Tan_F : srifle_DMR_04_F{
		displayName = "S ASP-1 Kir 12.7mm";
		};
//Cyrus (10Rnd 9.3mm)
	class DMR_05_base_F : Rifle_Long_Base_F {
		magazines[] += { __10r93_fox_mags }; };
	class srifle_DMR_05_blk_F : DMR_05_base_F{
		displayName = "S Cyrus 9.3mm";
		};
	class srifle_DMR_05_hex_F : srifle_DMR_05_blk_F{
		displayName = "S Cyrus 9.3mm camo";
		};
	class srifle_DMR_05_tan_f : srifle_DMR_05_blk_F{
		displayName = "S Cyrus 9.3mm camo2";
		};
//Mk14 (20Rnd 7.62mm)
	class DMR_06_base_F : Rifle_Long_Base_F {
		magazines[] += { __20r762_fox_mags }; };
	class srifle_DMR_06_camo_F : DMR_06_base_F{
		displayName = "DMR Mk14 7.62mm";
		};
	class srifle_DMR_06_olive_F : srifle_DMR_06_camo_F{
		displayName = "DMR Mk14 7.62mm";
		};
// CMR-76 (20rnd 6.5mm)
	class DMR_07_base_F : Rifle_Long_Base_F {
		magazines[] += { __20r65_fox_mags }; };
	class srifle_DMR_07_blk_F : DMR_07_base_F{
		displayName = "DMR CMR-76 6.5mm";
		};
	class srifle_DMR_07_hex_F : DMR_07_base_F{
		displayName = "DMR CMR-76 6.5mm camo";
		};
	class srifle_DMR_07_ghex_F : DMR_07_base_F{
		displayName = "DMR CMR-76 6.5mm camo 2";
		};
//SPAR-17 (20Rnd 7.62mm)
	class arifle_SPAR_03_base_F : Rifle_Base_F {
		magazines[] += { __20r762_fox_mags }; };
	class arifle_SPAR_03_blk_F : arifle_SPAR_03_base_F{
		displayName = "DMR SPAR-17 7.62mm";
		};
	class arifle_SPAR_03_khk_F : arifle_SPAR_03_base_F{
		displayName = "DMR SPAR-17 7.62mm";
		};
	class arifle_SPAR_03_snd_F : arifle_SPAR_03_base_F{
		displayName = "DMR SPAR-17 7.62mm";
		};

//############AR############
//Katiba (30Rnd 6.5mm Caseless)
	class arifle_Katiba_Base_F : Rifle_Base_F {
		magazines[] += { __30r65c_fox_mags }; };
	class arifle_Katiba_F : arifle_Katiba_Base_F{
		displayName = "AR Katiba 6.5mmCL";
		};
	class arifle_Katiba_C_F : arifle_Katiba_Base_F{
		displayName = "AR Katiba 6.5mmCL";
		};
	class arifle_Katiba_GL_F : arifle_Katiba_Base_F{
		displayName = "ARGL Katiba 6.5mmCL";
		};
//MK20 (30Rnd 5.56mm)
	class mk20_base_F : Rifle_Base_F { 
		magazines[] += { __30r556_fox_mags }; };
	class arifle_Mk20_F : mk20_base_F{
		displayName = "AR MK20 (5.56x45)";
	};
	class arifle_Mk20_plain_F : arifle_Mk20_F{
		displayName = "AR MK20 (5.56x45)";
	};
//MK20C (30Rnd 5.56mm)
	class arifle_Mk20C_F : mk20_base_F { 
		displayName = "AR MK20 (5.56x45)";
	}; 
	class arifle_Mk20C_plain_F : arifle_Mk20C_F{
		displayName = "AR MK20 (5.56x45)";
	};
//MK20GL (30Rnd 5.56mm)
		class arifle_Mk20_GL_F : mk20_base_F { 
		displayName = "AR MK20 (5.56x45)";
	}; 
	class arifle_Mk20_GL_plain_F : arifle_Mk20_GL_F {
		displayName = "AR MK20 (5.56x45)";
	};
//MX (30Rnd 6.5mm)
	class arifle_MX_Base_F : Rifle_Base_F {
		magazines[] += { __30r65_fox_mags 	}; 
		displayName = "AR MX 6.5";
	};
	class arifle_MX_F : arifle_MX_Base_F{
		displayName = "AR MX 6.5";
	};
	class arifle_MX_Black_F : arifle_MX_F{
		displayName = "AR MX 6.5";
	};
	class arifle_MX_khk_F : arifle_MX_Black_F{
		displayName = "AR MX 6.5";
		};
//MX GL(30Rnd 6.5mm)
	class arifle_MX_GL_F : arifle_MX_Base_F { 
		displayName = "AR MX GL 6.5";
	};
	class arifle_MX_GL_Black_F : arifle_MX_GL_F{
		displayName = "AR MX GL 6.5";
	};
	class arifle_MX_GL_khk_F : arifle_MX_GL_Black_F{
		displayName = "AR MX GL 6.5";
	};
//MXC (30Rnd 6.5mm)
	class arifle_MXC_F : arifle_MX_Base_F {
		displayName = "AR MXC 6.5 Snd";
	};
	class arifle_MXC_Black_F : arifle_MXC_F{
		displayName = "AR MXC 6.5 Blk";
	};
	class arifle_MXC_khk_F : arifle_MXC_Black_F{
		displayName = "AR MXC 6.5 Grn";
	};
//MXM (30Rnd 6.5mm)
	class arifle_MXM_F : arifle_MX_Base_F { 
		displayName = "AR MXM 6.5 Snd";
	};
	class arifle_MXM_Black_F : arifle_MXM_F{
		displayName = "AR MXM 6.5 Blk";
	};
	class arifle_MXM_khk_F : arifle_MXM_Black_F{
		displayName = "AR MXM 6.5 Gnd";
	};
//MX SW (100Rnd 6.5mm)
	class arifle_MX_SW_F : arifle_MX_Base_F {
		magazines[] += { __100belt65_fox_mags };
		displayName = "AR MX SW 6.5 Snd";
	};
	class arifle_MX_SW_Black_F : arifle_MX_SW_F{
		displayName = "AR MX SW 6.5 Blk";
	};
	class arifle_MX_SW_khk_F : arifle_MX_SW_Black_F{
		displayName = "AR MX SW 6.5 Grn";
	};
//SPAR-16 (30Rnd 5.56mm)
	class arifle_SPAR_01_base_F : Rifle_Base_F {
		magazines[] += { __30r556_fox_mags }; 
	};
	class arifle_SPAR_01_blk_F : arifle_SPAR_01_base_F{
		displayName = "AR Spar 556 Blk";
	};
	class arifle_SPAR_01_khk_F : arifle_SPAR_01_base_F{
		displayName = "AR Spar 556 Grn";
	};
	class arifle_SPAR_01_snd_F : arifle_SPAR_01_base_F{
		displayName = "AR Spar 556 Snd";
	};
//SPAR-16 GL (30Rnd 5.56mm)
	class arifle_SPAR_01_GL_base_F : arifle_SPAR_01_base_F {};
	class arifle_SPAR_01_GL_blk_F : arifle_SPAR_01_GL_base_F{
		displayName = "ARGL Spar 556 Blk";
	};
	class arifle_SPAR_01_GL_khk_F : arifle_SPAR_01_GL_base_F{
		displayName = "ARGL Spar 556 Grn";
	};
	class arifle_SPAR_01_GL_snd_F : arifle_SPAR_01_GL_base_F{
		displayName = "ARGL Spar 556 Snd";
	};
//SPAR-16S (150Rnd 5.56mm)
	class arifle_SPAR_02_base_F : Rifle_Base_F {
		magazines[] += { __150belt556_fox_mags }; 
	};
	class arifle_SPAR_02_blk_F : arifle_SPAR_02_base_F {
		displayName = "AR Spar 556 Blk";
	};
	class arifle_SPAR_02_khk_F : arifle_SPAR_02_base_F {
		displayName = "AR Spar 556 Grn";
	};
	class arifle_SPAR_02_snd_F : arifle_SPAR_02_base_F {
		displayName = "AR Spar 556 Snd";
	};
// Car-91 (30Rnd 5.8mm)
	class arifle_CTAR_base_F : Rifle_Base_F {
		magazines[] += { __30r58_fox_mags }; 
	};
	class arifle_CTAR_blk_F : arifle_CTAR_base_F {
		displayName = "AR Car-91 Blk";
	};
	class arifle_CTAR_hex_F : arifle_CTAR_base_F {
		displayName = "AR Car-91 Hex";
	};
	class arifle_CTAR_ghex_F : arifle_CTAR_base_F {
		displayName = "AR Car-91 Grn";
	};
// Car-95-1 (100Rnd 5.8mm)
	class arifle_CTARS_base_F : Rifle_Base_F {
		magazines[] += { __100belt58_fox_mags }; 
	};
	class arifle_CTARS_blk_F : arifle_CTARS_base_F{
		displayName = "AR Car-91s Blk";
	};
	class arifle_CTARS_hex_F : arifle_CTARS_base_F {
		displayName = "AR Car-91s Hex";
	};
	class arifle_CTARS_ghex_F : arifle_CTARS_base_F {
		displayName = "AR Car-91s Grn";
	};
//Car-91 GL (30Rnd 5.8mm)
	class arifle_CTAR_GL_base_F : arifle_CTAR_base_F {};
	class arifle_CTAR_GL_blk_F : arifle_CTAR_GL_base_F {
		displayName = "ARGL Car-91 Blk";
	};
	class arifle_CTAR_GL_hex_F : arifle_CTAR_GL_base_F {
		displayName = "ARGL Car-91 Hex";
	};
	class arifle_CTAR_GL_ghex_F : arifle_CTAR_GL_base_F {
		displayName = "ARGL Car-91 Grn";
	};
//TRG (30Rnd 5.56mm)
	class Tavor_base_F : Rifle_Base_F {
		magazines[] += { __30r556_fox_mags }; 
	};
	class arifle_TRG21_F : Tavor_base_F {
		displayName = "AR TRG21 556 ";
	};
	class arifle_TRG20_F : Tavor_base_F {
		displayName = "AR TRG20 556";
	};
	class arifle_TRG21_GL_F : arifle_TRG21_F {
		displayName = "ARGL TRG21";
	};
//Type 115(30Rnd 6.5mm Caseless)
	class arifle_ARX_base_F : Rifle_Base_F {
		magazines[] += { __30r65c_fox_mags }; 
	};
	class arifle_ARX_blk_F : arifle_ARX_base_F {
		displayName = "AR Type 115 Blk";
	};
	class arifle_ARX_ghex_F : arifle_ARX_base_F {
		displayName = "AR Type 115 Grn";
	};
	class arifle_ARX_hex_F : arifle_ARX_base_F {
		displayName = "AR Type 115 Hex";
	};

//###########LMG##########
//LIM-85 (200Rnd 5.56mm)
	class LMG_03_base_F : Rifle_Long_Base_F {
		magazines[] += { __200belt556_fox_mags }; 
	};
	class LMG_03_F : LMG_03_base_F {
		displayName = "LMG LIM-85";
	};
//Mk200 (200Rnd 6.5mm)
	class LMG_Mk200_F : Rifle_Long_Base_F {
		magazines[] += { __200belt65_fox_mags };
		displayName = "LMG Mk200";
	};
	class LMG_Mk200_BI_F : LMG_Mk200_F {
		displayName = "LMG XXXX";
	};
//Zafir (150Rnd 7.62mm)
	class LMG_Zafir_F : Rifle_Long_Base_F {
		displayName = "LMG Zafir";
		magazines[] += { __150belt762_fox_mags }; 
	};

//##########HMG##########
//Navid (150Rnd 9.3mm)
	class MMG_01_base_F : Rifle_Long_Base_F {
		magazines[] += { __150belt93_fox_mags }; 
	};
	class MMG_01_hex_F : MMG_01_base_F {
		displayName = "HMG Navid hex";
	};
	class MMG_01_tan_F : MMG_01_hex_F {
		displayName = "HMG Navid tan";
	};
//SPMG (130Rnd .338)
	class MMG_02_base_F : Rifle_Long_Base_F {
		magazines[] += { __130belt338_fox_mags }; 
	};
	class MMG_02_camo_F : MMG_02_base_F {
		displayName = "HMG SPMG camo";
	};
	class MMG_02_black_F : MMG_02_camo_F {
		displayName = "HMG SPMG black";
	};
	class MMG_02_sand_F : MMG_02_camo_F {
		displayName = "HMG SPMG sand";
	};

//##########SMG##########
//PDW200 (30Rnd 9mm)
	class pdw2000_base_F : Rifle_Base_F {
		magazines[] += { __smg9mm_fox_mags }; 
	};
	class hgun_PDW2000_F : pdw2000_base_F {
		displayName = "SMG PDW200 ";
	};
//Vermin SMG (30Rnd .45)
	class SMG_01_Base : Rifle_Base_F {
		magazines[] += { __smg45_fox_mags }; 
	};
	class SMG_01_F : SMG_01_Base {
		displayName = "SMG Vermin";
	};
//Sting (30Rnd 9mm)
	class SMG_02_base_F : Rifle_Base_F {
		magazines[] += { __smg9mm_fox_mags }; 
	};
	class SMG_02_F : SMG_02_base_F {
		displayName = "SMG Sting";
	};
//Protector / mp5k (30Rnd 9mm)
	class SMG_05_base_F : Rifle_Base_F {
		magazines[] += { __smg9mm_fox_mags }; 
	};
	class SMG_05_F : SMG_05_base_F {
		displayName = "SMG Mp5k";
	};

//##########Misc##########
//SDAR underwater (20Rnd 5.56mm dual)	
	class SDAR_base_F : Rifle_Base_F {
		magazines[] += { __556water_fox_mags }; 
	};
	class arifle_SDAR_F : SDAR_base_F {
		displayName = "U SDAR";
	};



//#########NIARMS/HLC##########
//AR15
    class hlc_ar15_base : Rifle_Base_F {
		magazines[] += { __30r556_fox_mags }; 
	};
    class hlc_rifle_RU556 : hlc_ar15_base {
		displayName = "AR AR15 Sanitised Carbine";
	};
    class hlc_rifle_RU5562 : hlc_rifle_RU556 {
		displayName = "AR AR15 Magpul Carbine";
	};
    class hlc_rifle_Colt727 : hlc_ar15_base {
		displayName = "AR Colt Carbine";
	};
    class hlc_rifle_Colt727_GL : hlc_rifle_Colt727  {
		displayName = "AR Colt Carbine+M203";
	};
    class hlc_rifle_SAMR : hlc_ar15_base {
		displayName = "AR LAR15 AMR";
	};
    class hlc_rifle_samr2: hlc_rifle_SAMR {
		displayName = "AR AR LAR15 AMR(Alt)";
	};
    class hlc_rifle_CQBR : hlc_rifle_RU556 {
		displayName = "AR M4 Commando";
	};
    class hlc_rifle_M4 : hlc_ar15_base {
		displayName = "AR Colt M4";
	};
    class hlc_rifle_M4a1carryhandle: hlc_rifle_M4 {
		displayName = "AR Colt M4A1 (Carryhandle)";
	};
    class hlc_rifle_m4m203 : hlc_rifle_m4 {
		displayName = "AR Colt M4+M203";
	};
    class hlc_rifle_bcmjack : hlc_ar15_base {
		displayName = "AR BCM 'Jack' Carbine";
	};
    class hlc_rifle_bcmblackjack :Rifle_Base_F {
		displayName = "AR 'BlackJack' Custom";
		magazines[] += { __30r300_fox_mags };
	};
    class hlc_rifle_Bushmaster300 : Rifle_Base_F {
		magazines[] += { __30r300_fox_mags };
		displayName = "AR Bushmaster .300BLK Carbine";
	};
    class hlc_rifle_vendimus : hlc_rifle_Bushmaster300 {
		displayName = "AR AR15 .300 Dissipator";
	};
    class hlc_rifle_honeybase : hlc_rifle_Bushmaster300 {
		displayName = "AR AAC Honeybadger";
	};
    class hlc_rifle_mk18mod0: hlc_rifle_CQBR {
		displayName = "AR Mk18 Mod0";
	};
//ACR
	class hlc_acr_base : Rifle_Base_F {		
		magazines[] += { __30r556_fox_mags }; 
	};
	class hlc_acr556_base : hlc_acr_base{
		displayName = "AR ACR-E Remington";
	};
	class hlc_rifle_ACR_SBR_black :hlc_acr556_base {
		displayName = "AR ACR-E S Remington";
	};
	class hlc_rifle_ACR_Carb_black :hlc_rifle_ACR_SBR_black{
		displayName = "AR ACR-E C Remington";
	};
	class hlc_rifle_ACR_mid_black :hlc_rifle_ACR_SBR_black{
		displayName = "AR ACR-E M Remington";
	};
	class hlc_rifle_ACR_full_black :hlc_rifle_ACR_SBR_black{
		displayName = "AR ACR-E L Remington";
	};
	
//AUG
    class hlc_aug_base : Rifle_Base_F {		
		magazines[] += { __30r556_fox_mags }; 
	};
    class hlc_rifle_auga2 : hlc_aug_base {
		displayName = "AR AUGA2 Steyr [OD]";
	};
    class hlc_rifle_auga2_t : hlc_rifle_auga2 {
		displayName = "AR AUGA2 Steyr [Tan]";
	};
    class hlc_rifle_auga2_b : hlc_rifle_auga2 {
		displayName = "AR AUGA2 Steyr [Black]";
	};


//FAL
    class hlc_fal_base : Rifle_Base_F {		
		magazines[] += { __20r762_fox_mags }; 
	};
    class hlc_rifle_falosw : hlc_fal_base {	
		displayName = "AR FAL DSArms OSW";
	};
    class hlc_rifle_osw_GL : hlc_rifle_falosw {
		displayName = "AR FAL DSArms OSW(GL)";
	};
    class hlc_rifle_L1A1SLR : hlc_fal_base {
		displayName = "AR FAL Enfield L1A1 SLR";
	};
    class hlc_rifle_STG58F : hlc_fal_base {
		displayName = "AR FAL Steyr STG.58";
	};
    class hlc_rifle_FAL5061Rail : hlc_fal_base {
		displayName = "AR FAL FN 50.61'Para'";
	};
    class hlc_rifle_FAL5000Rail : hlc_rifle_FAL5061Rail {
		displayName = "AR FAL FN 50.00";
	};


	
//AWC
    class hlc_AWC_base : Rifle_Base_F {		
		magazines[] += { __7r408_fox_mags }; 
	};
    class hlc_rifle_awcovert : hlc_AWC_base {
		displayName = "S AI AWC-M (OD)";
	};
    class hlc_rifle_awmagnum : hlc_AWC_base {
		displayName = "S AI AWM (OD)";
	};
    class hlc_rifle_awmagnum_BL : hlc_rifle_awmagnum {
		displayName = "S AI AWM (Black)";
	};
    class hlc_rifle_awmagnum_FDE : hlc_rifle_awmagnum {
		displayName = "S AI AWM (FDE)";
	};
    class hlc_rifle_awcovert_BL : hlc_rifle_awcovert {
		displayName = "S AI AWC-M (Black)";
	};
    class hlc_rifle_awcovert_FDE : hlc_rifle_awcovert {
		displayName = "S AI AWC-M (FDE)";
	};




//G3 

    class hlc_g3_base : Rifle_Base_F {		
		magazines[] += { __20r762_fox_mags }; 
	};
    class hlc_rifle_g3sg1ris : hlc_g3_base    {
		displayName = "AR G3/SG1";
	};
    class hlc_rifle_PSG1A1_RIS : hlc_g3_base {
		displayName = "AR PSG1A1";
	};
    class hlc_rifle_g3a3vris : hlc_rifle_g3sg1ris {
		displayName = "AR G3A3";
	};
    class hlc_rifle_g3ka4: hlc_rifle_g3a3vris {
		displayName = "AR G3KA4 RAS";
	};
    class HLC_Rifle_g3ka4_GL : hlc_rifle_g3ka4 {
		displayName = "AR G3KA4 GL";
	};
    class hlc_rifle_hk53RAS : hlc_g3_base {
		displayName = "AR HK53";
	};
    class hlc_rifle_hk33a2RIS : Rifle_Base_F {
		displayName = "AR HK33A2";
		magazines[] += { __30r556_fox_mags }; 
	};
    class hlc_rifle_hk33a2RIS_GL : hlc_rifle_hk33a2RIS     {
		displayName = "AR HK33A2 GL";
	};




//G36 
    class hlc_G36_base : Rifle_Base_F {		
		magazines[] += { __30r556_fox_mags }; 
	};
    class hlc_rifle_G36C : hlc_G36_base {
		displayName = "AR AG36C";
	};
    class hlc_rifle_G36V : hlc_G36_base {		
		displayName = "AR G36V";
	};
    class hlc_rifle_G36KV : hlc_rifle_G36V {		
		displayName = "AR G36KV";
	};
	class hlc_rifle_G36VAG36 : hlc_rifle_G36V {
		displayName = "AR G36V GL";
	};
    class HLC_Rifle_G36KSKAG36 : hlc_rifle_G36KV    {
		displayName = "AR G36K GL";
	};
    class hlc_rifle_G36TAC : hlc_rifle_G36V {
		displayName = "AR G36VT";
	};
    class hlc_rifle_g36KTac : hlc_rifle_G36KV {
		displayName = "AR G36KVT";
	};
    class hlc_rifle_G36CTac : hlc_rifle_G36C {		
		displayName = "AR G36CV";
	};

		
		
		
//m60e4

    class hlc_M60e4_base : Rifle_Base_F {		
		magazines[] += { __150belt762_fox_mags }; 
	};
		
	
    class hlc_lmg_M60E4 : hlc_M60e4_base {
		displayName = "HMG M60E4";
	};
    class hlc_lmg_m60 : hlc_M60e4_base {
		displayName = "HMG M60";
	};


//mp5
    class hlc_MP5_base : Rifle_Base_F {	
		magazines[] += { __smg9mm_fox_mags }; 
	};
    class hlc_smg_MP5N : hlc_Mp5_base {	
		displayName = "SMG MP5N";
	};
    class hlc_smg_9mmar : hlc_smg_MP5N {
		displayName = "SMG MP5N '9MMAR'";
	};
    class hlc_smg_mp5a4 : hlc_Mp5_base {
		displayName = "SMG MP5A4";
	};
    class hlc_smg_mp510 :Rifle_Base_F {
		magazines[] += { __smg45_fox_mags }; 	
		displayName = "SMG MP5/10";
	};
	class hlc_smg_mp5sd6 : hlc_Mp5_base {
		displayName = "SMG MP5SD6 9mm";
	};




//saw
	class hlc_saw_base: Rifle_Base_F {		
		magazines[] += { __200belt556_fox_mags }; 
	};
	class hlc_lmg_minimipara_railed: hlc_saw_base	{
		displayName = "LMG FN Minimi Para (S/RIS)";
	};
	class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara_railed	{
		displayName = "LMG FN Minimi Para (L/RIS)";
	};
	class hlc_lmg_M249E1: hlc_lmg_minimipara_railed	{
		displayName = "LMG M249E1";
	};
	class hlc_m249_pip4: hlc_lmg_minimipara_long_railed	{
		displayName = "LMG M249 PIP(L/VFG)";
	};
	class hlc_lmg_mk46: hlc_lmg_minimipara_long_railed	{
		displayName = "LMG Mk.46 Mod.0";
	};
	class hlc_lmg_mk46mod1: hlc_lmg_mk46	{
		displayName = "LMG Mk.46 Mod.1";
	};
	class hlc_lmg_mk48: Rifle_Base_F	{
		magazines[] += { __150belt762_fox_mags }; 
		displayName = "HMG Mk.48 Mod.0";
	};
	class hlc_lmg_mk48mod1: hlc_lmg_mk48	{
		displayName = "HMG Mk.48 Mod.1";
	};



	/*
	handguns
	class hgun_ACPC2_F : Pistol_Base_F
	class hgun_ACPC2_snds_F : hgun_ACPC2_F
	class hgun_P07_F : Pistol_Base_F
	class hgun_P07_snds_F : hgun_P07_F
	class hgun_Pistol_heavy_01_F : Pistol_Base_F
	class hgun_Pistol_heavy_01_snds_F : hgun_Pistol_heavy_01_F
	class hgun_Pistol_heavy_01_MRD_F : hgun_Pistol_heavy_01_F
	class hgun_Pistol_heavy_02_F : Pistol_Base_F
	class hgun_Pistol_heavy_02_Yorris_F : hgun_Pistol_heavy_02_F
	class hgun_Rook40_F : Pistol_Base_F
	class hgun_Rook40_snds_F : hgun_Rook40_F
	class hgun_P07_khk_F : hgun_P07_F
	class hgun_P07_khk_Snds_F : hgun_P07_khk_F
	class hgun_Pistol_01_F : Pistol_Base_F
	*/
};	