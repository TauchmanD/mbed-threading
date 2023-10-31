#include "lcd_threading.h"

void lcd_thread(){
    while (1) {
        BSP_LCD_Clear(LCD_COLOR_BLACK);
        BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
        BSP_LCD_SetBackColor(LCD_COLOR_WHITE);

        BSP_LCD_DisplayStringAt(0, 1, (uint8_t *)"AMOGUS", CENTER_MODE);
        HAL_Delay(2000);

        BSP_LCD_DisplayStringAt(0, 100, (uint8_t *)"SUS", CENTER_MODE);
        HAL_Delay(2000);

      
        HAL_Delay(2000);


        BSP_LCD_DisplayStringAt(0, 200, (uint8_t *)"TUTUTUTUTUTUTUTUDUDU", CENTER_MODE);
        HAL_Delay(2000);
    }
}

void led_thread(DigitalOut *led){
    while(1){
        *led=!*led;
        ThisThread::sleep_for(500ms);
    }
}
void button_check(InterruptIn *btn){  
    while(1){
        if(btn->read()){
            BSP_LCD_Clear(LCD_COLOR_BLACK);
        BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
        BSP_LCD_SetBackColor(LCD_COLOR_WHITE);

        BSP_LCD_DisplayStringAt(0, 1, (uint8_t *)"ZMACKNUTO", CENTER_MODE);
        }
    }
}