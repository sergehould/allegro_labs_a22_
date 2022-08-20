/******************************************************************************
 * FileName:	main.c
 *
 * Name:	Lab1, Introduction to the Allegro library
 *
 * Description: To complete ...
 *
 * REVISION HISTORY:
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * Author  	Date                	Comments on this revision
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * SH      	May 28 2020  	v1.0.0      	To complete...
 *
 *
 *
 *****************************************************************************/

#include <allegro.h>
#include <stdio.h>

#define     BG_COLOR    0x001F90

int main(void) {
    int count=0;
	allegro_init();
	set_color_depth(24);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	install_keyboard();
	set_keyboard_rate(500, 600);
	clear_to_color(screen, BG_COLOR);
    textprintf_ex(screen,font, 1, 1,0X00FF00, BG_COLOR,  "Hello World!");
    textprintf_ex(screen,font, 1, 20,0X00FF00, BG_COLOR,  "Type ESC to exit");

	while (!key[KEY_ESC]){
        textprintf_ex(screen,font, 320, 240,0X00FF00, BG_COLOR,  "count %d", count++);
        rest(500); // blocks for a delay of 500 mS
	}
	allegro_exit();
	return 0;
}
END_OF_MAIN()
