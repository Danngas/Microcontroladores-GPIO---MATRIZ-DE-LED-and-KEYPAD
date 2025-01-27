
#include <matrizled.c>
#include "pico/stdlib.h"
#include "songs.c"
// AQUI VAI TODAS AS ANIMACOES
// É SO CHAMAR NO PROGRAMA PRINCIPAL
// BASTA CRIAR AQUI SUAS ANIMACOES E CHAMAR NO PROGRAMA PRINCIPAL

void fps()
{
    npWrite();
    sleep_ms(70);
    npClear();
}

void fps2(){
    npWrite();
    npClear();
}

// FRAMES ANIMACAO 1 - DANIEL -----------------------------------------------------------
int Ani1Frame1[5][5][3] = {
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};

int Ani1Frame2[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};
int Ani1Frame3[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};

int Ani1Frame4[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};

int Ani1Frame5[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};

int Ani1Frame6[5][5][3] = {{{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
                           {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
                           {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
                           {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
                           {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}}};

int Ani1Frame7[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{65, 243, 11}, {0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}}};

int Ani1Frame8[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}}};

int Ani1Frame9[5][5][3] = {
    {{65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}},
    {{65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}, {65, 243, 11}},
    {{0, 0, 0}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}},
    {{0, 0, 0}, {65, 243, 11}, {0, 0, 0}, {65, 243, 11}, {0, 0, 0}}};

int LedOff[5][5][3] = {
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}},
    {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};

void DesligarLeds()
{
    npWrite(1);
    desenhaSprite(LedOff, 1);
    npClear();
}

// FIM DA ANAIMACAO 1 --------------------------------------------------------------------------------

