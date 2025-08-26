#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as notas e a média ponderada
    float nota1, nota2, nota3;
    float media_ponderada;

    // Solicita ao usuário que insira as três notas
    printf("Digite a primeira nota (peso 1): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 2): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (peso 3): ");
    scanf("%f", &nota3);

    // Calcula a média ponderada. A fórmula é (Soma dos Produtos) / (Soma dos Pesos).
    // Soma dos Produtos: (nota1 * 1) + (nota2 * 2) + (nota3 * 3)
    // Soma dos Pesos: 1 + 2 + 3 = 6
    media_ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6.0;

    // Exibe o resultado da média ponderada.
    // Usamos "%.2f" para exibir a média com duas casas decimais.
    printf("A média ponderada do aluno é: %.2f\n", media_ponderada);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
