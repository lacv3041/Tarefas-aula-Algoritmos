#include <stdio.h>

int main(){
//Declaração das variáveis para armazenar a distância, o tempo e a velocidade
//Utilizei o tipo 'float' para permitir números decimais.
float distancia,tempo,velocidadeMedia;

//Solicita ao usuario que insira a distancia percorrida.
printf("Digite a distância percorrida (em km):");
scanf("%f",&distancia);
printf("Digite o tempo gasto no trajeto( em horas, formato decimal):");
scanf("%f", &tempo);
printf("\nA velocidade média do trajeto é: %.2f km/h\n", velocidadeMedia);

return 0;
}
