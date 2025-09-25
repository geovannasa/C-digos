#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4] = {
        {5, 2, 5, 8},
        {3, 5, 7, 1},
        {5, 9, 2, 5},
        {4, 5, 6, 7}
    };
    
    int numero = 5;
    printf("O numero %d aparece %d vezes na matriz\n", 
           numero, contarOcorrencias(matriz, numero));
    
    return 0;
}