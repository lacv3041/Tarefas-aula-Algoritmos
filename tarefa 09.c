#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar as dimensões e a área do terreno.
    // Usamos 'float' para permitir valores com casas decimais, caso necessário.
    float comprimento, largura, area;

    // 1. Solicita ao usuário o valor do comprimento do terreno
    printf("Digite o comprimento do terreno em metros: ");
    // 2. Lê o valor digitado pelo usuário e armazena na variável 'comprimento'
    scanf("%f", &comprimento);

    // 3. Solicita ao usuário o valor da largura do terreno
    printf("Digite a largura do terreno em metros: ");
    // 4. Lê o valor digitado e armazena na variável 'largura'
    scanf("%f", &largura);

    // 5. Calcula a área do terreno multiplicando o comprimento pela largura
    area = comprimento * largura;

    // 6. Exibe a área calculada para o usuário
    // O '%.2f' formata o número para exibir apenas duas casas decimais
    printf("A área do terreno retangular é de: %.2f m²\n", area);

    // Retorna 0 para indicar que o programa foi executado com sucesso
    return 0;
}
