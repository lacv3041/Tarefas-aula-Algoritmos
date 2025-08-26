#include <stdio.h>
#include <locale.h> // Biblioteca para definir a localiza��o e usar acentos

int main() {
    // Define o local para portugu�s para permitir acentos e o uso da v�rgula
    setlocale(LC_ALL, "Portuguese");

    // Declara��o das vari�veis
    float salario_atual;      // Para armazenar o sal�rio digitado pelo usu�rio
    float porcentagem_aumento; // Para armazenar a porcentagem de aumento
    float valor_aumento;       // Para armazenar o valor calculado do aumento
    float novo_salario;        // Para armazenar o novo sal�rio ap�s o aumento

    // 1. Solicita o sal�rio ao usu�rio
    printf("Digite o valor do seu sal�rio atual: R$ ");
    // L� o valor digitado pelo usu�rio e armazena na vari�vel 'salario_atual'
    scanf("%f", &salario_atual);

    // 2. Solicita a porcentagem de aumento
    printf("Digite a porcentagem de aumento (apenas o n�mero): ");
    // L� o valor digitado e armazena na vari�vel 'porcentagem_aumento'
    scanf("%f", &porcentagem_aumento);

    // 3. Calcula o valor do aumento
    // A f�rmula �: (sal�rio * porcentagem) / 100
    valor_aumento = (salario_atual * porcentagem_aumento) / 100;

    // 4. Calcula o novo sal�rio
    // A f�rmula �: sal�rio atual + valor do aumento
    novo_salario = salario_atual + valor_aumento;

    // 5. Exibe os resultados na tela
    printf("\n--- RESULTADO ---\n");
    // '%.2f' � usado para formatar o n�mero para que ele mostre apenas duas casas decimais
    printf("Valor do aumento: R$ %.2f\n", valor_aumento);
    printf("Seu novo sal�rio ser�: R$ %.2f\n", novo_salario);

    return 0; // Indica que o programa terminou com sucesso
}
