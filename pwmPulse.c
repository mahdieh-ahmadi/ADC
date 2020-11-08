#include <mega16.h>
#include <delay.h>
#include <alcd.h>

void pwmPulse(int x){
    float y;
    int duty;
    
   y = (x*100)/1024 ;  
   duty = (203*y)/8-(203/8)+26;  
   OCR0=duty; 
}