#include <stdio.h>

int main() {
    // Declara uma variável para armazenar o número real
    float numero;

    // Solicita ao usuário que digite um número
    printf("Digite um numero real: ");

    // Lê o número digitado pelo usuário e o armazena na variável 'numero'
    scanf("%f", &numero);

    // Calcula a metade do número
    float metade = numero / 2;

    // Exibe o resultado na tela
    printf("A metade do numero %.2f e: %.2f\n", numero, metade);

    return 0;
}
