#include <stdio.h>

int main() {
    int inteiro;
    float pontoFlutuante;
    double pontoFlutuanteDuplo;
    char caractere;
    char string[100];

    // Leitura dos dados
    printf("Digite um número inteiro: ");
    scanf("%d", &inteiro);

    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &pontoFlutuante);

    printf("Digite um número de ponto flutuante duplo: ");
    scanf("%lf", &pontoFlutuanteDuplo);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); // Note o espaço antes de %c para ignorar espaços em branco

    printf("Digite uma string: ");
    scanf("%s", string);

    // Saída dos dados
    printf("\nVocê digitou o número inteiro: %d\n", inteiro);
    printf("Você digitou o número de ponto flutuante: %f\n", pontoFlutuante);
    printf("Você digitou o número de ponto flutuante duplo: %lf\n", pontoFlutuanteDuplo);
    printf("Você digitou o caractere: %c\n", caractere);
    printf("Você digitou a string: %s\n", string);

    return 0;
}