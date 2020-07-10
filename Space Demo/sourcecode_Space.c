#include <gb/gb.h>
#include <stdio.h>

#include "space.c"
#include "spacetile.c"

#include "dogtotal.c"
#include "dogtiles.c"

void main(){
    UINT8 current_sprite_index = 0;
   
    int I = 0;

    for(I = 0; I < 31; I++ ){
    delay(200);
    printf(" raro~Soft ");
    }
       for(I = 0; I < 49; I++ ){
    printf("\n");
    }
    
    for(I = 0; I < 49; I++ ){
    printf("\n");
    }
    
    printf("Made by             Eduardo Reyes ");
    for(I = 0; I < 4; I++){
          delay(200);
    printf("\n\n\n\n\n\n\n");
    }
    
    
    set_bkg_data(0, 44, spacetile);
    set_bkg_tiles(0, 0, 40, 36, space);
    SHOW_BKG;
    DISPLAY_ON;
        
     while(3){
        switch(joypad()){ 
            delay(10);
            case J_RIGHT: 
            scroll_bkg(2,0);
            break;
            case J_LEFT: 
            scroll_bkg(-2,0);
            break;
            case J_DOWN: 
            scroll_bkg(0,2);
            break;
            case J_UP: 
            scroll_bkg(0,-2);
            break;
            }
        delay(100);
        scroll_bkg(-1, 1);
      
        
        
  
    }
}