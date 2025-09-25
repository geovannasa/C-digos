#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int temp;
    
    printf("Matriz original:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // Invertendo cada linha
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 1; j++) { // Só precisa percorrer metade
            temp = matriz[i][j];
            matriz[i][j] = matriz[i][2 - j];
            matriz[i][2 - j] = temp;
        }
    }
    
    printf("\nMatriz com linhas invertidas:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}