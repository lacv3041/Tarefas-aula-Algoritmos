#include <stdio.h>

int main() {
    // Declara��o de vari�veis para armazenar as dimens�es e a �rea do terreno.
    // Usamos 'float' para permitir valores com casas decimais, caso necess�rio.
    float comprimento, largura, area;

    // 1. Solicita ao usu�rio o valor do comprimento do terreno
    printf("Digite o comprimento do terreno em metros: ");
    // 2. L� o valor digitado pelo usu�rio e armazena na vari�vel 'comprimento'
    scanf("%f", &comprimento);

    // 3. Solicita ao usu�rio o valor da largura do terreno
    printf("Digite a largura do terreno em metros: ");
    // 4. L� o valor digitado e armazena na vari�vel 'largura'
    scanf("%f", &largura);

    // 5. Calcula a �rea do terreno multiplicando o comprimento pela largura
    area = comprimento * largura;

    // 6. Exibe a �rea calculada para o usu�rio
    // O '%.2f' formata o n�mero para exibir apenas duas casas decimais
    printf("A �rea do terreno retangular � de: %.2f m�\n", area);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
