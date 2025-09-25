#include <stdio.h>
int main(){
double larg,comp,area,valorm2,preço;
printf("Digite o valor do comprimentro: ");
scanf("%lf", &comp);
printf("Digite o valor d largura: ");
scanf("%lf", &larg);
area = comp * larg;
printf("Digite o valor do metro quadrado: ");
scanf("%lf", &valorm2);
preco = area * valorm2;
printf("Aarea do terreno e: %.2lf\n", area);
printf("O preco do terreno e: %.2lf\n", preco);
return 0;
}