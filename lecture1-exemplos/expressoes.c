#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int soma, subtracao, multiplicacao, divisao, modulo;

    // Expressões aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    modulo = a % b;

    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Subtração: %d - %d = %d\n", a, b, subtracao);
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);
    printf("Divisão: %d / %d = %d\n", a, b, divisao);
    printf("Módulo: %d %% %d = %d\n", a, b, modulo);

    // Expressão lógica
    if (a > b && b > 0) {
        printf("%d é maior que %d e %d é positivo\n", a, b, b);
    }

    return 0;
}

