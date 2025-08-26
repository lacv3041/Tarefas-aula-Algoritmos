#include <stdio.h>

int main() {

    float nota1, nota2, mediaPonderada;


    int peso1 = 2;
    int peso2 = 3;


    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);


    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);


    mediaPonderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);


    printf("A média ponderada das notas é: %.2f\n", mediaPonderada);

    return 0;
}
