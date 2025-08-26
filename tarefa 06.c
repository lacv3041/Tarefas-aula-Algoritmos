#include <stdio.h>
#include <locale.h> // Biblioteca para definir a localização e usar acentos

int main() {
    // Define o local para português para permitir acentos e o uso da vírgula
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis
    float salario_atual;      // Para armazenar o salário digitado pelo usuário
    float porcentagem_aumento; // Para armazenar a porcentagem de aumento
    float valor_aumento;       // Para armazenar o valor calculado do aumento
    float novo_salario;        // Para armazenar o novo salário após o aumento

    // 1. Solicita o salário ao usuário
    printf("Digite o valor do seu salário atual: R$ ");
    // Lê o valor digitado pelo usuário e armazena na variável 'salario_atual'
    scanf("%f", &salario_atual);

    // 2. Solicita a porcentagem de aumento
    printf("Digite a porcentagem de aumento (apenas o número): ");
    // Lê o valor digitado e armazena na variável 'porcentagem_aumento'
    scanf("%f", &porcentagem_aumento);

    // 3. Calcula o valor do aumento
    // A fórmula é: (salário * porcentagem) / 100
    valor_aumento = (salario_atual * porcentagem_aumento) / 100;

    // 4. Calcula o novo salário
    // A fórmula é: salário atual + valor do aumento
    novo_salario = salario_atual + valor_aumento;

    // 5. Exibe os resultados na tela
    printf("\n--- RESULTADO ---\n");
    // '%.2f' é usado para formatar o número para que ele mostre apenas duas casas decimais
    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Seu novo salário será: R$ %.2f\n", novo_salario);

    return 0; // Indica que o programa terminou com sucesso
}
