#include <stdio.h>

int main() {
    int vetor[10], inverso[10];
    
    printf("Digite 10 numeros:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }
    
    printf("Vetor original: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\nVetor invertido: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }
    printf("\n");
    
    return 0;
}