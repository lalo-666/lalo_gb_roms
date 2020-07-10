#include <gb/gb.h>
#include <stdio.h>
#include "dogtotal.c"
#include "dogtiles.c"

void main(){



set_bkg_data(0, 26, dogtiles);
set_bkg_tiles(0, 0, 20, 18, dogtotal);
SHOW_BKG;
DISPLAY_ON;


    

}