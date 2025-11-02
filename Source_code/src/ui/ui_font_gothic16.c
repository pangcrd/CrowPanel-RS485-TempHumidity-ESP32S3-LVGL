/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font D:/Squaline Studio/Rs485TempHumi/assets/bgothm.ttf -o D:/Squaline Studio/Rs485TempHumi/assets\ui_font_gothic16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GOTHIC16
#define UI_FONT_GOTHIC16 1
#endif

#if UI_FONT_GOTHIC16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0xb6, 0xd0,

    /* U+0023 "#" */
    0x4, 0x81, 0x90, 0x26, 0x4, 0x87, 0xfc, 0x26,
    0x4, 0x87, 0xfc, 0x26, 0x4, 0x81, 0x90, 0x26,
    0x0,

    /* U+0024 "$" */
    0xc, 0x3f, 0xfc, 0xcf, 0x30, 0xcc, 0x3f, 0xf0,
    0xcc, 0x33, 0xcc, 0xff, 0xf0, 0xc0, 0x30,

    /* U+0025 "%" */
    0x70, 0x91, 0x22, 0x24, 0x45, 0x7, 0x4c, 0x12,
    0x42, 0x48, 0x89, 0x20, 0xc0,

    /* U+0026 "&" */
    0x3f, 0x6, 0x60, 0xe0, 0xe, 0x7, 0xc5, 0xcd,
    0xb1, 0xe6, 0x1c, 0xfe, 0xe0,

    /* U+0027 "'" */
    0xf0,

    /* U+0028 "(" */
    0x66, 0xcc, 0xcc, 0xc6, 0x60,

    /* U+0029 ")" */
    0x66, 0x33, 0x33, 0x36, 0x60,

    /* U+002A "*" */
    0x20, 0x87, 0x8c, 0x48,

    /* U+002B "+" */
    0x8, 0x4, 0x2, 0x1, 0x0, 0x87, 0xfc, 0x20,
    0x10, 0x8, 0x4, 0x0,

    /* U+002C "," */
    0xf6, 0x80,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x8, 0x84, 0x42, 0x21, 0x10, 0x80,

    /* U+0030 "0" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xff, 0x80,

    /* U+0031 "1" */
    0x1f, 0x33, 0x33, 0x33, 0x30,

    /* U+0032 "2" */
    0x7f, 0x98, 0x66, 0x18, 0x1e, 0xf, 0x7, 0x87,
    0x81, 0xc3, 0xff, 0xc0,

    /* U+0033 "3" */
    0xff, 0x61, 0x80, 0xc0, 0x61, 0xe0, 0xd, 0x7,
    0x83, 0xff, 0x80,

    /* U+0034 "4" */
    0x7, 0x3, 0xc1, 0xb0, 0xcc, 0x63, 0x30, 0xcf,
    0xfc, 0xc, 0x3, 0x0,

    /* U+0035 "5" */
    0xfe, 0x60, 0x20, 0x10, 0xf, 0xf0, 0xc, 0x6,
    0x3, 0xff, 0x0,

    /* U+0036 "6" */
    0x1e, 0x38, 0x18, 0x18, 0xf, 0xf6, 0xf, 0x7,
    0x83, 0x7f, 0x0,

    /* U+0037 "7" */
    0xff, 0xe0, 0xf0, 0xc0, 0x60, 0x60, 0x30, 0x30,
    0x18, 0x18, 0x0,

    /* U+0038 "8" */
    0xff, 0xe0, 0xf0, 0x78, 0x33, 0xe6, 0xf, 0x7,
    0x83, 0xff, 0x80,

    /* U+0039 "9" */
    0x7f, 0x60, 0xf0, 0x78, 0x37, 0xf8, 0xc, 0xc,
    0xe, 0x3c, 0x0,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0x3d, 0xa0,

    /* U+003C "<" */
    0x1, 0x83, 0x8e, 0x1c, 0xe, 0x1, 0xc0, 0x38,
    0x3,

    /* U+003D "=" */
    0xff, 0x80, 0x0, 0x1f, 0xf0,

    /* U+003E ">" */
    0xc0, 0x38, 0x3, 0x80, 0x70, 0x38, 0x70, 0xe1,
    0x80,

    /* U+003F "?" */
    0xff, 0x8c, 0x38, 0xe3, 0x86, 0x0, 0x18, 0x30,

    /* U+0040 "@" */
    0x7, 0xc0, 0x60, 0xc2, 0x0, 0x90, 0xeb, 0x44,
    0xc6, 0x31, 0x18, 0x84, 0x62, 0x11, 0x88, 0x8a,
    0x22, 0x64, 0x77, 0x18, 0x0, 0x30, 0x30, 0x3f,
    0x0,

    /* U+0041 "A" */
    0xc, 0x3, 0xc0, 0x78, 0x19, 0x83, 0x30, 0xc3,
    0x1f, 0xe6, 0x6, 0xc0, 0xe0,

    /* U+0042 "B" */
    0xff, 0xe0, 0xf0, 0x78, 0x3f, 0xe6, 0xf, 0x7,
    0x83, 0xff, 0x0,

    /* U+0043 "C" */
    0xff, 0xe0, 0xf0, 0x78, 0xc, 0x6, 0x3, 0x7,
    0x83, 0xff, 0x80,

    /* U+0044 "D" */
    0xff, 0x30, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x6, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0x60, 0x30, 0x18, 0xf, 0xc6, 0x3, 0x1,
    0x80, 0xff, 0x80,

    /* U+0046 "F" */
    0xff, 0xc0, 0xc0, 0xc0, 0xfc, 0xc0, 0xc0, 0xc0,
    0xc0,

    /* U+0047 "G" */
    0xff, 0xf0, 0x3c, 0x3, 0x0, 0xc7, 0xf0, 0x3c,
    0xf, 0x3, 0xff, 0xc0,

    /* U+0048 "H" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xff, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0xc3, 0xc3, 0xc3,
    0xff,

    /* U+004B "K" */
    0xc3, 0xb1, 0x8c, 0xc3, 0xe0, 0xf0, 0x37, 0xc,
    0xe3, 0x1c, 0xc3, 0x80,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xff,

    /* U+004D "M" */
    0xc0, 0x7c, 0x1f, 0xc3, 0xf8, 0xfd, 0xb7, 0x9c,
    0xf3, 0x9e, 0x23, 0xc0, 0x60,

    /* U+004E "N" */
    0xc0, 0xf8, 0x3f, 0xf, 0x63, 0xcc, 0xf1, 0xbc,
    0x3f, 0x7, 0xc0, 0xc0,

    /* U+004F "O" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xff, 0xc0,

    /* U+0050 "P" */
    0xff, 0xe0, 0xf0, 0x78, 0x3f, 0xfe, 0x3, 0x1,
    0x80, 0xc0, 0x0,

    /* U+0051 "Q" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf2, 0x3c,
    0xcf, 0x13, 0xff, 0xc0, 0x80, 0x30,

    /* U+0052 "R" */
    0xff, 0xb0, 0x6c, 0x1b, 0x6, 0xc1, 0xbf, 0xec,
    0xe3, 0x1c, 0xc3, 0x80,

    /* U+0053 "S" */
    0xff, 0xe0, 0xf0, 0x18, 0xf, 0xf8, 0xc, 0x7,
    0x83, 0xff, 0x80,

    /* U+0054 "T" */
    0xff, 0xc3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xff, 0x80,

    /* U+0056 "V" */
    0xe0, 0x6c, 0x19, 0xc3, 0x18, 0xc1, 0x98, 0x36,
    0x3, 0xc0, 0x70, 0x6, 0x0,

    /* U+0057 "W" */
    0xc2, 0x1e, 0x38, 0xd1, 0xc4, 0xcb, 0x66, 0xdb,
    0x1c, 0xd0, 0xe3, 0x87, 0x1c, 0x10, 0x40,

    /* U+0058 "X" */
    0xe1, 0x8e, 0x60, 0xdc, 0xf, 0x0, 0xc0, 0x3c,
    0xc, 0xc3, 0xc, 0xe1, 0xc0,

    /* U+0059 "Y" */
    0xe0, 0xdc, 0x63, 0x30, 0x78, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x0,

    /* U+005A "Z" */
    0x7f, 0x81, 0x81, 0xc1, 0xc1, 0xc1, 0xc0, 0xc0,
    0xe0, 0xff, 0x80,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xf0,

    /* U+005C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x42, 0x8,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0xf0,

    /* U+005E "^" */
    0xc, 0x7, 0x83, 0x30, 0x84, 0x40, 0x80,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xc8, 0x80,

    /* U+0061 "a" */
    0xc, 0x3, 0x81, 0xb0, 0xcc, 0x3f, 0x98, 0x24,
    0xc,

    /* U+0062 "b" */
    0xff, 0xc3, 0xc3, 0xfe, 0xc3, 0xc3, 0xff,

    /* U+0063 "c" */
    0xff, 0xc3, 0xc0, 0xc0, 0xc2, 0xc3, 0xff,

    /* U+0064 "d" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0x1b, 0xf8,

    /* U+0065 "e" */
    0xff, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xff,

    /* U+0066 "f" */
    0xff, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xc0,

    /* U+0067 "g" */
    0xff, 0xe0, 0xf0, 0x19, 0xfc, 0x1e, 0xf, 0xfe,

    /* U+0068 "h" */
    0xc1, 0xe0, 0xf0, 0x7f, 0xfc, 0x1e, 0xf, 0x6,

    /* U+0069 "i" */
    0xff, 0xfc,

    /* U+006A "j" */
    0x6, 0xc, 0x18, 0x3c, 0x78, 0xff, 0x80,

    /* U+006B "k" */
    0xc7, 0x66, 0x3e, 0x1e, 0xd, 0x86, 0x73, 0xc,

    /* U+006C "l" */
    0xc1, 0x83, 0x6, 0xc, 0x18, 0x3f, 0x80,

    /* U+006D "m" */
    0xc1, 0xf1, 0xfc, 0xfa, 0xbd, 0xde, 0x4f, 0x6,

    /* U+006E "n" */
    0xc1, 0xf0, 0xfc, 0x7b, 0xbc, 0x7e, 0x1f, 0x6,

    /* U+006F "o" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0xfe,

    /* U+0070 "p" */
    0xff, 0xc3, 0xc3, 0xff, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0xff, 0xe0, 0xf0, 0x78, 0x3c, 0x9e, 0x4f, 0xfe,
    0x8, 0x6, 0x0,

    /* U+0072 "r" */
    0xff, 0x61, 0xb0, 0xdf, 0xec, 0xc6, 0x33, 0x1c,

    /* U+0073 "s" */
    0x7f, 0xb0, 0xd8, 0xf, 0xf0, 0x1f, 0xd, 0xfe,

    /* U+0074 "t" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0076 "v" */
    0xc1, 0x61, 0x98, 0x84, 0xc3, 0x40, 0xe0, 0x60,

    /* U+0077 "w" */
    0xc4, 0x39, 0xcd, 0x29, 0x35, 0x67, 0x3c, 0x63,
    0xc, 0x60,

    /* U+0078 "x" */
    0xc3, 0x33, 0xf, 0x3, 0x83, 0xe3, 0x3b, 0xe,

    /* U+0079 "y" */
    0x61, 0x8c, 0xc1, 0xe0, 0x30, 0xc, 0x3, 0x0,
    0xc0,

    /* U+007A "z" */
    0x7f, 0x6, 0xc, 0x18, 0x30, 0x70, 0xff,

    /* U+007B "{" */
    0x19, 0x8c, 0x63, 0x18, 0xd8, 0x31, 0x8c, 0x63,
    0x18, 0x60,

    /* U+007C "|" */
    0xff, 0xff, 0x80,

    /* U+007D "}" */
    0xe0, 0xc3, 0xc, 0x30, 0xc3, 0x3, 0x30, 0xc3,
    0xc, 0x30, 0xce, 0x0,

    /* U+007E "~" */
    0x78, 0x70, 0xf8
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 99, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 98, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 77, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 197, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 198, .box_w = 10, .box_h = 12, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 38, .adv_w = 205, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 211, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 64, .adv_w = 40, .box_w = 1, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 65, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 70, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 79, .adv_w = 213, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 85, .box_w = 2, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 93, .adv_w = 85, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 94, .adv_w = 85, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 71, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 198, .box_w = 4, .box_h = 9, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 198, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 129, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 198, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 174, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 198, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 85, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 85, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 212, .adv_w = 213, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 221, .adv_w = 213, .box_w = 9, .box_h = 4, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 226, .adv_w = 213, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 235, .adv_w = 170, .box_w = 7, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 256, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 268, .adv_w = 197, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 203, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 292, .adv_w = 205, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 303, .adv_w = 217, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 193, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 326, .adv_w = 172, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 219, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 225, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 359, .adv_w = 98, .box_w = 2, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 171, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 371, .adv_w = 203, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 175, .box_w = 8, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 237, .box_w = 11, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 223, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 225, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 190, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 225, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 454, .adv_w = 205, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 207, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 477, .adv_w = 160, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 217, .box_w = 9, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 174, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 513, .adv_w = 237, .box_w = 13, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 184, .box_w = 11, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 172, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 175, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 564, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 71, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 85, .box_w = 4, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 256, .box_w = 10, .box_h = 5, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 587, .adv_w = 128, .box_w = 8, .box_h = 1, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 588, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 590, .adv_w = 165, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 599, .adv_w = 168, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 165, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 178, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 156, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 141, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 177, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 643, .adv_w = 184, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 75, .box_w = 2, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 653, .adv_w = 143, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 660, .adv_w = 159, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 141, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 675, .adv_w = 196, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 182, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 691, .adv_w = 183, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 161, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 183, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 717, .adv_w = 166, .box_w = 9, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 725, .adv_w = 170, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 151, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 740, .adv_w = 176, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 747, .adv_w = 162, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 202, .box_w = 11, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 163, .box_w = 9, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 773, .adv_w = 152, .box_w = 10, .box_h = 7, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 158, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 128, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 799, .adv_w = 128, .box_w = 1, .box_h = 17, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 802, .adv_w = 128, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 814, .adv_w = 213, .box_w = 11, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    34, 34,
    34, 36,
    34, 40,
    34, 48,
    34, 50,
    34, 52,
    34, 53,
    34, 54,
    34, 55,
    34, 56,
    34, 57,
    34, 58,
    34, 68,
    34, 69,
    34, 70,
    34, 71,
    34, 80,
    34, 82,
    34, 85,
    34, 86,
    34, 87,
    34, 88,
    34, 90,
    35, 58,
    36, 34,
    36, 52,
    36, 58,
    37, 34,
    37, 58,
    39, 13,
    39, 15,
    39, 34,
    39, 52,
    39, 66,
    39, 70,
    39, 74,
    39, 80,
    39, 83,
    39, 86,
    39, 90,
    40, 34,
    40, 53,
    40, 56,
    40, 58,
    43, 34,
    44, 14,
    44, 34,
    44, 36,
    44, 48,
    44, 53,
    44, 54,
    44, 56,
    44, 58,
    44, 66,
    44, 70,
    44, 80,
    44, 86,
    44, 90,
    45, 34,
    45, 48,
    45, 53,
    45, 54,
    45, 55,
    45, 56,
    45, 58,
    45, 66,
    45, 70,
    45, 80,
    45, 86,
    45, 90,
    48, 34,
    48, 57,
    48, 58,
    49, 13,
    49, 14,
    49, 15,
    49, 34,
    49, 54,
    49, 56,
    49, 66,
    51, 13,
    51, 15,
    51, 34,
    51, 53,
    51, 56,
    51, 58,
    51, 66,
    51, 70,
    51, 80,
    51, 86,
    51, 90,
    52, 34,
    52, 52,
    53, 13,
    53, 15,
    53, 27,
    53, 28,
    53, 34,
    53, 66,
    53, 68,
    53, 70,
    53, 74,
    53, 80,
    53, 83,
    53, 84,
    53, 86,
    54, 34,
    54, 43,
    54, 59,
    55, 13,
    55, 15,
    55, 27,
    55, 28,
    55, 34,
    55, 66,
    55, 70,
    55, 74,
    55, 80,
    55, 86,
    56, 13,
    56, 15,
    56, 27,
    56, 28,
    56, 34,
    56, 66,
    56, 70,
    56, 74,
    56, 80,
    56, 83,
    56, 86,
    56, 90,
    57, 34,
    57, 36,
    57, 70,
    58, 13,
    58, 15,
    58, 27,
    58, 28,
    58, 34,
    58, 36,
    58, 48,
    58, 66,
    58, 70,
    58, 74,
    58, 80,
    58, 86,
    58, 90,
    66, 85,
    66, 87,
    66, 89,
    66, 90,
    67, 84,
    67, 87,
    67, 88,
    67, 90,
    68, 66,
    68, 90,
    69, 66,
    69, 87,
    69, 90,
    71, 66,
    71, 85,
    72, 66,
    72, 85,
    72, 90,
    75, 66,
    76, 66,
    76, 85,
    76, 90,
    77, 85,
    77, 86,
    77, 87,
    77, 88,
    77, 90,
    80, 90,
    81, 66,
    81, 86,
    81, 88,
    81, 90,
    83, 66,
    83, 85,
    83, 87,
    83, 90,
    84, 66,
    84, 84,
    85, 66,
    85, 68,
    85, 85,
    86, 66,
    86, 91,
    87, 66,
    89, 66,
    89, 68,
    89, 85,
    90, 66,
    90, 68,
    90, 80
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    -9, -4, -4, -4, -4, -4, -17, -6,
    -9, -6, -14, -14, -7, -6, -6, -6,
    -7, -7, -14, -7, -14, -7, -16, -4,
    -4, -4, -4, -4, -4, -33, -33, -23,
    5, -35, -14, -14, -14, -10, -9, 5,
    -4, -14, -4, -4, -4, -19, -9, -9,
    -9, -9, -9, -9, -9, -9, -14, -14,
    -14, -19, -4, -4, -30, -4, -28, -19,
    -33, -4, -4, -4, -4, -28, -4, -4,
    -4, -19, 9, -19, -14, -4, 5, -19,
    -4, -4, -9, -4, 5, -4, -9, -4,
    -4, -4, -9, -4, -4, -23, -23, -4,
    -4, -17, -32, -10, -6, -10, -9, -6,
    -10, -4, -6, -4, -4, -28, -28, -4,
    -4, -9, -20, -9, -9, -10, -9, -19,
    -19, -9, -9, -7, -14, -9, -9, -9,
    -9, -9, -8, -4, -6, -9, -28, -28,
    -9, -9, -14, -4, -4, -33, -19, -20,
    -19, -19, -9, -14, -9, -4, -14, -4,
    -9, -4, -14, -4, -9, -4, -4, -9,
    -19, 5, -4, -9, -14, -9, -4, -4,
    -14, -28, 5, -23, -14, -28, -8, -14,
    5, 5, -4, -9, -9, -9, -9, -4,
    -7, -19, -9, -11, -4, -4, -9, -6,
    -6, -10, -14, -9, -8
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 197,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_gothic16 = {
#else
lv_font_t ui_font_gothic16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_GOTHIC16*/

