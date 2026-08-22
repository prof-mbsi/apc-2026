#include <stdio.h>

int main() {
    int horas;
    int minutos, segundos;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    minutos = horas * 60;
    segundos = horas * 3600;

    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}