    #include <stdio.h>

    int main() {
        char name[50];
        int age;

        printf("Escreva seu nome: ");
        fgets(name, sizeof(name), stdin);

        printf("Escreca sua idade: ");
        scanf("%d", &age);

        printf("Olá, %sVocê tem %d anos.\n", name, age);

        return 0;
    }