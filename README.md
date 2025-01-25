# Microcontroladores-GPIO---MATRIZ-DE-LED-and-KEYPAD
Atividade (Obrigatória): Geração de animações em uma matriz de LEDs 5x5

O projeto está estruturado da seguinte forma:

Arquivo Principal - neopixel_pio.c: Este é o arquivo principal do projeto, responsável por integrar e controlar todos os componentes. Ele contém a lógica central de execução do sistema.

Integração com o Wokiwi: O código já está configurado para trabalhar com o Wokiwi, que é a interface de controle do sistema.

Teclado Keypad: A configuração e o funcionamento do teclado matricial (keypad) já estão implementados. Ele permite a detecção de teclas pressionadas para controlar diferentes funcionalidades do sistema.

Buzzer: A biblioteca buzzer.c contém a lógica necessária para controlar o buzzer. Ele pode emitir sons específicos em resposta a ações no sistema.

Matriz de LED 5x5: A matriz de LED 5x5 já está integrada e pode ser utilizada para exibir informações ou criar animações visuais.

Biblioteca animacoes.h: Esta biblioteca foi criada para armazenar e controlar as animações a serem exibidas na matriz de LED ou em outros componentes visuais. A lógica das animações será implementada aqui.

Estrutura do Código: O código está modularizado em algumas bibliotecas:

buzzer.c: Contém o funcionamento do buzzer.
keypad.c: Realiza toda a configuração necessária para o funcionamento do teclado.
animacoes.h: Destinada para a criação e gerenciamento das animações a serem exibidas.
Interrupção no Botão GPIO5: A interrupção no botão conectado ao pino 5 já está habilitada. Quando pressionado, o botão dispara uma interrupção, permitindo a execução de ações específicas, como entrar no modo de gravação do microcontrolador.
