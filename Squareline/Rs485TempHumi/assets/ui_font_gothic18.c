/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font D:/Squaline Studio/Rs485TempHumi/assets/bgothm.ttf -o D:/Squaline Studio/Rs485TempHumi/assets\ui_font_gothic18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_GOTHIC18
#define UI_FONT_GOTHIC18 1
#endif

#if UI_FONT_GOTHIC18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xf4, 0x80, 0x1c,

    /* U+0022 "\"" */
    0x99, 0x99, 0x90,

    /* U+0023 "#" */
    0x2, 0x60, 0x66, 0x6, 0x40, 0x4c, 0xc, 0xc7,
    0xff, 0x9, 0x81, 0x98, 0x19, 0xf, 0xfe, 0x33,
    0x2, 0x20, 0x26, 0x6, 0x40,

    /* U+0024 "$" */
    0xc, 0x1, 0x83, 0xff, 0x66, 0x3c, 0xc7, 0x98,
    0x33, 0x7, 0xfe, 0xc, 0x61, 0x8f, 0x31, 0xff,
    0xf0, 0xc0, 0x18, 0x0,

    /* U+0025 "%" */
    0x70, 0x64, 0x46, 0x22, 0x21, 0x12, 0x7, 0x2f,
    0x3, 0xcc, 0x34, 0x21, 0x21, 0x11, 0x99, 0x7,
    0x80,

    /* U+0026 "&" */
    0x3f, 0x81, 0x8c, 0xe, 0x40, 0x38, 0x3, 0xe0,
    0x7b, 0x9b, 0x8f, 0x98, 0x78, 0xc1, 0xe7, 0xfb,
    0x80,

    /* U+0027 "'" */
    0xf8,

    /* U+0028 "(" */
    0x66, 0xcc, 0xcc, 0xcc, 0x66,

    /* U+0029 ")" */
    0x66, 0x33, 0x33, 0x33, 0x66,

    /* U+002A "*" */
    0x21, 0x3e, 0x45, 0x28,

    /* U+002B "+" */
    0x4, 0x0, 0x80, 0x10, 0x2, 0x0, 0x41, 0xff,
    0xc1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x0,

    /* U+002C "," */
    0xed, 0x40,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x8, 0x44, 0x22, 0x11, 0x8, 0x84, 0x0,

    /* U+0030 "0" */
    0xff, 0xf8, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xfc,

    /* U+0031 "1" */
    0x7f, 0x33, 0x33, 0x33, 0x33,

    /* U+0032 "2" */
    0x7f, 0xcc, 0x19, 0x83, 0x0, 0xe0, 0x7c, 0x1e,
    0x7, 0x83, 0xe2, 0x70, 0x7f, 0xfc,

    /* U+0033 "3" */
    0xff, 0xb0, 0x60, 0x18, 0x6, 0xf, 0x0, 0x30,
    0xf, 0x3, 0xc0, 0xff, 0xf0,

    /* U+0034 "4" */
    0x3, 0x80, 0xf0, 0x36, 0xc, 0xc3, 0x18, 0xc3,
    0x3f, 0xf8, 0xc, 0x1, 0x80, 0x30,

    /* U+0035 "5" */
    0xff, 0x30, 0xc, 0x3, 0x0, 0xff, 0x0, 0x70,
    0xc, 0x3, 0x81, 0xff, 0xc0,

    /* U+0036 "6" */
    0xf, 0xc, 0x6, 0x3, 0x0, 0xff, 0xb0, 0x3c,
    0xf, 0x3, 0xc0, 0xdf, 0xe0,

    /* U+0037 "7" */
    0xff, 0xf8, 0x1b, 0x7, 0x0, 0xc0, 0x38, 0x6,
    0x1, 0x80, 0x30, 0xc, 0x3, 0x80,

    /* U+0038 "8" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0x3f, 0x30, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf0,

    /* U+0039 "9" */
    0x7f, 0xb0, 0x3c, 0xf, 0x3, 0xc0, 0xdf, 0xf0,
    0xc, 0x6, 0x3, 0xf, 0x0,

    /* U+003A ":" */
    0xff, 0x81, 0xff,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0x6a, 0x0,

    /* U+003C "<" */
    0x0, 0x20, 0x1c, 0x1e, 0xe, 0x7, 0x1, 0x80,
    0x1e, 0x0, 0x70, 0x3, 0x80, 0x1c,

    /* U+003D "=" */
    0xff, 0xe0, 0x0, 0x0, 0x0, 0xf, 0xfe,

    /* U+003E ">" */
    0x0, 0x1c, 0x0, 0xe0, 0x7, 0x80, 0x1c, 0x1,
    0xc0, 0xe0, 0x70, 0x78, 0x18, 0x0,

    /* U+003F "?" */
    0xfe, 0xc3, 0x43, 0x7, 0xe, 0x1c, 0x18, 0x0,
    0x0, 0x38,

    /* U+0040 "@" */
    0x3, 0xf0, 0xc, 0x1c, 0x38, 0x6, 0x30, 0x6,
    0x63, 0x93, 0x66, 0x63, 0xce, 0x23, 0xcc, 0x23,
    0xcc, 0x23, 0xcc, 0x46, 0xcc, 0x4c, 0xc7, 0xb8,
    0x60, 0x0, 0x30, 0x8, 0x1c, 0x18, 0x7, 0xe0,

    /* U+0041 "A" */
    0x6, 0x0, 0xf0, 0xf, 0x1, 0x98, 0x39, 0x83,
    0xc, 0x7f, 0xc6, 0x6, 0xc0, 0x6c, 0x3,

    /* U+0042 "B" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xff, 0x30, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xe0,

    /* U+0043 "C" */
    0xff, 0xf0, 0x3c, 0xf, 0x0, 0xc0, 0x30, 0xc,
    0xb, 0x3, 0xc0, 0xff, 0xf0,

    /* U+0044 "D" */
    0xff, 0x18, 0x1b, 0x1, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x6, 0xc1, 0xdf, 0xf0,

    /* U+0045 "E" */
    0xff, 0xf0, 0xc, 0x3, 0x0, 0xfe, 0x30, 0xc,
    0x3, 0x0, 0xc0, 0x3f, 0xf0,

    /* U+0046 "F" */
    0xff, 0xf0, 0xc, 0x3, 0x0, 0xc0, 0x3f, 0xc,
    0x3, 0x0, 0xc0, 0x30, 0x0,

    /* U+0047 "G" */
    0xff, 0xf8, 0xf, 0x1, 0x60, 0xc, 0x1, 0x8f,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xfc,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3f, 0xff, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xc,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xf, 0x7,
    0x83, 0xc1, 0xff, 0x80,

    /* U+004B "K" */
    0xc1, 0xd8, 0xe3, 0x38, 0x6e, 0xf, 0x1, 0xf0,
    0x37, 0x6, 0x78, 0xc3, 0x98, 0x38,

    /* U+004C "L" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x7f, 0xc0,

    /* U+004D "M" */
    0xc0, 0x3e, 0x7, 0xf0, 0x7f, 0xf, 0xd9, 0xbc,
    0xd3, 0xcf, 0x3c, 0x63, 0xc0, 0x3c, 0x3,

    /* U+004E "N" */
    0xc0, 0x7c, 0xf, 0xc1, 0xfc, 0x3d, 0xc7, 0x8e,
    0xf0, 0xfe, 0xf, 0xc0, 0xf8, 0xc,

    /* U+004F "O" */
    0xff, 0xf8, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7f, 0xfc,

    /* U+0050 "P" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xff, 0xfc,
    0x3, 0x0, 0xc0, 0x30, 0x0,

    /* U+0051 "Q" */
    0xff, 0xf8, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf3, 0x1e, 0x33, 0xc6, 0x7f, 0xfc, 0xc, 0x1,
    0xc0, 0x18,

    /* U+0052 "R" */
    0xff, 0xd8, 0x1b, 0x3, 0x60, 0x6c, 0xd, 0xff,
    0xb1, 0x86, 0x18, 0xc3, 0x98, 0x38,

    /* U+0053 "S" */
    0xff, 0xf0, 0x3c, 0x3, 0x0, 0xff, 0xc0, 0x30,
    0xf, 0x3, 0xc0, 0xff, 0xf0,

    /* U+0054 "T" */
    0xff, 0xe1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80,

    /* U+0055 "U" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xff, 0xf0,

    /* U+0056 "V" */
    0xe0, 0x36, 0x6, 0x70, 0x63, 0xc, 0x18, 0xc1,
    0x98, 0xd, 0x80, 0xf0, 0x7, 0x0, 0x60,

    /* U+0057 "W" */
    0xc1, 0x7, 0x87, 0x9, 0x8e, 0x33, 0x36, 0x67,
    0x6d, 0x86, 0x9b, 0xf, 0x1e, 0x1e, 0x38, 0x18,
    0x70, 0x30, 0x60,

    /* U+0058 "X" */
    0xe0, 0xe7, 0x1c, 0x3b, 0x81, 0xf0, 0xe, 0x0,
    0xf0, 0x1b, 0x83, 0x9c, 0x70, 0xee, 0x7,

    /* U+0059 "Y" */
    0x60, 0x67, 0xe, 0x39, 0xc1, 0xf8, 0xf, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,

    /* U+005A "Z" */
    0x7f, 0xc0, 0xe0, 0x78, 0x1c, 0xe, 0x7, 0x3,
    0xc0, 0xe0, 0x70, 0x3f, 0xf0,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0x84, 0x10, 0x82, 0x10, 0x42, 0x8, 0x40,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0xc, 0x7, 0x83, 0x31, 0x86, 0xc0, 0xc0,

    /* U+005F "_" */
    0xff, 0x80,

    /* U+0060 "`" */
    0xc6, 0x20,

    /* U+0061 "a" */
    0xc, 0x7, 0x81, 0x60, 0xcc, 0x63, 0x1f, 0xec,
    0xf, 0x3,

    /* U+0062 "b" */
    0xff, 0xe0, 0xf0, 0x7f, 0xec, 0x1e, 0xf, 0x7,
    0xfe,

    /* U+0063 "c" */
    0xff, 0xe0, 0xf0, 0x78, 0xc, 0x6, 0xf, 0x7,
    0xff,

    /* U+0064 "d" */
    0xff, 0x30, 0x6c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0x1b, 0xfc,

    /* U+0065 "e" */
    0xff, 0x60, 0x30, 0x1f, 0x8c, 0x6, 0x3, 0x1,
    0xff,

    /* U+0066 "f" */
    0xff, 0xc0, 0xc0, 0xc0, 0xf8, 0xc0, 0xc0, 0xc0,

    /* U+0067 "g" */
    0xff, 0xf0, 0x3c, 0x3, 0x0, 0xc7, 0xf0, 0x3c,
    0xf, 0xff,

    /* U+0068 "h" */
    0xc0, 0xf0, 0x3c, 0xf, 0xff, 0xc0, 0xf0, 0x3c,
    0xf, 0x3,

    /* U+0069 "i" */
    0xff, 0xff,

    /* U+006A "j" */
    0x6, 0xc, 0x18, 0x34, 0x78, 0xf1, 0xff,

    /* U+006B "k" */
    0xc3, 0x33, 0x8d, 0xc3, 0xc0, 0xf8, 0x37, 0xc,
    0x73, 0xe,

    /* U+006C "l" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+006D "m" */
    0xc0, 0x7c, 0x1f, 0xc7, 0xec, 0xbd, 0xb7, 0x9c,
    0xf1, 0x1e, 0x3,

    /* U+006E "n" */
    0xc0, 0xf8, 0x3f, 0x8f, 0x73, 0xce, 0xf1, 0xfc,
    0x1f, 0x3,

    /* U+006F "o" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0xff,

    /* U+0070 "p" */
    0xff, 0xe0, 0xf0, 0x78, 0x3f, 0xfe, 0x3, 0x1,
    0x80,

    /* U+0071 "q" */
    0xff, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf3, 0x3c,
    0x4f, 0xff, 0x2, 0x0, 0xc0,

    /* U+0072 "r" */
    0xff, 0xb0, 0x6c, 0x1b, 0x6, 0xff, 0xb3, 0x8c,
    0x73, 0xe,

    /* U+0073 "s" */
    0x7f, 0xd8, 0x36, 0x1, 0xff, 0x0, 0xc8, 0x36,
    0xd, 0xff,

    /* U+0074 "t" */
    0xff, 0x86, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30,
    0x18,

    /* U+0075 "u" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0xff,

    /* U+0076 "v" */
    0xc0, 0xd8, 0x66, 0x18, 0xcc, 0x32, 0x7, 0x81,
    0xc0, 0x30,

    /* U+0077 "w" */
    0xc2, 0x1e, 0x38, 0x91, 0xcc, 0xda, 0x46, 0x9a,
    0x1c, 0xf0, 0xe3, 0x2, 0x18,

    /* U+0078 "x" */
    0xe1, 0x9c, 0xc3, 0xe0, 0x70, 0x1e, 0xd, 0xc6,
    0x3b, 0x87,

    /* U+0079 "y" */
    0xe1, 0xdc, 0x63, 0xb0, 0x78, 0xc, 0x3, 0x0,
    0xc0, 0x30,

    /* U+007A "z" */
    0x7f, 0x81, 0x81, 0x81, 0x81, 0xc1, 0xc1, 0xc1,
    0xff,

    /* U+007B "{" */
    0xe, 0x30, 0x60, 0xc1, 0x83, 0x6, 0x1c, 0xe0,
    0x70, 0x60, 0xc1, 0x83, 0x6, 0xc, 0xe,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xe0, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0xc, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0xe0,

    /* U+007E "~" */
    0x7c, 0x18, 0x3e
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 112, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 111, .box_w = 3, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 86, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 8, .adv_w = 221, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 29, .adv_w = 223, .box_w = 11, .box_h = 14, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 49, .adv_w = 230, .box_w = 13, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 237, .box_w = 13, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 45, .box_w = 1, .box_h = 5, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 84, .adv_w = 95, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 95, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 144, .box_w = 5, .box_h = 6, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 98, .adv_w = 240, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 95, .box_w = 3, .box_h = 4, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 116, .adv_w = 95, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 117, .adv_w = 95, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 223, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 223, .box_w = 4, .box_h = 10, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 145, .adv_w = 223, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 159, .adv_w = 223, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 223, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 223, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 223, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 223, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 223, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 223, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 95, .box_w = 3, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 95, .box_w = 3, .box_h = 11, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 260, .adv_w = 240, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 274, .adv_w = 240, .box_w = 11, .box_h = 5, .ofs_x = 2, .ofs_y = 3},
    {.bitmap_index = 281, .adv_w = 240, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 295, .adv_w = 191, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 305, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 337, .adv_w = 222, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 229, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 231, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 244, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 217, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 193, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 246, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 253, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 111, .box_w = 2, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 449, .adv_w = 192, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 229, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 197, .box_w = 9, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 267, .box_w = 12, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 250, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 516, .adv_w = 253, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 214, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 253, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 561, .adv_w = 231, .box_w = 11, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 575, .adv_w = 233, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 180, .box_w = 11, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 244, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 196, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 267, .box_w = 15, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 649, .adv_w = 207, .box_w = 12, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 194, .box_w = 12, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 679, .adv_w = 196, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 95, .box_w = 4, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 80, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 704, .adv_w = 95, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 709, .adv_w = 288, .box_w = 10, .box_h = 5, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 716, .adv_w = 144, .box_w = 9, .box_h = 1, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 718, .adv_w = 144, .box_w = 4, .box_h = 3, .ofs_x = 2, .ofs_y = 9},
    {.bitmap_index = 720, .adv_w = 186, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 730, .adv_w = 189, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 739, .adv_w = 185, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 748, .adv_w = 200, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 175, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 158, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 199, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 207, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 84, .box_w = 2, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 797, .adv_w = 161, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 179, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 814, .adv_w = 159, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 221, .box_w = 11, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 833, .adv_w = 205, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 843, .adv_w = 206, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 181, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 862, .adv_w = 206, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 875, .adv_w = 187, .box_w = 10, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 885, .adv_w = 191, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 895, .adv_w = 170, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 904, .adv_w = 198, .box_w = 9, .box_h = 8, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 182, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 923, .adv_w = 227, .box_w = 13, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 184, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 171, .box_w = 10, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 956, .adv_w = 177, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 965, .adv_w = 144, .box_w = 7, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 980, .adv_w = 144, .box_w = 2, .box_h = 19, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 985, .adv_w = 144, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 998, .adv_w = 240, .box_w = 12, .box_h = 2, .ofs_x = 2, .ofs_y = 5}
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
    -10, -5, -5, -5, -5, -5, -20, -6,
    -10, -6, -16, -16, -8, -6, -6, -6,
    -8, -8, -16, -8, -16, -8, -18, -5,
    -5, -5, -5, -5, -5, -37, -37, -26,
    5, -40, -16, -16, -16, -12, -10, 5,
    -5, -16, -5, -5, -5, -21, -10, -10,
    -10, -10, -10, -10, -10, -10, -16, -16,
    -16, -21, -5, -5, -34, -5, -32, -21,
    -37, -5, -5, -5, -5, -32, -5, -5,
    -5, -21, 11, -21, -16, -5, 5, -21,
    -5, -5, -10, -5, 5, -5, -10, -5,
    -5, -5, -10, -5, -5, -26, -26, -5,
    -5, -20, -36, -12, -6, -12, -10, -6,
    -12, -5, -6, -5, -5, -32, -32, -5,
    -5, -10, -22, -10, -10, -12, -10, -21,
    -21, -10, -10, -8, -16, -10, -10, -10,
    -10, -10, -9, -5, -6, -10, -32, -32,
    -10, -10, -16, -5, -5, -37, -21, -22,
    -21, -21, -10, -16, -10, -5, -16, -5,
    -10, -5, -16, -5, -10, -5, -5, -10,
    -21, 5, -5, -10, -16, -10, -5, -5,
    -16, -32, 5, -26, -16, -32, -9, -16,
    5, 5, -5, -10, -10, -10, -10, -5,
    -8, -21, -10, -13, -5, -5, -10, -7,
    -7, -11, -16, -10, -9
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
const lv_font_t ui_font_gothic18 = {
#else
lv_font_t ui_font_gothic18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_GOTHIC18*/

