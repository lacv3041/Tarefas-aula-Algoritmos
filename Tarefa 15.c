#include <stdio.h>

int main() {
    // Declara��o das vari�veis
    float raio;
    float area;
    const float PI = 3.14;

    // Solicita ao usu�rio que digite o valor do raio
    printf("Digite o valor do raio da pizza: ");
    scanf("%f", &raio);

    // Calcula a �rea usando a f�rmula A = PI * r^2
    area = PI * (raio * raio);

    // Exibe o resultado na tela
    printf("A area da pizza com raio %.2f e: %.2f\n", raio, area);

    return 0;
}
