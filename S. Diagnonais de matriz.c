#include <stdio.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma_principal = 0, soma_secundaria = 0;
    
    for(int i = 0; i < 3; i++) {
        soma_principal += matriz[i][i]; // Diagonal principal
        soma_secundaria += matriz[i][2 - i]; // Diagonal secundária
    }
    
    printf("Soma diagonal principal: %d\n", soma_principal);
    printf("Soma diagonal secundaria: %d\n", soma_secundaria);
    
    return 0;
}