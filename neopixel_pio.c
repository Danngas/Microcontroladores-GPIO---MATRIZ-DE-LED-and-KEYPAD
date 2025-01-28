#include <stdio.h>
#include "hardware/gpio.h"
#include "hardware/clocks.h"
// #include "stdlib.h"
#include "keypad.c" // BIBLIOTECA PARA FUNCIONAMENTO DO TECLADO // JA CONFIGURADO
// #include "buzzer.c"
#include "animacoes.h"
#include "stdlib.h"
#include "string.h"
#include "pico/bootrom.h"
// #include "songs.c"
//  #include "matrizled.c"

// FIM DO FUNCIONAMENTO DA MATRIZ DE LEDS-------------------------------------------------------------------------------------

// Definir os pinos GPIO para LEDs e Buzzer
#define LED_RED_PIN 13
#define LED_GREEN_PIN 11
#define LED_BLUE_PIN 12
// #define BUZZER_PIN 21
#define LED_PIN 7

// botão de interupção
const uint button_0 = 5;

// Função para inicializar os pinos GPIO
void ini_leds()
{

    // Inicializar os pinos dos LEDs como saída
    gpio_init(LED_RED_PIN);
    gpio_init(LED_GREEN_PIN);
    gpio_init(LED_BLUE_PIN);
    gpio_set_dir(LED_RED_PIN, GPIO_OUT);
    gpio_set_dir(LED_GREEN_PIN, GPIO_OUT);
    gpio_set_dir(LED_BLUE_PIN, GPIO_OUT);
}

void desligarleds()
{
}

int blue_leds[5][5][3] = {
    {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
    {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
    {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
    {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
    {{0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}, {0, 0, 255}},
};

void B_Key(){
    // Função para acender todos os LEDs no azul 100% de intensidade
    desenhaSprite(blue_leds);
    fps();
}

int red_leds80[5][5][3] = {
    {{204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}},
    {{204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}},
    {{204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}},
    {{204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}},
    {{204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}, {204, 0, 0}},
};

void C_Key(){
    // Função para acender todos os LEDs no vermelho 80% de intensidade
    desenhaSprite(red_leds80);
    fps();
}

// Função para controlar o LED RGB com base na tecla pressionada
void control_rgb_led(char key)
{
    // Ativar LEDs específicos com base na tecla
    switch (key)
    {
    case 'A':
          DesligarLeds();
        break;
    case 'B':
        B_Key();
        break;
    case 'C':
        C_Key();
        break;
    case 'D':

        break;
    }
}

// Função para escanear o teclado e detectar uma tecla pressionada

// rotina da interrupção
static void gpio_irq_handler(uint gpio, uint32_t events)
{
    printf("Interrupção ocorreu no pino %d, no evento %d\n", gpio, events);
    printf("HABILITANDO O MODO GRAVAÇÃO");
    reset_usb_boot(0, 0); // habilita o modo de gravação do microcontrolador
}

// Loop principal do programa
int main()
{

    // inicializar o botão de interrupção - GPIO5
    gpio_init(button_0);
    gpio_set_dir(button_0, GPIO_IN);
    gpio_pull_up(button_0);

    // INICIALIZA ALGUNS COMPONENTES
    stdio_init_all();

    npInit(LED_PIN);
    // INICIALIZA  AMTRIZ DE LEDS 5X5
    ini_leds();
    // INICIALIZA O TECLADO
    ini_keypad();

    // INICIALIZA O BUZZER
    // pwm_init_buzzer(BUZZER_PIN);
    // pwm_init_buzzer(BUZZER_PIN);

    // interrupção da gpio habilitada
    gpio_set_irq_enabled_with_callback(button_0, GPIO_IRQ_EDGE_FALL, 1, &gpio_irq_handler);

    printf("Tecla pressionada: %c\n");

    // Não faz mais nada. Loop infinito.

    while (1)
    {

        char key = get_keypad_input();
        //       char comando[50];
        //      printf("Digite um comando: ");
        //      scanf("%s", comando);
        // flamanego_music();
        //
        //        if (strcmp(comando, "1") == 0)
        //        {
        //            Animacao1();
        //        }
        //        else if (strcmp(comando, "2") == 0)
        //        {
        //            Animacao2();
        //        }
        //        else if (strcmp(comando, "3") == 0)
        //        {
        // Animacao3;
        //        }
        //        else if (strcmp(comando, "4") == 0)
        //       {
        //           Animacao4();
        //        }
        //        else if (strcmp(comando, "5") == 0)
        //        {
        // Animacao5;
        //        }
        //       else if (strcmp(comando, "6") == 0)
        //        {
        //            Animacao6();
        //        }
        //        else if (strcmp(comando, "7") == 0)
        ///        {
        //            Animacao7();
        //        }
        //        else if (strcmp(comando, "8") == 0)
        //        {
        //            Animacao8();
        //        }
        //        else if (strcmp(comando, "9") == 0)
        //        {
        //            flamanego_music();
        //        }

        if (key != 0)
        {
            // Imprimir a tecla pressionada
            printf("Tecla pressionada: %c\n", key);
            // Tratar teclas numéricas
            if (key == '1')
            {
                Animacao1(); // BONECO DANCANDO
            }

            if (key == '2')
            {
                Animacao2(); // CONTAGEM
            }

            if (key == '3')
            {
                // NAO TEM NADA
            }

            if (key == '4')
            {
                Animacao4(); // ANIMACAO SETA
            }

            if (key == '5')
            {
                // NAO TEM NADA
            }

            if (key == '6')
            {
                Animacao6(); // CHUVA COM RELAMPAGO
            }

            if (key == '7')
            {
                Animacao7(); // conrinha maça
            }

            if (key == '8')
            {
                Animacao8(); // cobrinha onda
            }

            if (key == '9')
            {
                flamanego_music(); // FLAMEMGO
            }

            // Tratar teclas de controle de LED RGB
            if (key >= 'A' && key <= 'D')
            {
                control_rgb_led(key);
            }

            // Tratar controle do Buzzer
            if (key == '#')
            {
                // beep(BUZZER_PIN, 2000);
            }

            if (key == '*')
            {
                gpio_irq_handler(key, GPIO_IRQ_EDGE_FALL);
            }
        }

        sleep_ms(50); // Atraso para evitar polling excessivo
    }

    return 0;
}
