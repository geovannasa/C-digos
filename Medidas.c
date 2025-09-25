#include <stdio.h>

int main() {
    float A, B, C;
    float areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%f", &A);
    printf("Digite a medida B: ");
    scanf("%f", &B);
    printf("Digite a medida C: ");
    scanf("%f", &C);

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2;
    areaTrapezio = ((A + B) * C) / 2;

    printf("AREA DO QUADRADO = %.4f\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4f\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4f\n", areaTrapezio);

    return 0;
}