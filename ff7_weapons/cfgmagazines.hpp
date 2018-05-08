//(30Rnd 9mm) :
#define __smg9mm_fox_mags "ff7_ammo_smg9mm_dud" , "ff7_ammo_smg9mm_sub"
//(30Rnd .45) :
#define __smg45_fox_mags "ff7_ammo_smg45_dud" 
//(30Rnd 5.45mm) :
#define __30r545ak_fox_mags "ff7_ammo_30r545ak_dud" 
//(20Rnd 5.56mm dual) :
#define __556water_fox_mags "ff7_ammo_556water_dud" 
//(30Rnd 5.56mm) :
#define __30r556_fox_mags "ff7_ammo_30r556_dud" 
//(150Rnd 5.56mm) :
#define __150belt556_fox_mags "ff7_ammo_150belt556_dud" 
//(200Rnd 5.56mm) :
#define __200belt556_fox_mags "ff7_ammo_200belt556_dud" 
//(30Rnd 5.8mm) :
#define __30r58_fox_mags "ff7_ammo_30r58_dud" 
//(100Rnd 5.8mm) :
#define __100belt58_fox_mags "ff7_ammo_100belt58_dud" 
//(20rnd 6.5mm) :
#define __20r65_fox_mags "ff7_ammo_20r65_dud" 
//(30Rnd 6.5mm) :
#define __30r65_fox_mags "ff7_ammo_30r65_dud" 
//(30Rnd 6.5mm Caseless) :
#define __30r65c_fox_mags "ff7_ammo_30r65c_dud" 
//(100Rnd 6.5mm) :
#define __100belt65_fox_mags "ff7_ammo_100belt65_dud" 
//(200Rnd 6.5mm)  :
#define __200belt65_fox_mags "ff7_ammo_200belt65_dud" 
//(10Rnd 7.62mm) :
#define __10r762_fox_mags "ff7_ammo_10r762_dud" 
//(20Rnd 7.62mm) :
#define __20r762_fox_mags "ff7_ammo_20r762_dud" 
//(30Rnd 7.62mm) :
#define __30r762ak_fox_mags "ff7_ammo_30r762ak_dud" 
//(150Rnd 7.62mm) :
#define __150belt762_fox_mags "ff7_ammo_150belt762_dud" 
//(10Rnd .338) :
#define __10r338_fox_mags "ff7_ammo_10r338_dud"
//(130Rnd .338) :
#define __130belt338_fox_mags "ff7_ammo_130belt338_dud"
//(10Rnd 9.3mm) :
#define __10r93_fox_mags "ff7_ammo_10r93_dud" 
//(150Rnd 9.3mm) :
#define __150belt93_fox_mags "ff7_ammo_150belt93_dud"
//(7Rnd .408) :
#define __7r408_fox_mags "ff7_ammo_7r408_dud" 
//(5Rnd 12.7mm) :
#define __5r127_fox_mags "ff7_ammo_5r127_dud" 
//(10Rnd 12.7mm) :
#define __10r127_fox_mags "ff7_ammo_10r127_dud" 
//(30rnd .300)
#define __30r300_fox_mags "ff7_ammo_30r300_dud"




class CfgMagazines {
    class 30Rnd_556x45_Stanag;
//displayname =  "<Caliber> <Round> <Capacity> <Container/Gun> (<Tracers> every <rate>)"

/*
Further musings
45.38g=1 mass - mags

21.8g=1 mass - bigger

M80 Ball = 25.4G
M855 Ball = 12.31G
6.8mm SPC - @19.5G
Pmag - 160
9x19mm M882 - 12.7
FAL mag = 250g

FAL mag = 250g*/

//#############################(30Rnd 9mm) 


	class ff7_ammo_smg9mm_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 9mm 30rnd";
        displayname = "Blanks 9mm 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class ff7_ammo_smg9mm_sub : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Dud example 2";
        displayname = "Dud example 2";
        initspeed = 0;
        mass = 0; //+1 mass over EPR for ever 30
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
	

//#############################(30Rnd .45) 

	class ff7_ammo_smg45_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks .45 30rnd";
        displayname = "Blanks .45 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(30Rnd 5.45mm for AK) 

	class ff7_ammo_30r545ak_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 5.45 30rnd";
        displayname = "Blanks 5.45 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(20Rnd 5.56mm dual underwater) 

