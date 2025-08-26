//Fa�a um algoritmo para um terminal de auto-atendimento banc�rio que realiza
 //saques em dinheiro. O programa deve solicitar ao usu�rio qual o valor a ser retirado e
 //deve exibir na tela qual a quantidade de cada c�dula ser� entregue ao usu�rio. O
 //programa sempre deve tentar utilizar o menor n�mero poss�vel de c�dulas. A m�quina
 //possui apenas c�dulas de R$ 10, 5 e 1. Voc� deve exibir as vari�veis que contem a
 //quantidade de c�dulas na seguinte ordem: 10,5,1.

#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    int valor_saque;
    int cedulas_10, cedulas_5, cedulas_1;

    // Solicita ao usu�rio o valor a ser sacado
    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor_saque);

    // L�gica para calcular a quantidade de c�dulas
    // O algoritmo greedy (guloso) � usado para sempre priorizar a maior c�dula dispon�vel,
    // garantindo o menor n�mero total de c�dulas.

    // 1. C�dulas de R$ 10
    // A divis�o inteira por 10 nos d� o n�mero m�ximo de c�dulas de 10 que cabem no valor.
    cedulas_10 = valor_saque / 10;

    // O operador de m�dulo (%) nos d� o resto da divis�o, que � o valor que ainda precisa ser sacado.
    valor_saque = valor_saque % 10;

    // 2. C�dulas de R$ 5
    // Calculamos as c�dulas de 5 a partir do valor restante.
    cedulas_5 = valor_saque / 5;

    // Atualizamos o valor restante.
    valor_saque = valor_saque % 5;

    // 3. C�dulas de R$ 1
    // O valor restante ap�s as c�dulas de 10 e 5 � o n�mero de c�dulas de 1.
    cedulas_1 = valor_saque;

    // Exibe o resultado na tela
    printf("Voc� receber� as seguintes c�dulas:\n");
    printf("C�dulas de R$ 10: %d\n", cedulas_10);
    printf("C�dulas de R$ 5: %d\n", cedulas_5);
    printf("C�dulas de R$ 1: %d\n", cedulas_1);

    return 0;
}
