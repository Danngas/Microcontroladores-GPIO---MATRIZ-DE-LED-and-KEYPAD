# Microcontroladores-GPIO---MATRIZ-DE-LED-and-KEYPAD
## SUBGRUPO 2 - GRUPO GERAL 5

### Participantes Ativos
* Daniel Silva de Souza (DANNGAS)

 #### Atividade Obrigatória
* Geração de animações em uma matriz de LEDs 5x5
* O objetivo deste projeto é criar animações de curta duração em uma matriz de LEDs RGB 5x5, utilizando o microcontrolador Raspberry Pi Pico W e um teclado matricial 4x4, com a simulação realizada no Wokwi. Também foram adicionadas funcionalidades sonoras opcionais com um buzzer passivo.

# Estrutura do Projeto
# 1. Arquivo Principal
neopixel_pio.c: Responsável pela inicialização do sistema e pelo gerenciamento das animações com base nas teclas pressionadas no teclado matricial.
# 2. Integrações e Bibliotecas
Simulador Wokwi: Código configurado para simular o sistema físico.
* Keypad: Configuração completa do teclado matricial para detecção de teclas e controle das funcionalidades.

* Biblioteca songs.c: Controla o buzzer para emissão de sons e notas musicais.

* Biblioteca notas.h: Contém o mapeamento de notas musicais para a geração de músicas.

* Biblioteca matriz_led.h: Permite a manipulação da matriz de LEDs RGB 5x5, exibindo informações ou animações visuais.

* Biblioteca animacoes.h: Gerencia as animações da matriz de LEDs e as músicas do buzzer.

* piskl_convert: Utilitário externo para converter animações criadas no Piskel para o formato compatível com o código.

# 3. Funcionalidades do Sistema
* Interrupção no Botão GPIO5: Habilita ações específicas, como o modo de gravação do microcontrolador, ao pressionar o botão no pino 5.
* FPS das animações: Configurado para 14 quadros por segundo (70 ms por frame).
# Mapa de Funcionalidades
## Teclas de Animação
* Tecla 1: Animacao1() - Boneco dançando.
* Tecla 2: Animacao2() - Contagem.
* Tecla 4: Animacao4() - Animação de seta.
* Tecla 6: Animacao6() - Chuva com relâmpago.
* Tecla 7: Animacao7() - Cobrinha maçã.
* Tecla 8: Animacao8() - Cobrinha onda.
* Tecla 9: flamengo_music() - Hino do Flamengo, com exibição do nome "FLAMENGO" e coração.
# Teclas de Configuração de LEDs
*  Te8cla A: Desliga todos os LEDs.
* Tecla B: LEDs na cor azul com 100% de brilho.
* Tecla C: LEDs na cor vermelha com 80% de brilho.
* Tecla D: LEDs na cor verde com 50% de brilho.
* Tecla #: LEDs na cor branca com 20% de brilho.
* Tecla *: Entra no modo de gravação via software (reboot).
#Especificações Técnicas
##Componentes Simulados:

* Teclado matricial 4x4.
* Matriz de LEDs RGB 5x5 (WS2812).
* Microcontrolador Raspberry Pi Pico W.
* Buzzer Passivo (MLT-8530 SMD 3.6V) (opcional).
## Requisitos:

Criar  animações diferentes, com no mínimo 5 frames cada, e configurar o FPS.
Controlar luminosidade e cores dos LEDs conforme as teclas configuradas.
Implementar reboot via software na tecla *. (ok)
Ambiente de Desenvolvimento:

VS Code com o Pico SDK.
Integração com o simulador Wokwi. (ok)
Versionamento e Colaboração: (ok)

Cada membro possui um branch no repositório GitHub.(OK)

