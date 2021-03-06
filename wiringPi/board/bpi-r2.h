// Author: Alan Chao - Institute of Network Coding - The Chinese University of Hong Kong

#define	BPI_R2_01	-1
#define	BPI_R2_03	75
#define	BPI_R2_05	76
#define	BPI_R2_07	206
#define	BPI_R2_09	-1
#define	BPI_R2_11	80
#define	BPI_R2_13	79
#define	BPI_R2_15	205
#define	BPI_R2_17	-1
#define	BPI_R2_19	56
#define	BPI_R2_21	55
#define	BPI_R2_23	54
#define	BPI_R2_25	-1
#define	BPI_R2_27	57
#define	BPI_R2_29	126
#define	BPI_R2_31	74
#define	BPI_R2_33	73
#define	BPI_R2_35	49
#define	BPI_R2_37	202
#define	BPI_R2_39	-1

#define	BPI_R2_02	-1
#define	BPI_R2_04	-1
#define	BPI_R2_06	-1
#define	BPI_R2_08	82
#define	BPI_R2_10	81
#define	BPI_R2_12	24
#define	BPI_R2_14	-1
#define	BPI_R2_16	25
#define	BPI_R2_18	21
#define	BPI_R2_20	-1
#define	BPI_R2_22	18
#define	BPI_R2_24	53
#define	BPI_R2_26	20
#define	BPI_R2_28	58
#define	BPI_R2_30	-1
#define	BPI_R2_32	72
#define	BPI_R2_34	-1
#define	BPI_R2_36	19
#define	BPI_R2_38	22
#define	BPI_R2_40	200

//map wpi gpio_num(index) to bp bpio_num(element)
int pinToGpio_BPI_R2 [64] =
{
   BPI_R2_11, BPI_R2_12,        //0, 1
   BPI_R2_13, BPI_R2_15,        //2, 3
   BPI_R2_16, BPI_R2_18,        //4, 5
   BPI_R2_22, BPI_R2_07,        //6, 7
   BPI_R2_03, BPI_R2_05,        //8, 9
   BPI_R2_24, BPI_R2_26,        //10, 11
   BPI_R2_19, BPI_R2_21,        //12, 13
   BPI_R2_23, BPI_R2_08,        //14, 15
   BPI_R2_10,        -1,        //16, 17
          -1,        -1,        //18, 19
          -1, BPI_R2_29,        //20, 21
   BPI_R2_31, BPI_R2_33,        //22, 23
   BPI_R2_35, BPI_R2_37,        //24, 25
   BPI_R2_32, BPI_R2_36,        //26, 27
   BPI_R2_38, BPI_R2_40,        //28. 29
   BPI_R2_27, BPI_R2_28,        //30, 31
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // ... 47
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 // ... 63
} ;

//map bcm gpio_num(index) to bp gpio_num(element)
int pinTobcm_BPI_R2 [64] =
{
  BPI_R2_27, BPI_R2_28,  //0, 1
  BPI_R2_03, BPI_R2_05,  //2, 3
  BPI_R2_07, BPI_R2_29,  //4, 5
  BPI_R2_31, BPI_R2_26,  //6, 7
  BPI_R2_24, BPI_R2_21,  //8, 9
  BPI_R2_19, BPI_R2_23,  //10, 11
  BPI_R2_32, BPI_R2_33,  //12, 13
  BPI_R2_08, BPI_R2_10,  //14, 15
  BPI_R2_36, BPI_R2_11,  //16, 17
  BPI_R2_12, BPI_R2_35,	 //18, 19
  BPI_R2_38, BPI_R2_40,  //20, 21
  BPI_R2_15, BPI_R2_16,  //22, 23
  BPI_R2_18, BPI_R2_22,  //24, 25
  BPI_R2_37, BPI_R2_13,  //26, 27
  -1, -1,
  -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // ... 47
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 // ... 63
} ;

//map phys_num(index) to bp gpio_num(element)
int physToGpio_BPI_R2 [64] =
{
          -1,                //0
          -1,        -1,     //1, 2
   BPI_R2_03,        -1,     //3, 4
   BPI_R2_05,        -1,     //5, 6
   BPI_R2_07, BPI_R2_08,     //7, 8
          -1, BPI_R2_10,     //9, 10
   BPI_R2_11, BPI_R2_12,     //11, 12
   BPI_R2_13,        -1,     //13, 14
   BPI_R2_15, BPI_R2_16,     //15, 16
          -1, BPI_R2_18,     //17, 18
   BPI_R2_19,        -1,     //19, 20
   BPI_R2_21, BPI_R2_22,     //21, 22
   BPI_R2_23, BPI_R2_24,     //23, 24
          -1, BPI_R2_26,     //25, 26
   BPI_R2_27, BPI_R2_28,     //27, 28
   BPI_R2_29,        -1,     //29, 30
   BPI_R2_31, BPI_R2_32,     //31, 32      
   BPI_R2_33,        -1,     //33, 34
   BPI_R2_35, BPI_R2_36,     //35, 36
   BPI_R2_37, BPI_R2_38,     //37, 38
          -1, BPI_R2_40,     //39, 40
   -1,   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, //41-> 55
   -1,   -1, -1, -1, -1, -1, -1, -1 // 56-> 63
} ;

#define R2_I2C_DEV             "/dev/i2c-0"
#define R2_SPI_DEV             "/dev/spidev0.0"

#define R2_I2C_OFFSET  2 // !!!!!!!!!!!!!! Copy from M3, don't know which num for R2
#define R2_SPI_OFFSET  3 // !!!!!!!!!!!!!! Copy from M3, don't know which num for R2
#define R2_PWM_OFFSET  2 // !!!!!!!!!!!!!! Copy from M3, don't know which num for R2
