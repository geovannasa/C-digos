#include <stdio.h>

int main() {
    int numero, fatorial = 1;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    if(numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for(int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d: %d\n", numero, fatorial);
    }
    
    return 0;
}