#include <gb/gb.h>
#include <stdio.h>
#include "skull.c"
#include "tiles1.c"
#include "map1.c"

void main(){
    UINT8 current_sprite_index = 0;
    /*int I = 0;

    for(I = 0; I < 31; I++ ){
    delay(200);
    printf(" raro~Soft ");
    }
       for(I = 0; I < 49; I++ ){
    printf("\n");
    }
     printf("\n\n\n\n\n\n\n");
    printf(" Skully~Demo_v1.2\n\n\n\n\n\n\n");
    printf("Made by             Eduardo Reyes ");
    for(I = 0; I < 4; I++){
          delay(200);
    printf("\n\n\n\n\n\n\n");
    }
*/
  //Cannot get scrolling screen to work with back ground.
  //Cannot get text to appear with background. 
    set_sprite_data(0, 3, skull);
    set_sprite_tile(2,3);
    move_sprite(0, 40, 78);
    SHOW_SPRITES;
    
    set_bkg_data(0, 13, Tiles);
    set_bkg_tiles(0, 0, 40, 18, map);
    SHOW_BKG;
    DISPLAY_ON;
        
   
    

    while(3){
        switch(joypad()){ 
            case J_RIGHT: 
            scroll_sprite(0,2,0);
            scroll_bkg(10,0);
            break;
            case J_LEFT: 
            scroll_sprite(0,-2,0);
            scroll_bkg(-10,0);
            break;
            case J_DOWN: 
            scroll_sprite(0,0,2);
            break;
            case J_UP: 
            scroll_sprite(0,0,-2);
            break;
            }

        
      
        delay(70);
        
  
    }
}