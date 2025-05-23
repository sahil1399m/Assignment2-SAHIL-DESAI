#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SQUARE
#define LV_ATTRIBUTE_IMG_SQUARE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SQUARE uint8_t square_map[] = {
  0xfc, 0xfc, 0xfc, 0xff, 	//Color of index 0//
  0x49, 0x47, 0x4c, 0xff, 	//Color of index 1//

  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0xc0, 0x00, 0x00, 0x03, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t square = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 64,
  .header.h = 64,
  .data_size = 520,
  .data = square_map,
};