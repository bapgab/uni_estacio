#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_ttf.h>
#include <stdbool.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>

int main() {
    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_image_addon();
    al_install_keyboard();
    al_install_audio();
    al_init_acodec_addon();
    al_reserve_samples(2);

    ALLEGRO_DISPLAY* display = al_create_display(1280, 720);
    al_set_window_position(display, 200, 200);
    al_set_window_title(display, "titulo teste");

    int screen_w = al_get_display_width(display);
    int screen_h = al_get_display_height(display);

    ALLEGRO_FONT* font = al_create_builtin_font();
    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 30.0);
    ALLEGRO_BITMAP* menu = al_load_bitmap("./menu1.png");
    ALLEGRO_BITMAP* fundo = al_load_bitmap("./fundo1.png");
    ALLEGRO_SAMPLE* menu_music = al_load_sample("./8bitmenu.mp3"); 
    ALLEGRO_SAMPLE_INSTANCE* music_instance = al_create_sample_instance(menu_music);
    al_attach_sample_instance_to_mixer(music_instance, al_get_default_mixer());
    ALLEGRO_EVENT_QUEUE* event_queue = al_create_event_queue();
    al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    al_start_timer(timer);

    bool on_menu = true;

    while (true) {
        ALLEGRO_EVENT event;
        al_wait_for_event(event_queue, &event);
        

        if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }
        else if (event.type == ALLEGRO_EVENT_KEY_DOWN) {
            if (event.keyboard.keycode == ALLEGRO_KEY_ENTER && on_menu) {
                al_stop_sample_instance(music_instance);
                on_menu = false;
            }
        }

        al_clear_to_color(al_map_rgb(255, 255, 255));

        // Define qual imagem usar com base no estado
        ALLEGRO_BITMAP* imagem_atual = on_menu ? menu : fundo;

        // Desenha imagem redimensionada para preencher a tela
        al_draw_scaled_bitmap(imagem_atual,
            0, 0, al_get_bitmap_width(imagem_atual), al_get_bitmap_height(imagem_atual),
            0, 0, screen_w, screen_h,
            0);

        // Se estiver no menu, mostra o texto e toca o som 
        if (on_menu) {
            al_set_sample_instance_playmode(music_instance, ALLEGRO_PLAYMODE_LOOP);
            al_play_sample_instance(music_instance);
            al_draw_text(font, al_map_rgb(0, 0, 0), 230, 200, 0, "Pressione Enter para Iniciar...");
        }

        al_flip_display();
    }

    al_destroy_bitmap(fundo);
    al_destroy_bitmap(menu);
    al_destroy_font(font);
    al_destroy_display(display);
    al_destroy_event_queue(event_queue);
    al_destroy_sample_instance(music_instance);
    al_destroy_sample(menu_music);

    return 0;
}
