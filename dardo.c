#include <stdio.h>
int main () {
    float distancia1, distncia2, distancia3, maior;
    prinft("Digite as tres dista ncias:");
    scanf("%f %f %f", &distancia1, &distancia2, &distancia3);
    maior = distancia1;
    if (distancia2 > maior) {
      maior = distancia2;
    }
    if (distancia3 > maior ){
        maior = distancia3;
    }
printf("Maior distancia = %.2f\n", maior);
    return 0;
}