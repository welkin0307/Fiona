#include <stdio.h>
#include "Platform.h"
#include "Image.h"

void sanity_check(window_t* window, image_t* image) {
    if (input_key_pressed(window, KEY_A)) {
        printf("%s\n", "KEY_A");
        printf("time: %lf\n", input_get_time());
    }
    if (input_key_pressed(window, KEY_D)) {
        printf("%s\n", "KEY_D");
        image_flip_h(image);
    }
    if (input_key_pressed(window, KEY_S)) {
        printf("%s\n", "KEY_S");
        image_save(image, "capture.tga");
    }
    if (input_key_pressed(window, KEY_W)) {
        printf("%s\n", "KEY_W");
        image_flip_v(image);
    }
    if (input_button_pressed(window, BUTTON_L)) {
        int xpos, ypos;
        printf("%s\n", "BUTTON_L");
        input_query_cursor(window, &xpos, &ypos);
        printf("xpos: %d, ypos: %d\n", xpos, ypos);
    }
    if (input_button_pressed(window, BUTTON_R)) {
        printf("%s\n", "BUTTON_R");
    }
}

int main(void) {
    window_t* window;
    image_t* image;
    const char* title = "Viewer";
    int width = 800;
    int height = 600;

    window = window_create(title, width, height);
    image = image_load("Background.tga");
    image_resize(image, width, height);
    while (!window_should_close(window)) {
        sanity_check(window, image);
        window_draw_image(window, image);
        input_poll_events();
    }
    image_release(image);
    window_destroy(window);
    return 0;
}
