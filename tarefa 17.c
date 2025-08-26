#include <stdio.h>

int main() {
    // Declaração de variáveis
    float horas_normais, horas_extras;
    float salario_bruto, salario_liquido;

    // Solicita a quantidade de horas normais e lê o valor
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);

    // Solicita a quantidade de horas extras e lê o valor
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    // Cálculo do salário bruto
    salario_bruto = (horas_normais * 10.00) + (horas_extras * 15.00);

    // Cálculo do salário líquido (desconto de 10% de impostos)
    salario_liquido = salario_bruto - (salario_bruto * 0.10);

    // Exibe os resultados
    printf("\n--- Detalhes do Salário ---\n");
    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("Salário Líquido (após impostos): R$ %.2f\n", salario_liquido);

    return 0;
}
