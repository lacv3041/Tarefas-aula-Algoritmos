#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar os três números e o resultado.
    // Usamos 'float' para permitir números com casas decimais.
    float numero1, numero2, numero3, resultado;

    // Solicita ao usuário que digite o primeiro número.
    printf("Digite o primeiro número: ");
    // Lê o número digitado pelo usuário e armazena na variável 'numero1'.
    scanf("%f", &numero1);

    // Solicita ao usuário que digite o segundo número.
    printf("Digite o segundo número: ");
    // Lê o número e armazena na variável 'numero2'.
    scanf("%f", &numero2);

    // Solicita ao usuário que digite o terceiro número.
    printf("Digite o terceiro número: ");
    // Lê o número e armazena na variável 'numero3'.
    scanf("%f", &numero3);

    // Realiza a multiplicação dos três números.
    resultado = numero1 * numero2 * numero3;

    // Exibe o resultado da multiplicação na tela.
    printf("O resultado da multiplicação é: %.2f\n", resultado);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
