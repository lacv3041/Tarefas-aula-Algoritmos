#include <stdio.h>

int main() {

    int quantidade_frangos;
    float custo_anel_chip = 4.00;
    float custo_anel_alimento = 3.50;
    float gasto_total;


    printf("Digite a quantidade de frangos a serem marcados: ");
    scanf("%d", &quantidade_frangos);


    float custo_por_frango = custo_anel_chip + (2 * custo_anel_alimento);


    gasto_total = quantidade_frangos * custo_por_frango;


    printf("O gasto total da granja para marcar todos os frangos e de R$ %.2f\n", gasto_total);

    return 0;
}
