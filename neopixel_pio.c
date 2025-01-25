#include <stdio.h>
#include "hardware/gpio.h"
#include "hardware/clocks.h"
#include "stdlib.h"
#include "keypad.c" // BIBLIOTECA PARA FUNCIONAMENTO DO TECLADO // JA CONFIGURADO
#include "buzzer.c" 
#include "animacoes.h"
#include "stdlib.h"
#include "string.h"
//#include "matrizled.c"




//FIM DO FUNCIONAMENTO DA MATRIZ DE LEDS-------------------------------------------------------------------------------------


// Definir os pinos GPIO para LEDs e Buzzer
#define LED_RED_PIN 13
#define LED_GREEN_PIN 11
#define LED_BLUE_PIN 12
#define BUZZER_PIN 21
#define LED_PIN 7 


// Função para inicializar os pinos GPIO
void ini_leds(){
    

    // Inicializar os pinos dos LEDs como saída
    gpio_init(LED_RED_PIN);
    gpio_init(LED_GREEN_PIN);
    gpio_init(LED_BLUE_PIN);
    gpio_set_dir(LED_RED_PIN, GPIO_OUT);
    gpio_set_dir(LED_GREEN_PIN, GPIO_OUT);
    gpio_set_dir(LED_BLUE_PIN, GPIO_OUT);

}



// Função para controlar o Buzzer
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







// Loop principal do programa
int main(){
    stdio_init_all();
    npInit(LED_PIN);
    ini_leds();

    ini_keypad();
    pwm_init_buzzer(BUZZER_PIN);

   printf("Tecla pressionada: %c\n");



  // Não faz mais nada. Loop infinito.



while (1){

   
        char key = get_keypad_input();
        char comando[50];
        printf("Digite um comando: ");
        scanf("%s", comando);
 if (strcmp(comando, "GREEN") == 0){
    
    Animacao1();
 }
    

    
        
        if (key != 0) {
            // Imprimir a tecla pressionada
            printf("Tecla pressionada: %c\n", key);
            // Tratar teclas numéricas
            if (key == '1')    
                handle_key_1();
            if (key == '2')
                handle_key_2();
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
                handle_key_9();

            // Tratar teclas de controle de LED RGB
            if (key >= 'A' && key <= 'D'){
                control_rgb_led(key);
            }

            // Tratar controle do Buzzer
            if (key == '#')
            {
                beep(BUZZER_PIN, 2000);
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




