#include <Arduino.h>

#include "max7219.h"

#ifdef SUPPORT_SCROLLING

#define PARALLAX_FONT_SIZE 512

byte parallax_font[PARALLAX_FONT_SIZE] = {
	56,68,154,162,154,68,56,0,96,112,120,108,126,99,97,0,112,108,100,124,102,99,126,0,48,104,96,96,96,113,
	30,0,112,120,108,102,99,99,126,0,56,96,96,124,96,112,31,0,28,48,48,62,48,48,48,0,24,52,96,96,102,115,
	30,0,108,108,102,126,99,99,99,0,16,16,24,24,28,28,28,0,126,24,12,6,99,99,62,0,100,108,120,112,120,110,
	99,0,64,64,96,96,112,112,127,0,100,108,126,122,107,99,99,0,108,108,118,118,107,103,99,0,28,46,102,99,99,115,
	30,0,56,54,51,51,62,48,48,0,28,46,102,99,101,114,29,0,112,108,102,124,120,108,99,0,48,104,96,60,3,115,
	62,0,126,108,12,6,6,7,7,0,108,108,102,102,99,115,62,0,102,102,102,54,54,30,12,0,108,102,102,107,107,127,
	50,0,108,108,56,60,102,99,99,0,102,102,54,60,28,12,12,0,124,108,24,48,48,96,127,0,60,48,48,24,24,24,
	30,0,12,18,48,124,48,98,252,0,60,12,12,6,6,6,30,0,0,24,60,126,24,24,24,24,0,16,48,127,127,48,
	16,0,0,0,0,0,0,0,0,0,14,14,12,8,8,32,48,0,102,102,34,0,0,0,0,0,108,108,127,54,127,27,
	27,0,24,62,96,60,6,124,24,0,102,110,12,24,48,115,99,0,60,102,60,56,103,102,63,0,12,12,24,0,0,0,
	0,0,12,24,48,48,24,12,6,0,48,24,12,6,6,12,24,0,0,102,60,12,30,51,0,0,0,24,24,127,12,12,
	0,0,0,0,0,0,0,24,24,8,0,0,0,127,112,0,0,0,0,0,0,0,0,24,24,0,0,6,12,24,24,48,
	96,0,127,99,99,99,115,115,127,0,24,24,24,28,28,28,28,0,127,115,3,127,96,112,127,0,127,115,3,30,3,119,
	127,0,96,96,112,118,127,14,14,0,127,96,112,127,3,115,127,0,127,103,112,127,99,115,127,0,127,115,3,3,7,7,
	7,0,127,99,115,62,99,115,127,0,127,99,115,127,3,115,127,0,0,0,24,24,0,12,12,0,0,0,24,24,0,12,
	12,4,14,24,48,48,24,12,7,0,0,127,112,0,127,112,0,0,112,24,14,7,6,12,56,0,30,39,3,14,24,32,
	48,24
};

#endif
