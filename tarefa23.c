

#include <stdio.h>

int main() {

    float base_maior, base_menor, altura, area;


    printf("Digite o valor da base maior do trap�zio: ");
    scanf("%f", &base_maior);


    printf("Digite o valor da base menor do trap�zio: ");
    scanf("%f", &base_menor);


    printf("Digite o valor da altura do trap�zio: ");
    scanf("%f", &altura);


    area = ((base_maior + base_menor) * altura) / 2.0;


    printf("A �rea do trap�zio �: %.2f\n", area);


    return 0;
}
