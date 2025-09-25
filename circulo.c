#include <stdio.h>
int main() { double r, area;
printf("Digite o valor do raio: ");
scanf("%lf", &r);

// Fórmula da área: π * r²
area = M_PI * r * r; // ou 3.14159 * r * r

printf("AREA = %.3lf\n", area);

return 0;
}
