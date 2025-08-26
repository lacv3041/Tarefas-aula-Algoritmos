#include <stdio.h>

int main() {
    // Declara��o de vari�veis para armazenar as quantidades e os valores calculados
    int quantidade_paes;
    int quantidade_broas;
    float total_arrecadado;
    float valor_poupanca;

    // Define os pre�os de cada item como constantes para facilitar a leitura e manuten��o do c�digo
    const float PRECO_PAO = 0.12;
    const float PRECO_BROA = 1.50;
    const float PORCENTAGEM_POUPANCA = 0.10; // 10%

    // 1. Solicita ao usu�rio a quantidade de p�es franceses vendidos
    printf("Digite a quantidade de p�es franceses vendidos: ");
    scanf("%d", &quantidade_paes);

    // 2. Solicita ao usu�rio a quantidade de broas vendidas
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &quantidade_broas);

    // 3. Calcula o total arrecadado com a venda de p�es e broas
    // O total � a soma do valor de cada tipo de item (quantidade * pre�o)
    total_arrecadado = (quantidade_paes * PRECO_PAO) + (quantidade_broas * PRECO_BROA);

    // 4. Calcula o valor que deve ser guardado na poupan�a (10% do total)
    valor_poupanca = total_arrecadado * PORCENTAGEM_POUPANCA;

    // 5. Exibe os resultados na tela, formatados para duas casas decimais (moeda)
    printf("\n--- Relat�rio Di�rio ---\n");
    printf("Total arrecadado no dia: R$ %.2f\n", total_arrecadado);
    printf("Valor a ser guardado na poupan�a: R$ %.2f\n", valor_poupanca);

    return 0; // Indica que o programa terminou com sucesso
}
