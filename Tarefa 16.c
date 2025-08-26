int main() {
    float temperatura;
    char unidade;

    // Solicita ao usu�rio que insira a temperatura
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    // Solicita ao usu�rio que insira a unidade (C para Celsius, F para Fahrenheit)
    printf("Digite a unidade de origem (C ou F): ");
    scanf(" %c", &unidade); // O espa�o antes de %c � para consumir qualquer caractere de espa�o em branco (como o enter) deixado pelo scanf anterior.

    // Verifica a unidade e realiza a convers�o
    if (unidade == 'C' || unidade == 'c') {
        // F�rmula de Celsius para Fahrenheit
        float fahrenheit = (temperatura * 9/5) + 32;
        printf("%.2f Celsius e igual a %.2f Fahrenheit.\n", temperatura, fahrenheit);
    } else if (unidade == 'F' || unidade == 'f') {
        // F�rmula de Fahrenheit para Celsius
        float celsius = (temperatura - 32) * 5/9;
        printf("%.2f Fahrenheit e igual a %.2f Celsius.\n", temperatura, celsius);
    } else {
        // Mensagem de erro para unidade inv�lida
        printf("Unidade invalida. Por favor, digite 'C' ou 'F'.\n");
    }

    return 0;
}
