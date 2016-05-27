/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f4_system.h"

#include "beanSproutY.h"
/*====================================================================================================*/
/*====================================================================================================*/
void KEY_WU_extiEven( void )
{
  LED_B_Toggle();
}

void KEY_BO_extiEven( void )
{
  LED_R_Toggle();
}

void BSY_Init( void )
{
  SystemInit();
  HAL_InitTick();

  BSY_GPIO_Config();
  BSY_EXTI0_Config(KEY_WU_extiEven);
  BSY_EXTI2_Config(KEY_BO_extiEven);
}
/*====================================================================================================*/
/*====================================================================================================*/
void BSY_Loop( void )
{
  while(1) {
    LED_G_Toggle();
    delay_ms(200);
  }
}
/*====================================================================================================*/
/*====================================================================================================*/