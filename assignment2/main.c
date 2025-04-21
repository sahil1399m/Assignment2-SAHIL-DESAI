#include "oled.h"
#include "sra_board.h"

#include "../images/arrow.c"
#include "../images/hexagon.c"
#include "../images/clock.c"
#include "../images/square.c"
#include "../images/tri.c"

LV_IMG_DECLARE(arrow);
LV_IMG_DECLARE(hexagon);
LV_IMG_DECLARE(clock);
LV_IMG_DECLARE(square);
LV_IMG_DECLARE(tri);

enum Alignments {
    CENTER = LV_ALIGN_CENTER,
    TOP_LEFT = LV_ALIGN_TOP_LEFT,
    TOP_RIGHT = LV_ALIGN_TOP_RIGHT,
    BOTTOM_LEFT = LV_ALIGN_BOTTOM_LEFT,
    BOTTOM_RIGHT = LV_ALIGN_BOTTOM_RIGHT    
};

void display_img(int id, lv_obj_t *img, int align_to, int height, int width)
{

    switch (id)
    {
        case 0:
        lv_img_set_src(img, &hexagon);
        lv_obj_set_size(img, height, width);
        lv_obj_align(img, align_to, 0, 0);
        lv_refr_now(NULL);
        break;

    case 1:
        lv_img_set_src(img, &arrow);
        lv_obj_set_size(img, height, width);
        lv_obj_align(img, align_to, 0, 0);
        lv_refr_now(NULL);
        break;

        case 2:
        lv_img_set_src(img, &tri);
        lv_obj_set_size(img, height, width);
        lv_obj_align(img, align_to, 0, 0);
        lv_refr_now(NULL);
        break;
    

    case 3:
        lv_img_set_src(img, &square);
        lv_obj_set_size(img, height, width);
        lv_obj_align(img, align_to, 0, 0);
        lv_refr_now(NULL);
        break;

    case 4:
        lv_img_set_src(img, &clock);
        lv_obj_set_size(img, height, width);
        lv_obj_align(img, align_to, 0, 0);
        lv_refr_now(NULL);
        break;
    }
    
    
}

static const char *TAG = "oled_example";

void app_main()
{
    init_oled();
    vTaskDelay(100);

    for (int id = 0; id < 5; id++) {
        lv_obj_clean(lv_scr_act());

        lv_obj_t *img = lv_img_create(lv_scr_act());
        int height = 64;
        int width = 64;
        int alignment = CENTER;

        display_img(id, img, alignment, height, width);
        ESP_LOGI(TAG, "Displayed image ID: %d", id);

        vTaskDelay(2000 / portTICK_PERIOD_MS);//displays each image for 2 seconds
    }
}
