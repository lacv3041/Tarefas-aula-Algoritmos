#include <stdio.h>

int main() {

    double peso_kg;
    double peso_g;


    printf("Digite o peso em quilogramas (ex: 75.5): ");


    scanf("%lf", &peso_kg);

    peso_g = peso_kg * 1000;


    printf("O peso de %.2lf kg equivale a %.2lf gramas.\n", peso_kg, peso_g);


    return 0;
}
