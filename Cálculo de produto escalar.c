#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], produto = 0;
    
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
        produto += vetor1[i] * vetor2[i];
    }
    
    printf("Produto escalar: %d\n", produto);
    
    return 0;
}