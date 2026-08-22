#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra, salarioTotal;
    int horasExtras;

    printf("Salario-base: ");
    scanf("%f", &salarioBase);

    printf("Quantidade de horas extras: ");
    scanf("%d", &horasExtras);

    printf("Valor da hora extra: ");
    scanf("%f", &valorHoraExtra);

    salarioTotal = salarioBase + (horasExtras * valorHoraExtra);

    printf("Salario total = R$ %.2f\n", salarioTotal);

    return 0;
}