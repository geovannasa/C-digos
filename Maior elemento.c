#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {10, 25, 8, 15},
        {30, 5, 20, 12},
        {18, 7, 35, 22},
        {14, 28, 3, 40}
    };
    
    int maior = matriz[0][0];
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    
    printf("Maior elemento: %d\n", maior);
    return 0;
}