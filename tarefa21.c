#include <stdio.h>

int main() {
    // Declara��o das vari�veis para armazenar os tr�s n�meros e o resultado.
    // Usamos 'float' para permitir n�meros com casas decimais.
    float numero1, numero2, numero3, resultado;

    // Solicita ao usu�rio que digite o primeiro n�mero.
    printf("Digite o primeiro n�mero: ");
    // L� o n�mero digitado pelo usu�rio e armazena na vari�vel 'numero1'.
    scanf("%f", &numero1);

    // Solicita ao usu�rio que digite o segundo n�mero.
    printf("Digite o segundo n�mero: ");
    // L� o n�mero e armazena na vari�vel 'numero2'.
    scanf("%f", &numero2);

    // Solicita ao usu�rio que digite o terceiro n�mero.
    printf("Digite o terceiro n�mero: ");
    // L� o n�mero e armazena na vari�vel 'numero3'.
    scanf("%f", &numero3);

    // Realiza a multiplica��o dos tr�s n�meros.
    resultado = numero1 * numero2 * numero3;

    // Exibe o resultado da multiplica��o na tela.
    printf("O resultado da multiplica��o �: %.2f\n", resultado);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
