//Faça um algoritmo para um terminal de auto-atendimento bancário que realiza
 //saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado e
 //deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O
 //programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina
 //possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a
 //quantidade de cédulas na seguinte ordem: 10,5,1.

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int valor_saque;
    int cedulas_10, cedulas_5, cedulas_1;

    // Solicita ao usuário o valor a ser sacado
    printf("Digite o valor que deseja sacar: ");
    scanf("%d", &valor_saque);

    // Lógica para calcular a quantidade de cédulas
    // O algoritmo greedy (guloso) é usado para sempre priorizar a maior cédula disponível,
    // garantindo o menor número total de cédulas.

    // 1. Cédulas de R$ 10
    // A divisão inteira por 10 nos dá o número máximo de cédulas de 10 que cabem no valor.
    cedulas_10 = valor_saque / 10;

    // O operador de módulo (%) nos dá o resto da divisão, que é o valor que ainda precisa ser sacado.
    valor_saque = valor_saque % 10;

    // 2. Cédulas de R$ 5
    // Calculamos as cédulas de 5 a partir do valor restante.
    cedulas_5 = valor_saque / 5;

    // Atualizamos o valor restante.
    valor_saque = valor_saque % 5;

    // 3. Cédulas de R$ 1
    // O valor restante após as cédulas de 10 e 5 é o número de cédulas de 1.
    cedulas_1 = valor_saque;

    // Exibe o resultado na tela
    printf("Você receberá as seguintes cédulas:\n");
    printf("Cédulas de R$ 10: %d\n", cedulas_10);
    printf("Cédulas de R$ 5: %d\n", cedulas_5);
    printf("Cédulas de R$ 1: %d\n", cedulas_1);

    return 0;
}
