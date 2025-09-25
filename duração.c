#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundosRestantes;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundosRestantes = segundos % 3600;
    minutos = segundosRestantes / 60;
    segundosRestantes = segundosRestantes % 60;

    printf("%d:%d:%d\n", horas, minutos, segundosRestantes);

    return 0;
}