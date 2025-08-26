#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar as quantidades e os valores calculados
    int quantidade_paes;
    int quantidade_broas;
    float total_arrecadado;
    float valor_poupanca;

    // Define os preços de cada item como constantes para facilitar a leitura e manutenção do código
    const float PRECO_PAO = 0.12;
    const float PRECO_BROA = 1.50;
    const float PORCENTAGEM_POUPANCA = 0.10; // 10%

    // 1. Solicita ao usuário a quantidade de pães franceses vendidos
    printf("Digite a quantidade de pães franceses vendidos: ");
    scanf("%d", &quantidade_paes);

    // 2. Solicita ao usuário a quantidade de broas vendidas
    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &quantidade_broas);

    // 3. Calcula o total arrecadado com a venda de pães e broas
    // O total é a soma do valor de cada tipo de item (quantidade * preço)
    total_arrecadado = (quantidade_paes * PRECO_PAO) + (quantidade_broas * PRECO_BROA);

    // 4. Calcula o valor que deve ser guardado na poupança (10% do total)
    valor_poupanca = total_arrecadado * PORCENTAGEM_POUPANCA;

    // 5. Exibe os resultados na tela, formatados para duas casas decimais (moeda)
    printf("\n--- Relatório Diário ---\n");
    printf("Total arrecadado no dia: R$ %.2f\n", total_arrecadado);
    printf("Valor a ser guardado na poupança: R$ %.2f\n", valor_poupanca);

    return 0; // Indica que o programa terminou com sucesso
}
