#include <stdio.h>

int main() {

    int qtd_pequena, qtd_media, qtd_grande;


    float preco_pequena = 10.0;
    float preco_media = 12.0;
    float preco_grande = 15.0;
    float total_arrecadado;


    printf("--- Calculo de Arrecadacao de Vendas de Camisetas ---\n\n");

    printf("Digite a quantidade de camisetas pequenas vendidas: ");
    scanf("%d", &qtd_pequena);

    printf("Digite a quantidade de camisetas medias vendidas: ");
    scanf("%d", &qtd_media);

    printf("Digite a quantidade de camisetas grandes vendidas: ");
    scanf("%d", &qtd_grande);


    total_arrecadado = (qtd_pequena * preco_pequena) +
                       (qtd_media * preco_media) +
                       (qtd_grande * preco_grande);


    printf("\nO valor total arrecadado com as vendas e: R$ %.2f\n", total_arrecadado);

    return 0;
}
