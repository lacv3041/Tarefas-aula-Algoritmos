#include <stdio.h>

int main() {
    // Declara uma vari�vel para armazenar o n�mero real
    float numero;

    // Solicita ao usu�rio que digite um n�mero
    printf("Digite um numero real: ");

    // L� o n�mero digitado pelo usu�rio e o armazena na vari�vel 'numero'
    scanf("%f", &numero);

    // Calcula a metade do n�mero
    float metade = numero / 2;

    // Exibe o resultado na tela
    printf("A metade do numero %.2f e: %.2f\n", numero, metade);

    return 0;
}
