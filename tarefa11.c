#include <stdio.h>

int main() {
    // Declara��o das vari�veis para armazenar as notas e a m�dia ponderada
    float nota1, nota2, nota3;
    float media_ponderada;

    // Solicita ao usu�rio que insira as tr�s notas
    printf("Digite a primeira nota (peso 1): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 2): ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota (peso 3): ");
    scanf("%f", &nota3);

    // Calcula a m�dia ponderada. A f�rmula � (Soma dos Produtos) / (Soma dos Pesos).
    // Soma dos Produtos: (nota1 * 1) + (nota2 * 2) + (nota3 * 3)
    // Soma dos Pesos: 1 + 2 + 3 = 6
    media_ponderada = (nota1 * 1 + nota2 * 2 + nota3 * 3) / 6.0;

    // Exibe o resultado da m�dia ponderada.
    // Usamos "%.2f" para exibir a m�dia com duas casas decimais.
    printf("A m�dia ponderada do aluno �: %.2f\n", media_ponderada);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
