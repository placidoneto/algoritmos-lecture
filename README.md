# Controle de Fluxo em C

## Estruturas de Controle de Fluxo

As estruturas de controle de fluxo são utilizadas para controlar o fluxo de execução de um programa. Em C, temos as seguintes estruturas de controle de fluxo: `if`, `else`, `else if`, `switch`, `while`, `do while`, `for`, `break`, `continue`.

### if

A estrutura `if` é utilizada para executar um bloco de código se uma condição for verdadeira.

```c  
if (condicao) {
    // bloco de código
}
```

Um exemplo de uso do `if` é a verificação de uma condição para executar um bloco de código.

```c  
int numero = 10;
if (numero > 5) {
    printf("O número é maior que 5\n");
}
```


### else

A estrutura `else` é utilizada para executar um bloco de código se a condição do `if` for falsa.

```c
if (condicao) {
    // bloco de código
} else {
    // bloco de código
}
```

Um exemplo de uso do `else` é a verificação de uma condição para executar um bloco de código.

```c  
int numero = 4;
if (numero > 5) {
    printf("O número é maior que 5\n");
} else {
    printf("O número é menor ou igual a 5\n");
}
```

### else if

A estrutura `else if` é utilizada para executar um bloco de código se a condição do `if` for falsa e a condição do `else if` for verdadeira.

```c
if (condicao) {
    // bloco de código
} else if (condicao) {
    // bloco de código
}
```

Um exemplo de uso do `else if` é a verificação de uma condição para executar um bloco de código.

```c
int numero = 5;
if (numero > 5) {
    printf("O número é maior que 5\n");
} else if (numero == 5) {
    printf("O número é igual a 5\n");
} else {
    printf("O número é menor que 5\n");
}
```

### switch

A estrutura `switch` é utilizada para executar um bloco de código dependendo do valor de uma variável.

```c
switch (variavel) {
    case valor1:
        // bloco de código
        break;
    case valor2:
        // bloco de código
        break;
    default:
        // bloco de código
}
```

Um exemplo de uso do `switch` é a verificação de uma variável para executar um bloco de código.

```c
char operador = '+';
int numero1 = 10;
int numero2 = 5;
int resultado = 0;

switch (operador) {
    case '+':
        resultado = numero1 + numero2;
        break;
    case '-':
        resultado = numero1 - numero2;
        break;
    case '*':
        resultado = numero1 * numero2;
        break;
    case '/':
        resultado = numero1 / numero2;
        break;
    default:
        printf("Operador inválido\n");
}

printf("Resultado: %d\n", resultado);
```

### while

A estrutura `while` é utilizada para executar um bloco de código enquanto uma condição for verdadeira.

```c
while (condicao) {
    // bloco de código
}
```

Um exemplo de uso do `while` é a execução de um bloco de código enquanto uma condição for verdadeira.

```c
int numero = 0;
while (numero < 5) {
    printf("Número: %d\n", numero);
    numero++;
}
```

### do while

A estrutura `do while` é utilizada para executar um bloco de código pelo menos uma vez e enquanto uma condição for verdadeira.

```c
do {
    // bloco de código
} while (condicao);
```

Um exemplo de uso do `do while` é a execução de um bloco de código pelo menos uma vez e enquanto uma condição for verdadeira.

```c
int numero = 0;
do {
    printf("Número: %d\n", numero);
    numero++;
} while (numero < 5);
```

### for

A estrutura `for` é utilizada para executar um bloco de código um número específico de vezes.

```c
for (inicializacao; condicao; incremento) {
    // bloco de código
}
```

Um exemplo de uso do `for` é a execução de um bloco de código um número específico de vezes.

```c
for (int i = 0; i < 5; i++) {
    printf("Número: %d\n", i);
}
```

### break

A palavra-chave `break` é utilizada para sair de um loop.

```c
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        break;
    }
    printf("Número: %d\n", i);
}
```

### continue

A palavra-chave `continue` é utilizada para pular a iteração atual de um loop.

```c
for (int i = 0; i < 5; i++) {
    if (i == 3) {
        continue;
    }
    printf("Número: %d\n", i);
}
```

## Exemplos com Exercícios

1. Crie um programa em C que verifica se um número é par ou ímpar.

A solução para o 1o exemplo é a seguinte:

```c
#include <stdio.h>

int main() {
    int numero = 10;

    if (numero % 2 == 0) {
        printf("O número é par\n");
    } else {
        printf("O número é ímpar\n");
    }

    return 0;
}
```

2. Crie um programa em C que verifica se um número é positivo, negativo ou zero.

A solução para o 2o exemplo é a seguinte:

```c
#include <stdio.h>

int main() {
    int numero = -10;

    if (numero > 0) {
        printf("O número é positivo\n");
    } else if (numero < 0) {
        printf("O número é negativo\n");
    } else {
        printf("O número é zero\n");
    }

    return 0;
}
```

3. Crie um programa em C que verifica se um número é divisível por 3 e por 5.

A solução para o 3o exemplo é a seguinte:

```c
#include <stdio.h>

int main() {
    int numero = 15;

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O número é divisível por 3 e por 5\n");
    } else {
        printf("O número não é divisível por 3 e por 5\n");
    }

    return 0;
}
```

4. Crie um programa em C que verifica se um número é primo.

A solução para o 4o exemplo é a seguinte:

```c

#include <stdio.h>

int main() {
    int numero = 7;
    int primo = 1;

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo == 1) {
        printf("O número é primo\n");
    } else {
        printf("O número não é primo\n");
    }

    return 0;
}
```

5. Crie um programa em C que verifica se um número é perfeito.  

A solução para o 6o exemplo é a seguinte:

```c
#include <stdio.h>

int main() {
    int numero = 28;
    int soma_divisores = 0;

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    if (soma_divisores == numero) {
        printf("O número é perfeito\n");
    } else {
        printf("O número não é perfeito\n");
    }

    return 0;
}
```

6. Crie um programa em C simule uma calculadora simples.

A solução para o 6o exemplo é a seguinte:

```c
#include <stdio.h>

int main() {
    int opcao;
    
    printf("Escolha uma opção:\n");
    printf("1. Adicionar\n");
    printf("2. Subtrair\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Outro valor para sair\n")
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    while (opcao > 1 || opcao <= 4) {
        
        int a, b;
        printf("Digite dois números: ");
        scanf("%d %d", &a, &b);

        switch (opcao) {
            case 1:
                printf("Resultado: %d\n", a + b);
                break;
            case 2:
                printf("Resultado: %d\n", a - b);
                break;
            case 3:
                printf("Resultado: %d\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Resultado: %d\n", a / b);
                } else {
                    printf("Erro: Divisão por zero não é permitida.\n");
                }
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("Escolha uma opção:\n");
        printf("1. Adicionar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("Outro valor para sair\n")
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);
    }

  
    printf("FINALIZANDO O PROGRAMA...\n");


    return 0;
}
```
