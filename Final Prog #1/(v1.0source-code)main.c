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
    printf("  Skully~Demo_v1.0\n\n\n\n\n\n\n");
    printf("Made by             Eduardo Reyes ");
 
    
    set_sprite_data(0, 3, skull);
    set_sprite_tile(3,3);
    move_sprite(0,40,78);
    SHOW_SPRITES;
  

    while(3){
        if(current_sprite_index == 0){
            current_sprite_index = 1;
        }
        if (current_sprite_index == 1){
            current_sprite_index = 2;
        }
       
        
        else
        {
            current_sprite_index = 0;
        }
        set_sprite_tile(0,current_sprite_index);
        delay(100);
        scroll_sprite(0,2,1);
  
    }
}