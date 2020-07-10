#include <gb/gb.h>
#include <gb/font.h>
#include <stdio.h>
#include "skull.c"
#include "tiles1.c"
#include "map1.c"
#include "windowmap.c"

void main(){
    UINT8 current_sprite_index = 0;
font_t min_font;

font_init();

min_font = font_load(font_min); //36 tiles
font_set(min_font);
    
    set_sprite_data(0, 3, skull);
    move_sprite(0, 40, 78);
    SHOW_SPRITES;
    
    set_bkg_data(37, 13, Tiles);
    set_bkg_tiles(0, 0, 40, 18, map);

    set_win_tiles(0, 0, 12, 1, windowmap); // text which can be set in file windowmap.c (use emulator to find hex codes for sprites)
    move_win(7,130);
    SHOW_BKG;
    SHOW_WIN;
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