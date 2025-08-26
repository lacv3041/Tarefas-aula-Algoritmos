#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    float horas_normais, horas_extras;
    float salario_bruto, salario_liquido;

    // Solicita a quantidade de horas normais e l� o valor
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);

    // Solicita a quantidade de horas extras e l� o valor
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    // C�lculo do sal�rio bruto
    salario_bruto = (horas_normais * 10.00) + (horas_extras * 15.00);

    // C�lculo do sal�rio l�quido (desconto de 10% de impostos)
    salario_liquido = salario_bruto - (salario_bruto * 0.10);

    // Exibe os resultados
    printf("\n--- Detalhes do Sal�rio ---\n");
    printf("Sal�rio Bruto: R$ %.2f\n", salario_bruto);
    printf("Sal�rio L�quido (ap�s impostos): R$ %.2f\n", salario_liquido);

    return 0;
}
