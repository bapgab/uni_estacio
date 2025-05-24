#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>  // Suporte para imagens (para carregar PNG)
#include <stdbool.h>
#include <math.h>

#define SCREEN_W 800
#define SCREEN_H 600

#define PLAYER_W 40
#define PLAYER_H 100

#define MOVE_SPEED 0.4
#define MAX_SPEED 2

#define BACKGROUND_SPEED 5 // Novo fator para velocidade do fundo (ajustado para ser mais rápido)

typedef struct {
    float x, y;
    float vx, vy;
} Player;

void apply_physics(Player* p) {
    // Atualiza a posição do jogador com base na velocidade
    p->x += p->vx;
    p->y += p->vy;
}

int main() {
    al_init();
    al_install_keyboard();
    al_init_primitives_addon();
    al_init_image_addon();  // Suporte a imagens (PNG, etc.)

    ALLEGRO_DISPLAY* display = al_create_display(SCREEN_W, SCREEN_H);
    ALLEGRO_EVENT_QUEUE* queue = al_create_event_queue();
    ALLEGRO_TIMER* timer = al_create_timer(1.0 / 60);
    al_register_event_source(queue, al_get_display_event_source(display));
    al_register_event_source(queue, al_get_timer_event_source(timer));
    al_register_event_source(queue, al_get_keyboard_event_source());

    // Carregar o fundo
    ALLEGRO_BITMAP* background = al_load_bitmap("fundo1.png");

    bool running = true;
    bool keys[ALLEGRO_KEY_MAX] = { false };

    // Inicializar o jogador no centro da tela
    Player player = { SCREEN_W / 2 - PLAYER_W / 2, SCREEN_H / 2 - PLAYER_H / 2 + 150, 0, 0 };

    al_start_timer(timer);

    while (running) {
        ALLEGRO_EVENT ev;
        al_wait_for_event(queue, &ev);

        if (ev.type == ALLEGRO_EVENT_TIMER) {
            // Movimentação do jogador
            if (keys[ALLEGRO_KEY_RIGHT]) {
                player.vx += MOVE_SPEED;
                if (player.vx > MAX_SPEED) player.vx = MAX_SPEED;
            }
            else if (keys[ALLEGRO_KEY_LEFT]) {
                player.vx -= MOVE_SPEED;
                if (player.vx < -MAX_SPEED) player.vx = -MAX_SPEED;
            }

            // Aplicar física e restrição do movimento do jogador
            apply_physics(&player);

            // Desenhar fundo redimensionado para preencher a tela e deslocado conforme o movimento
            int background_width = al_get_bitmap_width(background);
            int background_height = al_get_bitmap_height(background);

            // Calcular o fator de escala para preencher a tela verticalmente
            float scale_factor = (float)SCREEN_H / background_height;
            int scaled_width = background_width * scale_factor;

            // Desenhar o fundo repetidamente, considerando a velocidade do movimento (fundo mais rápido)
            for (int i = 0; i < (SCREEN_W / scaled_width) + 2; i++) {
                float background_x = (i * scaled_width) - fmod(player.x * BACKGROUND_SPEED, scaled_width);
                al_draw_scaled_bitmap(background, 0, 0, background_width, background_height,
                    background_x, 0, scaled_width, SCREEN_H, 0);
            }

            // Desenhar o jogador
            al_draw_filled_rectangle(player.x, player.y, player.x + PLAYER_W, player.y + PLAYER_H, al_map_rgb(255, 0, 0));

            al_flip_display();
        }

        if (ev.type == ALLEGRO_EVENT_KEY_DOWN) {
            keys[ev.keyboard.keycode] = true;
            if (ev.keyboard.keycode == ALLEGRO_KEY_ESCAPE) running = false;
        }
        else if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            keys[ev.keyboard.keycode] = false;
        }
        else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            running = false;
        }
    }

    al_destroy_bitmap(background);
    al_destroy_display(display);
    al_destroy_event_queue(queue);
    al_destroy_timer(timer);
    return 0;
}
