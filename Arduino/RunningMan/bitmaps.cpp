#include "bitmaps.h"


// Main character image for animation (24x24)
PROGMEM const unsigned char IMG_char_run1[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x00,0x39,0x00,0x00,0x44,0x80,0x00,0x83,0xc0,0x00,0x82,0x60,0x07,0x1f,0xa0,
0x19,0x20,0x20,0x39,0x46,0xa0,0x7c,0xc6,0xac,0x7c,0xc0,0x3f,0x7a,0x6f,0x5f,0x7a,0x20,0xbf,0x72,0x1f,0x1e,0x1a,0x01,0x04,
0x3e,0x02,0x88,0x73,0x04,0x70,0x61,0x82,0x00,0x70,0x61,0x00,0x78,0xa1,0x00,0x07,0x3f,0x80,0x00,0x7f,0xc0,0x00,0x7f,0xc0
}; 

PROGMEM const unsigned char IMG_char_run2[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1d,0x80,0x00,0x22,0x40,0x00,0x41,0xe0,0x00,0x4f,0x20,0x00,0x90,0xe0,0x00,0x90,0x10,
0x01,0xa3,0x50,0x02,0x43,0x50,0x04,0x40,0x10,0x08,0x27,0xa0,0x08,0x90,0x40,0x04,0x4f,0xc0,0x04,0x30,0xe0,0x02,0xf9,0xe0,
0x01,0xfb,0xc0,0x00,0xf5,0x00,0x00,0x65,0x00,0x00,0xc6,0x00,0x01,0x04,0x00,0x03,0x88,0x00,0x03,0xf8,0x00,0x01,0xfc,0x00
}; 

PROGMEM const unsigned char IMG_char_run3[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x0e,0x40,0x00,0x11,0x20,0x00,0x20,0xf0,0x00,0x20,0x88,0x00,0x40,0x68,
0x00,0x40,0x08,0x01,0xc1,0xa8,0x06,0x21,0xa8,0x0e,0x10,0x08,0x1f,0x23,0xd0,0x1f,0xc0,0x38,0x1f,0x61,0xfc,0x0e,0x90,0x7c,
0x1b,0x88,0x7c,0x39,0x07,0xf8,0x78,0x00,0x40,0x78,0x38,0x20,0x3c,0x44,0x20,0x03,0x86,0x70,0x00,0x0f,0xf8,0x00,0x0f,0xf8
}; 

PROGMEM const unsigned char IMG_char_jump[] = {
0x60,0x72,0x06,0xf0,0x89,0x0f,0xf9,0x07,0x9f,0xf9,0x04,0x5f,0xf6,0x3b,0x6f,0x62,0x40,0x46,0x22,0x8d,0x44,0x11,0x8d,0x48,
0x09,0x80,0x50,0x04,0x8e,0xa0,0x02,0x5f,0x40,0x02,0x2e,0x40,0x01,0x00,0x80,0x01,0x00,0x80,0x01,0x00,0xe0,0x01,0xff,0x10,
0x01,0xfe,0x38,0x01,0x3c,0x48,0x01,0x0f,0x88,0x01,0x10,0x9c,0x01,0x30,0xfe,0x01,0xf0,0xfe,0x01,0xf8,0x3c,0x00,0xf8,0x00
}; 

PROGMEM const unsigned char IMG_char_fire[] = {
0x00,0x38,0x00,0x00,0xe4,0x00,0x01,0x12,0x00,0x02,0x0f,0x00,0x02,0x08,0x80,0x04,0x76,0x80,0x04,0x80,0x80,0x05,0x1a,0x80,
0x03,0x1a,0x80,0x03,0xc0,0x80,0x04,0x3f,0xe0,0x08,0x04,0x78,0x08,0x08,0xf8,0x08,0xc8,0x78,0x08,0x3f,0xe0,0x04,0x4a,0x00,
0x06,0x6c,0x00,0x04,0x28,0x00,0x0e,0x30,0x00,0x1f,0xe0,0x00,0x1f,0xc0,0x00,0x0f,0xe0,0x00,0x07,0xe0,0x00,0x00,0x00,0x00
}; 

PROGMEM const unsigned char IMG_char_die[] = {
0x00,0x00,0x00,0x00,0x0c,0x00,0x00,0x72,0x00,0x00,0x89,0x00,0x01,0x07,0x80,0x01,0x04,0x40,0x02,0x3b,0x40,0x0e,0x40,0x70,
0x32,0x80,0x4c,0x51,0x9d,0xce,0x91,0x80,0x4f,0xcc,0x8e,0xbf,0xf2,0x5f,0x4f,0xf2,0x2e,0x79,0x61,0x00,0x06,0x01,0x08,0x1f,
0x01,0x04,0x3f,0x01,0x83,0x7f,0x01,0x01,0x9f,0x01,0x01,0xee,0x00,0x8b,0xf0,0x00,0x7f,0xf0,0x00,0x03,0xe0,0x00,0x00,0x00
}; 

