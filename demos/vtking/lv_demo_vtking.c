/**
 * @file lv_demo_vector_graphic.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include "lv_demo_vtking.h"

#if LV_USE_VTKING_DEMO

void lv_demo_vtking_create(void) {
  LV_LOG_ERROR("Demo not implemented yet");

  #if 1
  lv_obj_t *label = lv_label_create(lv_screen_active());
  // lv_obj_set_style_text_font(label, &lv_font_arabic, 0);
  lv_obj_set_style_text_font(label, &arabic24, 0);
  lv_obj_set_style_base_dir(label, LV_BASE_DIR_RTL, 0);
  // lv_obj_align(mylable,LV_ALIGN_CENTER,0,0);
  lv_obj_set_size(label, LV_PCT(80), LV_PCT(50));
  // lv_label_set_text(label, "show arabic");
  lv_label_set_text(label, "سورة الإخلاص");
  lv_obj_center(label);
  #endif

#if 1
    lv_obj_t *label1 = lv_label_create(lv_scr_act());
    // lv_obj_set_style_text_font(label1, &lv_font_arabic, 0);
    lv_obj_set_style_text_font(label1, &arabic24, 0);
    lv_obj_set_style_base_dir(label1, LV_BASE_DIR_RTL, 0);
    lv_obj_set_width(label1, LV_PCT(80));
    lv_obj_align(label1, LV_ALIGN_CENTER, 0, 40);
    // lv_label_set_text(label1, "للَّـهُ"); 
    lv_label_set_text(label1, "ُلْ هُوَ اللَّـهُ أَحَدٌ ﴿١﴾ اللَّـهُ الصَّمَدُ ﴿٢﴾ لَمْ يَلِدْ وَلَمْ يُولَدْ ﴿٣﴾ وَلَمْ يَكُن لَّهُ كُفُوًا أَحَدٌ ﴿٤﴾"); 

#endif
}

#endif