void Animacao1()
{

    float intensidade = 0.01;
    for (int i = 0; i < 10; i++)
    {
        desenhaSprite(Ani1Frame1, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame2, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame3, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame4, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame5, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame6, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame7, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame8, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        desenhaSprite(Ani1Frame9, intensidade);
        fps(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        // Atualiza os LEDs
    }

    DesligarLeds();
}

// -------------------------------------------------------------------------------------------------------
// ANIMACAO 2 FLAMENGO ------------------------------------------------------------------------------------

// Matrizes das letras do nome "FLAMENGO"
// Vermelho para o fundo: {255, 0, 0}

int letraF[5][5][3] = {
    {{1, 1, 1}, {254, 0, 0}, {254, 0, 0}, {254, 1, 1}, {0, 0, 0}},
    {{1, 1, 0}, {255, 1, 1}, {1, 1, 1}, {0, 1, 0}, {1, 0, 0}},
    {{0, 1, 1}, {254, 0, 0}, {255, 1, 0}, {254, 0, 1}, {0, 1, 0}},
    {{0, 1, 1}, {255, 0, 1}, {1, 1, 1}, {1, 0, 0}, {1, 1, 1}},
    {{0, 1, 0}, {255, 0, 0}, {0, 1, 1}, {1, 0, 1}, {0, 1, 1}}};

int letraL[5][5][3] = {
    {{1, 1, 0}, {254, 0, 0}, {1, 1, 0}, {1, 0, 0}, {1, 0, 1}},
    {{0, 0, 1}, {255, 1, 1}, {1, 0, 0}, {1, 1, 1}, {1, 1, 0}},
    {{0, 1, 0}, {254, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 1}},
    {{0, 1, 0}, {254, 0, 0}, {0, 1, 0}, {0, 0, 1}, {0, 0, 0}},
    {{1, 0, 0}, {255, 0, 1}, {254, 0, 0}, {255, 1, 1}, {1, 0, 0}}};

int letraA[5][5][3] = {
    {{0, 1, 1}, {254, 1, 0}, {254, 0, 1}, {254, 1, 0}, {1, 0, 1}},
    {{1, 0, 1}, {255, 1, 1}, {0, 1, 0}, {254, 1, 0}, {0, 1, 0}},
    {{0, 1, 1}, {255, 0, 0}, {254, 0, 1}, {255, 0, 0}, {0, 1, 1}},
    {{1, 1, 0}, {254, 0, 0}, {1, 0, 0}, {255, 0, 0}, {0, 1, 1}},
    {{1, 0, 0}, {254, 0, 1}, {1, 1, 0}, {254, 0, 0}, {0, 0, 1}}};

int letraM[5][5][3] = {
    {{254, 1, 0}, {0, 1, 0}, {1, 0, 0}, {1, 1, 1}, {255, 0, 0}},
    {{255, 0, 1}, {254, 0, 1}, {0, 1, 0}, {255, 1, 1}, {254, 0, 0}},
    {{255, 1, 0}, {0, 1, 0}, {254, 1, 1}, {1, 1, 0}, {254, 0, 1}},
    {{255, 0, 0}, {0, 1, 0}, {1, 0, 1}, {0, 1, 1}, {255, 0, 0}},
    {{254, 0, 0}, {1, 1, 1}, {1, 0, 0}, {0, 0, 0}, {254, 0, 1}}};

int letraE[5][5][3] = {
    {{255, 0, 1}, {254, 1, 0}, {254, 1, 0}, {255, 1, 0}, {0, 0, 0}},
    {{254, 1, 1}, {0, 0, 1}, {0, 0, 1}, {0, 1, 0}, {0, 1, 1}},
    {{254, 1, 1}, {255, 1, 1}, {255, 0, 0}, {255, 0, 0}, {0, 1, 0}},
    {{254, 0, 1}, {0, 0, 1}, {1, 0, 0}, {1, 0, 0}, {1, 1, 1}},
    {{254, 0, 0}, {254, 0, 1}, {255, 1, 0}, {254, 1, 0}, {0, 0, 0}}};

int letraN[5][5][3] = {

    {{254, 1, 1}, {0, 0, 1}, {1, 1, 0}, {1, 1, 0}, {255, 1, 0}},
    {{255, 1, 0}, {254, 0, 1}, {0, 1, 1}, {1, 1, 1}, {255, 0, 0}},
    {{255, 0, 0}, {1, 0, 0}, {255, 0, 1}, {0, 1, 0}, {255, 1, 0}},
    {{254, 1, 1}, {1, 1, 0}, {0, 1, 1}, {255, 1, 0}, {254, 1, 0}},
    {{255, 1, 1}, {1, 1, 1}, {0, 0, 1}, {0, 1, 0}, {254, 1, 1}}};

int letraG[5][5][3] = {
    {{254, 0, 0}, {255, 0, 0}, {255, 0, 1}, {254, 0, 0}, {254, 1, 0}},
    {{254, 1, 1}, {1, 0, 0}, {1, 0, 0}, {0, 0, 1}, {0, 0, 0}},
    {{255, 0, 1}, {1, 1, 1}, {255, 0, 1}, {254, 1, 1}, {255, 0, 1}},
    {{254, 1, 0}, {0, 0, 1}, {1, 1, 0}, {1, 0, 0}, {254, 0, 1}},
    {{255, 0, 0}, {255, 1, 1}, {255, 1, 0}, {255, 0, 1}, {255, 0, 0}}};

int letraO[5][5][3] = {
    {{255, 1, 0}, {255, 1, 1}, {254, 1, 0}, {255, 1, 0}, {254, 0, 0}},
    {{255, 1, 1}, {1, 1, 0}, {0, 0, 1}, {1, 1, 0}, {254, 1, 1}},
    {{254, 1, 1}, {0, 0, 1}, {0, 0, 1}, {0, 0, 0}, {254, 0, 0}},
    {{254, 0, 1}, {1, 1, 1}, {0, 0, 1}, {0, 1, 0}, {254, 1, 1}},
    {{255, 1, 0}, {254, 1, 1}, {255, 0, 1}, {254, 0, 0}, {255, 1, 0}}};

int CORACAO[5][5][3] = {
    {{0, 1, 1}, {254, 1, 0}, {1, 0, 0}, {255, 0, 0}, {0, 1, 0}},
    {{255, 0, 0}, {0, 1, 0}, {254, 1, 1}, {1, 0, 1}, {254, 0, 0}},
    {{255, 0, 1}, {1, 1, 0}, {1, 0, 0}, {0, 1, 0}, {254, 1, 1}},
    {{0, 0, 1}, {255, 0, 1}, {0, 0, 0}, {254, 0, 1}, {0, 1, 0}},
    {{0, 1, 0}, {0, 1, 1}, {255, 1, 1}, {1, 0, 1}, {0, 1, 0}}};

void flamanego_music()
{
    // stdio_init_all(); // Inicializa a comunicação com o terminal (para depuração, por exemplo)
    int numeroNotas = sizeof(melodia) / sizeof(melodia[0]); // Número de notas na melodia

    // Laço para tocar todas as notas da melodia
    float intensidade = 0.01;
    int count = 0;
    float intensiti = 0.01;
    float incremento = 0.01;
    for (int Nota = 0; Nota < numeroNotas; Nota++)
    {                                            // notas no array melodia
        int tempo = compasso / tempoNotas[Nota]; // Calcula o tempo da nota com base no compasso

        // Verifica se o tempo da nota é negativo (nota pontuada)

        if (tempoNotas[Nota] < 0)
        {
            tempo = compasso / abs(tempoNotas[Nota]); // Calcula a duração da nota
            tempo = tempo * 1.2;                      // Aumenta a duração em 20% para notas pontuadas
        }

        // Toca a nota por um tempo determinado
        play_note(melodia[Nota], tempo, divisor_frequency);
        if (count == 0)
        {
            desenhaSprite(letraF, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 10)
        {
            desenhaSprite(letraL, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 20)
        {
            desenhaSprite(letraA, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 30)
        {
            desenhaSprite(letraM, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 40)
        {
            desenhaSprite(letraE, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 50)
        {
            desenhaSprite(letraN, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 60)
        {
            desenhaSprite(letraG, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count == 70)
        {
            desenhaSprite(letraO, intensidade);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count >= 80 && count <100)        {
            intensiti = intensiti + 0.01;
            desenhaSprite(CORACAO, intensiti);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
        }
        if (count > 100)        {
            intensiti = intensiti - incremento;
            desenhaSprite(CORACAO, intensiti);
            fps2(0.1); // 14 fps / imagens por segundo / tempo de 70 ms
            if(intensiti<0.01){
                incremento = -incremento;

            }
        }

        count++;
        sleep_ms(tempo * 1.2); // Dá um intervalo de 20% após a nota para distinguir
    }

    gpio_put(PWM_PIN, 0);

    printf("Reprodução concluída.\n"); // Mensagem de fim da execução
                                       // Finaliza o programa
}
