#include <stdio.h>
#include "pico/stdlib.h" //biblioteca SDK padrão do PICO - funcionalidades para programação básica.

// Define o pino do LED
#define LED_PIN 13

// Define os tempos em milissegundos
#define DOT_TIME 200       // Duração de um ponto (.)
#define DASH_TIME 800      // Duração de um traço (-)
#define GAP_TIME 125       // Intervalo entre pontos e traços
#define LETTER_GAP_TIME 250 // Intervalo entre letras
#define CYCLE_GAP_TIME 3000 // Intervalo entre ciclos de SOS

// Função para acender o LED por um determinado tempo
void led_on(int duration) {
    gpio_put(LED_PIN, true);  // Liga o LED
    sleep_ms(duration);       // Espera o tempo especificado
    gpio_put(LED_PIN, false); // Desliga o LED
}

// Função para enviar o sinal SOS
void enviar_sos() {
    // Sinal de SOS: ... --- ...
    printf("Enviando sinal SOS...\n");
    
    // Enviar três pontos (.)
    for (int i = 0; i < 3; i++) {
        led_on(DOT_TIME);
        printf(".");  // Exibe um ponto no terminal
        fflush(stdout); // Garante que o texto seja exibido imediatamente
        sleep_ms(GAP_TIME); // Intervalo entre os pontos
    }

    sleep_ms(LETTER_GAP_TIME); // Intervalo entre letras
    printf(" "); // Espaço entre letras

    // Enviar três traços (-)
    for (int i = 0; i < 3; i++) {
        led_on(DASH_TIME);
        printf("-");  // Exibe um traço no terminal
        fflush(stdout);
        sleep_ms(GAP_TIME); // Intervalo entre os traços
    }

    sleep_ms(LETTER_GAP_TIME); // Intervalo entre letras
    printf(" "); // Espaço entre letras

    // Enviar três pontos (.)
    for (int i = 0; i < 3; i++) {
        led_on(DOT_TIME);
        printf(".");  // Exibe um ponto no terminal
        fflush(stdout);
        sleep_ms(GAP_TIME); // Intervalo entre os pontos
    }

    printf("\n\n"); // Nova linha após completar o SOS

}

int main() {
    // Inicializa o GPIO do LED
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    // Inicializa o terminal para exibir mensagens
    stdio_init_all();

    while (true) {
        enviar_sos();           // Envia o sinal SOS
        sleep_ms(CYCLE_GAP_TIME); // Espera antes de reiniciar o ciclo
    }

    return 0;
}