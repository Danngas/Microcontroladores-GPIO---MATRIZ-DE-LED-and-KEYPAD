#include <stdio.h>
#include "hardware/gpio.h"
#include "hardware/clocks.h"
//#include "stdlib.h"
#include "keypad.c" // BIBLIOTECA PARA FUNCIONAMENTO DO TECLADO // JA CONFIGURADO
//#include "buzzer.c"
#include "animacoes.h"
#include "stdlib.h"
#include "string.h"
#include "pico/bootrom.h"
//#include "songs.c"
// #include "matrizled.c"

// FIM DO FUNCIONAMENTO DA MATRIZ DE LEDS-------------------------------------------------------------------------------------

// Definir os pinos GPIO para LEDs e Buzzer
#define LED_RED_PIN 13
#define LED_GREEN_PIN 11
#define LED_BLUE_PIN 12
//#define BUZZER_PIN 21
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

// Função para controlar o LED RGB com base na tecla pressionada
void control_rgb_led(char key)
{
    // Ativar LEDs específicos com base na tecla
    switch (key)
    {
    case 'A':

        break;
    case 'B':

        break;
    case 'C':

        break;
    case 'D':

        break;
    }
}

// Funções para teclas numéricas
void handle_key_1()
{
}

void handle_key_2()
{
}

void handle_key_3()
{
}

void handle_key_4()
{
}

void handle_key_5()
{
}

void handle_key_6()
{
}

void handle_key_7()
{
}

void handle_key_8()
{
    // Implementação futura
}

void handle_key_9()
{
    // Implementação futura
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
    //pwm_init_buzzer(BUZZER_PIN);
    //pwm_init_buzzer(BUZZER_PIN);

    // interrupção da gpio habilitada
    gpio_set_irq_enabled_with_callback(button_0, GPIO_IRQ_EDGE_FALL, 1, &gpio_irq_handler);

    printf("Tecla pressionada: %c\n");

    // Não faz mais nada. Loop infinito.

    while (1)
    {

        char key = get_keypad_input();
      //  char comando[50];
       // printf("Digite um comando: ");
        //  scanf("%s", comando);
       // flamanego_music();
   

        //  if (strcmp(comando, "GREEN") == 0)
        //  {

        //}

        if (key != 0)
        {
            // Imprimir a tecla pressionada
            printf("Tecla pressionada: %c\n", key);
            // Tratar teclas numéricas
            if (key == '1')
                Animacao1();
            if (key == '2')
               // Animacao2();
            if (key == '3')
                handle_key_3();
            if (key == '4')
                handle_key_4();
            if (key == '5')
                handle_key_5();
            if (key == '6')
                handle_key_6();
            if (key == '7')
                handle_key_7();
            if (key == '8')
                handle_key_8();
            if (key == '9')
                flamanego_music();

            // Tratar teclas de controle de LED RGB
            if (key >= 'A' && key <= 'D')
            {
                control_rgb_led(key);
            }

            // Tratar controle do Buzzer
            if (key == '#')
            {
                //beep(BUZZER_PIN, 2000);
            }

            if (key == '*')
            {
                desligarleds();
            }
        }

        sleep_ms(50); // Atraso para evitar polling excessivo
    }

    return 0;
}
