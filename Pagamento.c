#include <stdio.h>

int main() {
    char nome[50];
    float valorHora, horasTrabalhadas, pagamento;

    printf("Nome: ");
    scanf("%s", nome);
    printf("Valor por hora: ");
    scanf("%f", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    pagamento = valorHora * horasTrabalhadas;

    printf("O pagamento para %s deve ser %.2f\n", nome, pagamento);

    return 0;
}
