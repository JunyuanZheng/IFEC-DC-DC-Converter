#include "DSP28x_Project.h"
#include "C28x_FPU_FastRTS.h"
#include "CLLC_Function.h"
#include "CLLC_Parameter.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//全局变量
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLLC_ADC.c有关变量
Uint16 AdcResults[3]; //ADC结果储存
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLLC_EPwm.c有关量
Uint16 Flag_PWMEnable; //控制PWM发送，初始频率，死区
float32 Freq;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLLC_Main.c有关量
Uint16 mode;
float32 HighVol,HighCur,LowCur,LowVol; //升压给定值，反馈值
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CLLC_SupportCalculate.c有关量
Uint16 Flag_Start;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//参数初始化
void InitParameter(void)
{
	Freq=150;
	Flag_PWMEnable=0;
	Flag_Start=0;
	mode=0;
}
