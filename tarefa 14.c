#include <stdio.h>

int main() {
    // Declara��o das vari�veis para armazenar os valores
    float salario_inicial;
    float salario_com_aumento;
    float salario_final;

    // 1. Solicita ao usu�rio que digite o sal�rio
    printf("Digite o salario do funcionario: R$ ");
    scanf("%f", &salario_inicial);

    // 2. Calcula o sal�rio com aumento de 15%
    salario_com_aumento = salario_inicial + (salario_inicial * 0.15);

    // 3. Calcula o sal�rio final, descontando 8% de imposto sobre o sal�rio com aumento
    salario_final = salario_com_aumento - (salario_com_aumento * 0.08);

    // 4. Exibe os resultados na tela
    printf("\n--- Detalhes do Salario ---\n");
    printf("Salario Inicial: R$ %.2f\n", salario_inicial);
    printf("Salario com aumento (+15%%): R$ %.2f\n", salario_com_aumento);
    printf("Salario Final (com desconto de impostos): R$ %.2f\n", salario_final);

    return 0;
}
