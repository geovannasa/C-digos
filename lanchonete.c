#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;
    
    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    
    switch (codigo) {
        case 1:
            preco = 5.00;
            break;
        case 2:
            preco = 3.50;
            break;
        case 3:
            preco = 4.80;
            break;
        case 4:
            preco = 8.90;
            break;
        case 5:
            preco = 7.32;
            break;
        default:
            printf("Codigo invalido!\n");
            return 1;
    }
    
    total = preco * quantidade;
    printf("Valor a pagar: R$ %.2f\n", total);
    
    return 0;
}