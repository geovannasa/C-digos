#include <stdio.h>

int main() {
    float distancia, combustivel, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Combustivel gasto: ");
    scanf("%f", &combustivel);

    consumoMedio = distancia / combustivel;

    printf("Consumo medio = %.3f\n", consumoMedio);

    return 0;
}