#include <stdio.h>

int main() {
    // Declaração das variáveis
    float raio;
    float area;
    const float PI = 3.14;

    // Solicita ao usuário que digite o valor do raio
    printf("Digite o valor do raio da pizza: ");
    scanf("%f", &raio);

    // Calcula a área usando a fórmula A = PI * r^2
    area = PI * (raio * raio);

    // Exibe o resultado na tela
    printf("A area da pizza com raio %.2f e: %.2f\n", raio, area);

    return 0;
}
