#include "pico/stdlib.h"
// Definição do número de LEDs e pino.
#define LED_COUNT 25
#define LED_PIN 7

//CODIGO RESPONSAVEL PELO FUNCIONAMENTO DA MATRIZ DE LED



// Definir o layout da matriz do teclado e os pinos correspondentes
char keypad_layout[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}};

const uint8_t keypad_row_pins[4] = {1, 2, 3, 4};
const uint8_t keypad_col_pins[4] = {6, 8, 9, 10};

// Função para inicializar os pinos GPIO
void ini_keypad()
{
    // Inicializar os pinos das linhas como saída e configurá-los como ALTO
    for (int i = 0; i < 4; i++)
    {
        gpio_init(keypad_row_pins[i]);
        gpio_set_dir(keypad_row_pins[i], GPIO_OUT);
        gpio_put(keypad_row_pins[i], 1);
    }

    // Inicializar os pinos das colunas como entrada com resistores pull-up
    for (int i = 0; i < 4; i++)
    {
        gpio_init(keypad_col_pins[i]);
        gpio_set_dir(keypad_col_pins[i], GPIO_IN);
        gpio_pull_up(keypad_col_pins[i]);
    }

}


char get_keypad_input(){
    char pressed_key = 0;

    // Iterar sobre cada linha para detectar teclas pressionadas
    for (int row = 0; row < 4; row++)
    {
        gpio_put(keypad_row_pins[row], 0);
        uint32_t gpio_states = gpio_get_all();

        for (int col = 0; col < 4; col++)
        {
            if (!(gpio_states & (1u << keypad_col_pins[col])))
            {
                pressed_key = keypad_layout[row][col];
                sleep_ms(200); // Atraso para debounce
            }
        }

        gpio_put(keypad_row_pins[row], 1);
    }

    return pressed_key;
}