PROGMEM const unsigned char* char_anim[] = {
  IMG_char_run1, IMG_char_run2, IMG_char_run3, IMG_char_jump, IMG_char_fire, IMG_char_die
};


// Enemy image
PROGMEM const unsigned char IMG_enemy[] = {
0x3f,0xfc,0x7f,0xfe,0xff,0xff,0xff,0xff,0xc7,0xe3,0xc7,0xe3,0xc7,0xe3,0xfe,0x7f,
0x7e,0x7e,0x1e,0x78,0x1e,0x78,0x1f,0xf8,0x1f,0xf8,0x0f,0xf0,0x05,0xa0,0x02,0x40
}; 

PROGMEM const unsigned char IMG_enemy_die[] = {
0x1e,0x30,0x1e,0x30,0xe2,0x30,0x63,0xfe,0x43,0xe2,0x47,0xe3,0xc7,0xe3,0xfe,0x1f,
0x7e,0x1e,0x1e,0x18,0x02,0x78,0x03,0x88,0x03,0x88,0x0f,0x80,0x05,0xa0,0x02,0x40
}; 

PROGMEM const unsigned char* enemy_anim[] = {
  IMG_enemy, IMG_enemy_die
};


// Start up image
PROGMEM const unsigned char arduino [] = {
0x3F, 0xFF, 0xFF, 0xFC, 0x40, 0x00, 0x00, 0x02, 0x89, 0x99, 0x54, 0x91, 0x95, 0x55, 0x56, 0xA9,
0x9D, 0x95, 0x55, 0xA9, 0x95, 0x59, 0xD4, 0x91, 0x40, 0x00, 0x00, 0x02, 0x3F, 0xFF, 0xFF, 0xFC
};

// Main screen
PROGMEM const unsigned char nightrun [] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xff,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xff,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xff,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x3f,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x3f,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x3f,0x18,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xf3,0xf8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xf3,0xf0,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf3,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf3,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xc0,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7f,0x80,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x2d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x4a,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x6a,0x80,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x8f,0xd0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x90,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0xa3,0x50,0x00,0x7c,0xcd,0x9b,0x37,0xec,0xcf,0x80,0x18,0xc6,0x33,0x00,0x00,0x3e,0x63,0x56,0x00,0x66,0xcd,0xdb,0xb1,0x8e,0xd8,0x00,0x1d,0xcf,0x3b,0x00,0x00,0x3e,0x60,0x1f,0x80,0x66,0xcd,0xfb,0xf1,0x8f,0xd8,0x00,0x1f,0xd9,0xbf,0x00,0x00,0x3d,0x37,0xaf,0x80,0x7c,0xcd,0xfb,0xf1,0x8f,0xdb,0x80,0x1a,0xd9,0xbf,0x00,
0x00,0x3d,0x10,0x5f,0x80,0x6c,0xcd,0xbb,0x71,0x8d,0xd9,0x80,0x18,0xdf,0xb7,0x00,0x00,0x39,0x0f,0x8f,0x00,0x66,0xfd,0x9b,0x37,0xec,0xcf,0x80,0x18,0xd9,0xb3,0x00,0x00,0x0d,0x00,0x82,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1f,0x01,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x39,0x82,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xc1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x30,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x50,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x9f,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0xe0,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0xe0,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0x00,0x1f,0xff,0xfe,0x00,0x00,0x3e,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0x01,0xff,0xff,0xff,0xfc,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0x1f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0x00,0x00,0x00,0xe0,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
};

// Game over screen
PROGMEM const unsigned char gameover [] = {
0xff, 0x80, 0x0, 0x3f, 0xc3, 0xfc, 0x7, 0xf8, 0x0, 0x80, 0xff, 0xff, 0xe0, 0x42, 0x7, 0xfc, 0xf, 0xf0, 0x80, 0x83, 0x0, 0x20, 0x42, 0x4, 0x4c, 0x8, 0x10, 0x80, 0x83, 0x0, 0x24, 0x42, 0x4, 0x4c, 0x88, 0x10, 0x8f, 0xf3, 0x0, 0x24, 0x42, 0x64, 0x4c, 0x88, 0x10, 0x89, 0x3, 0x23, 0x20, 0x42, 0x64, 0x4c, 0x9, 0x90, 0x89, 0x3, 0x23, 0x20, 0x42, 0x64, 0x4c, 0x9, 0x90, 0x89, 0x3, 0x23, 0x20, 0x42, 0x64, 0x4c, 0x9, 0xf0, 0x89, 0x13, 0x23, 0x21, 0xc2, 0x64, 0x4c, 0x39, 0x0, 0x89, 0x13, 0x23, 0x27, 0xc2, 0x4, 0xc, 0xf9, 0x0, 0x81, 0x3, 0x23, 0x20, 0x42, 0x4, 0xc, 0x9, 0x0, 0x81, 0x3, 0x23, 0x20, 0x42, 0x6, 0xc, 0x9, 0x0, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xfd, 0xf7, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0
};

