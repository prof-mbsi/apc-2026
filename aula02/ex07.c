#include <stdio.h>

int main() {
    float distancia, consumo, precoCombustivel;
    float litrosNecessarios, custo;

    printf("Distancia da viagem (km): ");
    scanf("%f", &distancia);

    printf("Consumo do carro (km/l): ");
    scanf("%f", &consumo);

    printf("Preco do litro do combustivel: ");
    scanf("%f", &precoCombustivel);

    litrosNecessarios = distancia / consumo;
    custo = litrosNecessarios * precoCombustivel;

    printf("Custo estimado: R$ %.2f\n", custo);

    return 0;
}