	class ff7_ammo_556water_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 20;
        descriptionshort = "Blanks 5.56 20rnd";
        displayname = "Blanks 5.56 20rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };




//#############################(30Rnd 5.56mm) 

	class ff7_ammo_30r556_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 5.56 30rnd";
        displayname = "Blanks 5.56 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(150Rnd 5.56mm) 
	class ff7_ammo_150belt556_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 150;
        descriptionshort = "Blanks 5.56 150rnd";
        displayname = "Blanks 5.56 150rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(200Rnd 5.56mm) 
	class ff7_ammo_200belt556_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 200;
        descriptionshort = "Blanks 5.56 200rnd";
        displayname = "Blanks 5.56 200rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(30Rnd 5.8mm) 
	class ff7_ammo_30r58_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 5.8 30rnd";
        displayname = "Blanks 5.8 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(100Rnd 5.8mm) 

	class ff7_ammo_100belt58_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 100;
        descriptionshort = "Blanks 5.8 100rnd";
        displayname = "Blanks 5.8 100rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(20rnd 6.5mm) 

	class ff7_ammo_20r65_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 20;
        descriptionshort = "Blanks 6.5 20rnd";
        displayname = "Blanks 6.5 20rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(30Rnd 6.5mm) 

	class ff7_ammo_30r65_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 6.5 30rnd";
        displayname = "Blanks 6.5 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(30Rnd 6.5mm Caseless for katiba) 

	class ff7_ammo_30r65c_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 6.5c 30rnd";
        displayname = "Blanks 6.5c 30rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(100Rnd 6.5mm) 

	class ff7_ammo_100belt65_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 100;
        descriptionshort = "Blanks 6.5 100rnd";
        displayname = "Blanks 6.5 100rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(200Rnd 6.5mm) 

	class ff7_ammo_200belt65_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 200;
        descriptionshort = "Blanks 6.5 200rnd";
        displayname = "Blanks 6.5 200rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(10Rnd 7.62mm) 

	class ff7_ammo_10r762_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 10;
        descriptionshort = "Blanks 7.62 10rnd";
        displayname = "Blanks 7.62rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(20Rnd 7.62mm) 

	class ff7_ammo_20r762_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 20;
        descriptionshort = "Blanks 7.62 20rnd";
        displayname = "Blanks 7.62 20rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };



//#############################(30Rnd 7.62mm for the AK) 

	class ff7_ammo_30r762ak_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 30;
        descriptionshort = "Blanks 7.62 ak";
        displayname = "Blanks 7.62 ak";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(150Rnd 7.62mm) 

	class ff7_ammo_150belt762_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 150;
        descriptionshort = "Blanks 7.62 150rnd";
        displayname = "Blanks7.62 150rnd";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(10Rnd .338) 

	class ff7_ammo_10r338_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 10;
        descriptionshort = "Blanks .338";
        displayname = "Blanks .338";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(130Rnd .338) 

	class ff7_ammo_130belt338_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 130;
        descriptionshort = "Blanks .338";
        displayname = "Blanks .338";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(10Rnd 9.3mm) 

	class ff7_ammo_10r93_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 10;
        descriptionshort = "Blanks 9.3";
        displayname = "Blanks 9.3";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(150Rnd 9.3mm) 

	class ff7_ammo_150belt93_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 150;
        descriptionshort = "Blanks 9.3";
        displayname = "Blanks 9.3";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(7Rnd .408) 

	class ff7_ammo_7r408_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 7;
        descriptionshort = "Blanks 408";
        displayname = "Blanks 408";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };

 
//#############################(5Rnd 12.7mm) 

	class ff7_ammo_5r127_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 5;
        descriptionshort = "Blanks 127";
        displayname = "Blanks 127";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };


//#############################(10Rnd 12.7mm) 

	class ff7_ammo_10r127_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 10;
        descriptionshort = "Blanks 127";
        displayname = "Blanks 127";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
	
	
	
//############################(30Rnd .300)


	class ff7_ammo_30r300_dud : 30Rnd_556x45_Stanag{
        ammo = "ff7_blank";
        count = 10;
        descriptionshort = "Blanks 127";
        displayname = "Blanks 127";
        initspeed = 0;
        mass = 0;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "Blanks";
        //picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
	
	
	
	
	
	
	
	
	
	
};