[YellowBeanSprout](https://github.com/KitSprout/YellowBeanSprout)
========
* Author  : [Hom](https://github.com/Hom-Wang)
* Version : v1.2
* Update  : 2015/12/07

Description
========
YellowBeanSprout 是一個 STM32F446R 的開發板，採用 ARM Cortex-M4F CPU，工作時脈 180MHz，板子上有SD卡、LED、按鍵、FFCSPI ... 等資源，並將沒使用到的 I/O 全部拉出到排針接口，方便實驗。

License
========
* 硬體(Hardware)採用 [CC BY-SA 4.0](http://creativecommons.org/licenses/by-sa/4.0/deed.zh_TW) 方式授權 
  
　　<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/deed.zh_TW"><img alt="創用 CC 授權條款" style="border-width:0" src="http://i.creativecommons.org/l/by-sa/3.0/tw/80x15.png" /></a>  
　　<span xmlns:dct="http://purl.org/dc/terms/" property="dct:title"> YellowBeanSprout v1.0 </span>由<a xmlns:cc="http://creativecommons.org/ns#" href="https://github.com/KitSprout" property="cc:attributionName" rel="cc:attributionURL"> KitSprout </a>製作，以<a rel="license" href="http://creativecommons.org/licenses/by-sa/4.0/deed.zh_TW"> 創用CC 姓名標示-相同方式分享 4.0 國際 授權條款 </a>釋出。  


* 軟體(Software)採用 [MIT License](http://opensource.org/licenses/MIT) 方式授權  

Hardware
========
* 控制器　 : [STM32F446R](http://www.st.com/web/catalog/mmc/FM141/SC1169/SS1577/LN1875) 64Pin 180MHz
* PCB 尺寸 : 25.4 * 43.18mm
* 設計軟體 [Altium Designer 15](http://www.altium.com/en/products/altium-designer) ( PcbLib use AD [PcbLib v1.6](https://github.com/KitSprout/AltiumDesigner_PcbLibrary/releases/tag/v1.6) )  

Software
========
* [BSY_ModuleHAL_MPU9250-SPI](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_ModuleHAL_MPU9250-SPI) ... MPU9250 SPI 讀取範例
* [BSY_ModuleHAL_MPU9255-SPI](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_ModuleHAL_MPU9255-SPI) ... MPU9255 SPI 讀取範例
* [BSY_ModuleHAL_TFT2.2](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_ModuleHAL_TFT2.2) ... [TFT2.2-inch](https://github.com/KitSprout/TFT_2.2-inch) 範例
* [BSY_ModuleHAL_TFT2.2-WF](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_ModuleHAL_TFT2.2-WF) ... [TFT2.2-inch](https://github.com/KitSprout/TFT_2.2-inch) 示波器範例
* [BSY_PeripheralHAL_ADC](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_ADC) ... ADC 讀取範例
* [BSY_PeripheralHAL_DAC](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_DAC) ... DAC 輸出範例
* [BSY_PeripheralHAL_CRC](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_CRC) ... CRC32 範例
* [BSY_PeripheralHAL_EXTI](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_EXTI) ... EXIT 外部中斷範例
* [BSY_PeripheralHAL_FLASH](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_FLASH) ... FLASH 讀寫範例
* [BSY_PeripheralHAL_GPIO](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_GPIO) ... GPIO 輸入輸出範例
* [BSY_PeripheralHAL_PWR](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_PWR) ... 睡眠範例
* [BSY_PeripheralHAL_TIM](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_TIM) ... TIM-Base 計時中斷範例
* [BSY_PeripheralHAL_TIM-PWM](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_TIM-PWM) ... TIM-PWM 輸出範例
* [BSY_PeripheralHAL_UART](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_UART) ... UART 傳輸範例
* [BSY_PeripheralHAL_UART-IntRecv](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_PeripheralHAL_UART-IntRecv) ... UART 中斷範例
* [BSY_FreeRTOS_Peripheral_GPIO](https://github.com/KitSprout/YellowBeanSprout/tree/master/Software/BSY_FreeRTOS_Peripheral_GPIO) ... FreeRTOS GPIO 範例

Related Documents
========
* [Google Drive](https://goo.gl/jY9T3I)

View
========
<img src="https://lh3.googleusercontent.com/-a6p-hFY2NtM/Vglsn3AxnxI/AAAAAAAAOGY/REeJanpPXnE/s1200-Ic42/DSC_0032.jpg" />
<img src="https://lh3.googleusercontent.com/-xxDO17aMR_Q/VgubiCQzDBI/AAAAAAAAOHo/js9KSuagLqo/s1200-Ic42/DSC_0004.jpg" />

Config
========
<img src="https://lh3.googleusercontent.com/-acQQZ4D0YxM/VgryJwbgv1I/AAAAAAAAOHQ/vHanOgteBDQ/s1200-Ic42/Config_v1.2.png" />

Schematic
========
<img src="https://lh3.googleusercontent.com/-S5mc7cZ6Evw/VgZMs0_GSDI/AAAAAAAAOBY/YIZz0TqZDYU/s1200-Ic42/Sch_YellowBeanSprout_v1.2.png" />

Get it
========
[露天拍賣 Ruten in Taiwan](http://goods.ruten.com.tw/item/show?21540770783936)
