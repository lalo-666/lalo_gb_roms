#include <gb/gb.h>
#include <stdio.h>

#include "skull.c"

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
    printf("\n\n\n\n\n\n\n");
    printf("    Skully~Demo\n\n\n\n\n\n\n");
    printf("Made by             Eduardo Reyes ");
    
    
    set_sprite_data(0, 3, skull);
    set_sprite_tile(3,3);
    move_sprite(0,40,78);
    SHOW_SPRITES;
  

    while(3){
        switch(joypad()){ 
            case J_RIGHT: 
            scroll_sprite(0,5,0);
            break;
            case J_LEFT: 
            scroll_sprite(0,-5,0);
            break;
            case J_DOWN: 
            scroll_sprite(0,0,5);
            break;
            case J_UP: 
            scroll_sprite(0,0,-5);
            break;
            }

        
      
        delay(70);
        
  
    }
}