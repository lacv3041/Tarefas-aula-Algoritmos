#include <stdio.h>

int main(){
//Declara��o das vari�veis para armazenar a dist�ncia, o tempo e a velocidade
//Utilizei o tipo 'float' para permitir n�meros decimais.
float distancia,tempo,velocidadeMedia;

//Solicita ao usuario que insira a distancia percorrida.
printf("Digite a dist�ncia percorrida (em km):");
scanf("%f",&distancia);
printf("Digite o tempo gasto no trajeto( em horas, formato decimal):");
scanf("%f", &tempo);
printf("\nA velocidade m�dia do trajeto �: %.2f km/h\n", velocidadeMedia);

return 0;
}
