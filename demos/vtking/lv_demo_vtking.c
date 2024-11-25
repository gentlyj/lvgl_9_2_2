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
  // Test 4.txt
  lv_label_set_text(label, "سورة الفاتحة");
  // Text 2.txt
  // lv_label_set_text(label, "سورة الفلق");
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
    // lv_label_set_text(label1, "ُلْ هُوَ اللَّـهُ أَحَدٌ ﴿١﴾ اللَّـهُ الصَّمَدُ ﴿٢﴾ لَمْ يَلِدْ وَلَمْ يُولَدْ ﴿٣﴾ وَلَمْ يَكُن لَّهُ كُفُوًا أَحَدٌ ﴿٤﴾"); 
#if 0
    // Test 3.txt content
    lv_label_set_text(label1, "قُلْ أَعُوذُ بِرَبِّ النَّاسِ ﴿١﴾\n""مَلِكِ النَّاسِ ﴿٢﴾\n""إِلَـٰهِ النَّاسِ ﴿٣﴾""مِن شَرِّ الْوَسْوَاسِ الْخَنَّاسِ ﴿٤﴾\n"
    "الَّذِي يُوَسْوِسُ فِي صُدُورِ النَّاسِ ﴿٥﴾\n""مِنَ الْجِنَّةِ وَالنَّاسِ ﴿٦﴾"); 
#elif 0
    
    // Test 2.txt content
    lv_label_set_text(label1, "قُلْ أَعُوذُ بِرَبِّ الْفَلَقِ ﴿١﴾\n"
      "مِن شَرِّ مَا خَلَقَ ﴿٢﴾\n"
      "وَمِن شَرِّ غَاسِقٍ إِذَا وَقَبَ ﴿٣﴾\n"
      "وَمِن شَرِّ النَّفَّاثَاتِ فِي الْعُقَدِ ﴿٤﴾\n"
      "وَمِن شَرِّ حَاسِدٍ إِذَا حَسَدَ ﴿٥﴾\n"
      );
#elif 1
    // Test 4.txt content
    lv_label_set_text(label1,
      "بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ ﴿١﴾ \n"
      "الْحَمْدُ لِلَّـهِ رَبِّ الْعَالَمِينَ ﴿٢﴾\n"
      "الرَّحْمَـٰنِ الرَّحِيمِ ﴿٣﴾\n"
      "مَالِكِ يَوْمِ الدِّينِ ﴿٤﴾\n"
      "إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ ﴿٥﴾\n"
      "اهْدِنَا الصِّرَاطَ الْمُسْتَقِيمَ ﴿٦﴾\n"
      "صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلَا الضَّالِّينَ ﴿٧﴾\n"
      );
#endif

#endif
}

#endif
