#include <stdio.h>

int main() {
    // Declarando as vari�veis. Usamos 'float' para permitir valores com casas decimais.
    float altura_pessoa = 1.70; // Exemplo: A altura da pessoa � de 1,70 metros.
                                // Voc� pode alterar este valor para a sua altura real.
    float sombra_pessoa;
    float sombra_predio;
    float altura_predio;

    // Mensagem de boas-vindas e instru��o para o usu�rio
    printf("--- Calculadora de Altura de Predio (Triangulos Semelhantes) ---\n");
    printf("Para calcular a altura de um predio, precisamos de algumas informacoes.\n");
    printf("Sua altura e considerada de %.2f metros.\n\n", altura_pessoa);

    // 1. Solicita a sombra da pessoa
    printf("Digite o comprimento da sua sombra no chao (em metros): ");
    scanf("%f", &sombra_pessoa);

    // 2. Solicita a sombra do pr�dio
    printf("Digite o comprimento da sombra do predio no chao (em metros): ");
    scanf("%f", &sombra_predio);

    // 3. Realiza o c�lculo da altura do pr�dio, usando a propor��o
    // Cuidado: � necess�rio verificar se a sombra da pessoa n�o � zero para evitar divis�o por zero.
    if (sombra_pessoa > 0) {
        altura_predio = (altura_pessoa * sombra_predio) / sombra_pessoa;

        // 4. Exibe o resultado na tela
        printf("\nCalculando a altura...\n");
        printf("A altura estimada do predio e de %.2f metros.\n", altura_predio);
    } else {
        printf("\nErro: A sombra da pessoa nao pode ser zero. Nao e possivel realizar o calculo.\n");
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
