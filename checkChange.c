#include <mega16.h>
#include <stdio.h>
#include <delay.h>
#include <alcd.h>


extern int pre_val[8];

void checkChange(int x , int count){ 
      int y;
      char show[];                       
                   
    if(1.05*pre_val[count] < x || 0.95*pre_val[count] > x){    
     lcd_gotoxy(5,1);
                  lcd_putchar(count + '0');
        lcd_gotoxy(0,1); 
        y = 4.88*x ;
        sprintf(show ,"%3d " ,y); 
        lcd_gotoxy(0,1); 
        lcd_puts(show); 
        delay_ms(700);
        pre_val[count] = x;
    }  else delay_ms(1000);
    
    //counter++;  
    //if(counter ==8) counter = 0;
}