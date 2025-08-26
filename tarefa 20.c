#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar o raio, a altura e o volume
    // Usamos 'float' para permitir valores com casas decimais
    float raio, altura, volume;


    const float PI = 3.14159;


    printf("Digite o raio da caixa d'agua (em metros): ");
    scanf("%f", &raio);


    printf("Digite a altura da caixa d'agua (em metros): ");
    scanf("%f", &altura);


    volume = PI * (raio * raio) * altura;


    printf("\nO volume da caixa d'agua e de: %.2f metros cubicos\n", volume);


    return 0;
}
