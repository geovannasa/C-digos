#include <stdio.h>

int main() {
    char escala;
    float temperatura, resultado;
    
    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf(" %c", &escala);
    
    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);
        resultado = 5.0 * (temperatura - 32.0) / 9.0;
        printf("Temperatura equivalente em Celsius: %.2f\n", resultado);
    } else if (escala == 'C' || escala == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);
        resultado = (temperatura * 9.0 / 5.0) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2f\n", resultado);
    } else {
        printf("Escala invalida!\n");
    }
    
    return 0;
}