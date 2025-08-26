#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    int A, B;
    int aux; // Variável auxiliar para "guardar" um valor temporariamente

    // Solicita ao usuário que insira os valores
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Mostra os valores originais
    printf("\n--- Valores Originais ---\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    // --- Início da Lógica de Troca ---
    // 1. Guarda o valor de A em 'aux'
    aux = A;

    // 2. O valor de B é colocado em A (o valor original de A é perdido, por isso o guardamos)
    A = B;

    // 3. O valor de 'aux' (que era o valor original de A) é colocado em B
    B = aux;
    // --- Fim da Lógica de Troca ---

    // Mostra os valores após a troca
    printf("\n--- Valores Trocados ---\n");
    printf("A agora vale: %d\n", A);
    printf("B agora vale: %d\n", B);

    return 0;
}
