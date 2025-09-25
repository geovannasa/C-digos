#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], resultado[10];
    
    printf("Digite 5 numeros para o primeiro vetor:\n");
    for(int i = 0; i < 5; i++) {
        printf("Vetor1 - Numero %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("Digite 5 numeros para o segundo vetor:\n");
    for(int i = 0; i < 5; i++) {
        printf("Vetor2 - Numero %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    
    for(int i = 0; i < 5; i++) {
        resultado[2 * i] = vetor1[i];
        resultado[2 * i + 1] = vetor2[i];
    }
    
    printf("Vetor intercalado: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
    
    return 0;
}