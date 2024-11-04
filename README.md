# Matriz, Funções, Recursividade em C e Ponteiros

## Objetivo

O objetivo deste material é fornecer um apoio para a disciplina de Algoritmos, com foco na linguagem de programação C.

## Matriz

Uma matriz é uma coleção de variáveis do mesmo tipo, referenciadas por um nome em comum e um ou mais índices que identificam cada variável individualmente. A matriz é uma estrutura de dados bidimensional, ou seja, é organizada em linhas e colunas.

### Declaração de Matriz

A declaração de uma matriz é feita da seguinte forma:

```c
tipo nome_da_matriz[tamanho_linhas][tamanho_colunas];
```

Exemplo:

```c
int matriz[3][3];
```

### Acesso aos Elementos da Matriz

Os elementos de uma matriz são acessados através de seus índices. O índice da linha e da coluna são utilizados para acessar um elemento específico da matriz.

Exemplo:

```c
matriz[0][0] = 1;
matriz[0][1] = 2;
matriz[0][2] = 3;
matriz[1][0] = 4;
matriz[1][1] = 5;
matriz[1][2] = 6;
matriz[2][0] = 7;
matriz[2][1] = 8;
matriz[2][2] = 9;
```

### Exemplo de Matriz

```c
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Exemplo de leitura de dados de uma matriz

```c
#include <stdio.h>

int main() {
    int matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

### Matrizes com String

As matrizes podem ser utilizadas para armazenar strings. Neste caso, cada elemento da matriz é um vetor de caracteres.

Exemplo:

```c

#include <stdio.h>

int main() {
    char nomes[3][50] = {
        "Maria",
        "João",
        "Ana"
    };

    for (int i = 0; i < 3; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
```

### Leitura de Strings para uma matriz

Para ler strings para uma matriz, é necessário utilizar a função `fgets`. O ```stdin``` é um ponteiro para o arquivo de entrada padrão, que é o teclado. A função `fgets` lê uma linha de texto do arquivo de entrada e armazena na matriz.

Exemplo:

```c
#include <stdio.h>

int main() {
    char nomes[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome: ");
        fgets(nomes[i], 50, stdin);
    }

    for (int i = 0; i < 3; i++) {
        printf("%s", nomes[i]);
    }

    return 0;
}
```

O stdin auxilia na leitura de strings, pois ele lê até o caractere de nova linha, que é o caractere de quebra de linha. O caractere de quebra de linha é armazenado na matriz, por isso é necessário utilizar a função `fgets` para ler strings.

A diferença entre `scanf` e `fgets` é que o `scanf` lê até o espaço em branco, enquanto o `fgets` lê até o caractere de nova linha. O `fgets` é mais seguro para a leitura de strings.

O `gets` e o `fgets` são funções que leem strings, mas o `gets` é mais inseguro, pois não limita o tamanho da string a ser lida, podendo causar um estouro de buffer.

Para um exemplo de nomes de alunos em uma matriz de strings, veja o exemplo abaixo:

```c
#include <stdio.h>

int main() {
    char nomes[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
    }

    for (int i = 0; i < 3; i++) {
        printf("Aluno %d: %s", i + 1, nomes[i]);
    }

    return 0;
}
```

Neste exemplo, o programa lê o nome de 3 alunos e armazena em uma matriz de strings. Em seguida, o programa exibe os nomes dos alunos.

Na verdade é possível perceber que uma matriz de strings é uma matriz de vetores de caracteres.
Assim temos uma lista de strings, onde cada string é um vetor de caracteres em cada linha da matriz.

## Funções

Funções são blocos de código que realizam uma tarefa específica. As funções são utilizadas para dividir um programa em partes menores, facilitando a leitura e manutenção do código. As funções podem receber parâmetros e retornar valores.
Em C as funções são compostas por um cabeçalho e um corpo. O cabeçalho da função contém o tipo de retorno, o nome da função e os parâmetros. O corpo da função contém o código que será executado.

### Declaração de Função

A declaração de uma função é feita da seguinte forma:

```c
tipo_retorno nome_funcao(tipo_parametro1 nome_parametro1, tipo_parametro2 nome_parametro2, ...) {
    // corpo da função
}
```

Exemplo:

```c
int soma(int a, int b) {
    return a + b;
}
```

### Chamada de Função

A chamada de uma função é feita da seguinte forma:

```c
tipo_retorno variavel = nome_funcao(parametro1, parametro2, ...);
```

Exemplo:

```c
int resultado = soma(10, 20);
```

### Exemplo de Função

```c
#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(10, 20);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

### Função sem Retorno

Uma função pode não retornar nenhum valor. Neste caso, o tipo de retorno da função é `void`.

Exemplo:

```c
void mensagem() {
    printf("Olá, mundo!\n");
}
```

### Exemplo de Função sem Retorno

```c
#include <stdio.h>

void mensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    mensagem();

    return 0;
}
```

### Função com Parâmetros

Uma função pode receber parâmetros. Os parâmetros são utilizados para passar valores para a função.

Exemplo:

```c

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(10, 20);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

### Exemplo de Função com Parâmetros

```c

#include <stdio.h>

void mensagem(char texto[]) {
    printf("%s\n", texto);
}

int main() {
    mensagem("Olá, mundo!");

    return 0;
}
```

### Função com Retorno

Uma função pode retornar um valor. O tipo de retorno da função é especificado no cabeçalho da função.

Exemplo:

```c

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    int resultado = soma(10, 20);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

Uma função pode retornar um valor de qualquer tipo, como `int`, `float`, `char`, `double`, `void`, entre outros.
Uma função pode retornar também um array ou uma matriz. Para retornar um array ou uma matriz, é necessário utilizar ponteiros. Os ponteiros são utilizados para retornar o endereço de memória de uma variável.

Logo mais veremos como utilizar os Ponteiros.

Caso você queria criar uma função que receba um array como parametro e retorne o seu maior valor, você pode fazer da seguinte forma:

```c

#include <stdio.h>

int maior(int numeros[], int tamanho) {
    int maior = numeros[0];

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    return maior;
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int resultado = maior(numeros, tamanho);
    printf("Maior: %d\n", resultado);

    return 0;
}
```

Caso você queira criar uma função que receba um array de strings e retorne a quantidade de strings, você pode fazer da seguinte forma:

```c

#include <stdio.h>

int contar_strings(char nomes[][50], int tamanho) {
    int contador = 0;

    for (int i = 0; i < tamanho; i++) {
        if (nomes[i][0] != '\0') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char nomes[3][50] = {
        "Maria",
        "João",
        "Ana"
    };
    int tamanho = sizeof(nomes) / sizeof(nomes[0]);
    int resultado = contar_strings(nomes, tamanho);
    printf("Quantidade de strings: %d\n", resultado);

    return 0;
}
```

No exemplo acima a função `contar_strings` recebe um array de strings e retorna a quantidade de strings válidas. A função percorre o array de strings e verifica se a primeira posição do vetor é diferente de `'\0'`, que é o caractere nulo. Se a primeira posição do vetor for diferente de `'\0'`, significa que a string é válida.

Para manipular uma função que recebe uma matriz de inteiros e retorna a soma dos elementos da matriz, você pode fazer da seguinte forma:

```c

#include <stdio.h>

int soma_matriz(int matriz[][3], int linhas, int colunas) {
    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int linhas = sizeof(matriz) / sizeof(matriz[0]);
    int colunas = sizeof(matriz[0]) / sizeof(matriz[0][0]);
    int resultado = soma_matriz(matriz, linhas, colunas);
    printf("Soma: %d\n", resultado);

    return 0;
}
```

No exemplo acima a função `soma_matriz` recebe uma matriz de inteiros e retorna a soma dos elementos da matriz. A função percorre a matriz e soma os elementos.

### Recursividade em C

Uma função recursiva é uma função que chama a si mesma. A recursividade é uma técnica de programação que permite que uma função seja chamada várias vezes, até que uma condição de parada seja atingida.

Exemplo:

```c

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int resultado = fatorial(5);
    printf("Fatorial: %d\n", resultado);

    return 0;
}
```

No exemplo acima a função `fatorial` calcula o fatorial de um número. A função é chamada várias vezes, até que a condição de parada seja atingida. A condição de parada é quando o número é igual a zero.

### Exemplo de Função Recursiva

```c

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int resultado = fibonacci(10);
    printf("Fibonacci: %d\n", resultado);

    return 0;
}
```

No exemplo acima a função `fibonacci` calcula o n-ésimo termo da sequência de Fibonacci. A função é chamada várias vezes, até que a condição de parada seja atingida. A condição de parada é quando o número é igual a zero ou um.

### Quais são os desafios da recursividade?

A recursividade é uma técnica poderosa, mas também pode ser perigosa. A recursividade pode levar a um estouro de pilha, que ocorre quando a pilha de chamadas de função fica sem espaço. O estouro de pilha pode causar um travamento do programa. Para evitar o estouro de pilha, é importante definir uma condição de parada clara e garantir que a recursão termine em algum momento. Além disso, é importante limitar o número de chamadas recursivas para evitar o estouro de pilha. 

### Quais são as vantagens da recursividade?

A recursividade permite resolver problemas complexos de forma simples e elegante. A recursividade é especialmente útil para resolver problemas que podem ser divididos em subproblemas menores. A recursividade também é útil para percorrer estruturas de dados complexas, como árvores e grafos. Além disso, a recursividade é uma técnica flexível que pode ser aplicada a uma ampla variedade de problemas.

Fazer um código elegante e eficiente é um dos desafios da programação. A recursividade é uma técnica que pode ajudar a alcançar esse objetivo. No entanto, é importante usar a recursividade com cuidado e garantir que ela seja apropriada para o problema em questão.

Um exemplo interessante de recursividade são as funções mod e div, que calculam o resto e o quociente da divisão de dois números inteiros. A função mod é definida como o resto da divisão de dois números inteiros, enquanto a função div é definida como o quociente da divisão de dois números inteiros.

Como podemos resolver esses problemas de forma recursiva? Podemos definir a função mod como a diferença entre o dividendo e o divisor, enquanto a função div pode ser definida como o quociente da divisão do dividendo pelo divisor. 

**DESAFIO: Implemente as funções mod e div de forma recursiva.**

### Ponteiros

Um ponteiro é uma variável que armazena o endereço de memória de outra variável. Os ponteiros são utilizados para acessar e manipular variáveis indiretamente. Os ponteiros são muito utilizados em C para alocar memória dinamicamente, passar parâmetros por referência e acessar elementos de arrays e strings. 

### Declaração de Ponteiro

A declaração de um ponteiro é feita da seguinte forma:

```c
tipo *nome_ponteiro;
```

Exemplo:

```c
int *ponteiro;
```

### Atribuição de Endereço de Memória

Para atribuir o endereço de memória de uma variável a um ponteiro, utilizamos o operador `&`.

Exemplo:

```c
int a = 10;
int *ponteiro = &a;
```

### Acesso ao Valor de uma Variável

Para acessar o valor de uma variável através de um ponteiro, utilizamos o operador `*`.

Exemplo:

```c
int a = 10;
int *ponteiro = &a;
int valor = *ponteiro;
```

### Exemplo de Ponteiro

```c
#include <stdio.h>

int main() {
    int a = 10;
    int *ponteiro = &a;
    int valor = *ponteiro;

    printf("Valor: %d\n", valor);

    return 0;
}
```

### Ponteiro para Array

Os ponteiros são muito utilizados para acessar elementos de arrays. Para acessar um elemento de um array através de um ponteiro, utilizamos a aritmética de ponteiros.

Exemplo:

```c

int numeros[5] = {10, 20, 30, 40, 50};
int *ponteiro = &numeros[0];
```

### Exemplo de Ponteiro para Array

```c
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ponteiro = &numeros[0];

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ponteiro + i));
    }

    return 0;
}
```

O comando `*(ponteiro + i)` é utilizado para acessar o elemento do array na posição `i`. O ponteiro é incrementado de acordo com a posição do elemento no array. Detalhando esse problema temos que o ponteiro é incrementado de acordo com a posição do elemento no array, ou seja, o ponteiro é incrementado de acordo com a posição do elemento no array. Podemos ver abaixo como isso acontece passo a passo:

- Para acessar o primeiro elemento do array, o ponteiro é incrementado de acordo com a fórmula `i = 0`, onde `i` é a posição do elemento no array. Neste caso, o ponteiro é incrementado de acordo com a fórmula `*(ponteiro + 0)`.

- Para acessar o segundo elemento do array, o ponteiro é incrementado de acordo com a fórmula `i = 1`, onde `i` é a posição do elemento no array. Neste caso, o ponteiro é incrementado de acordo com a fórmula `*(ponteiro + 1)`.

- Para acessar o terceiro elemento do array, o ponteiro é incrementado de acordo com a fórmula `i = 2`, onde `i` é a posição do elemento no array. Neste caso, o ponteiro é incrementado de acordo com a fórmula `*(ponteiro + 2)`.

- Para acessar o quarto elemento do array, o ponteiro é incrementado de acordo com a fórmula `i = 3`, onde `i` é a posição do elemento no array. Neste caso, o ponteiro é incrementado de acordo com a fórmula `*(ponteiro + 3)`.

### Ponteiro para Matriz

Os ponteiros são muito utilizados para acessar elementos de arrays e matrizes. Para acessar um elemento de uma matriz através de um ponteiro, utilizamos a aritmética de ponteiros.

Exemplo:

```c
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int *ponteiro = &matriz[0][0];
``` 

### Exemplo de Ponteiro para Matriz

```c
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int *ponteiro = &matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(ponteiro + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}
```

O comando `*(ponteiro + i * 3 + j)` é utilizado para acessar o elemento da matriz na linha `i` e coluna `j`. O ponteiro é incrementado de acordo com a posição do elemento na matriz. Detalhando esse problema temos que o ponteiro é incrementado de acordo com a posição do elemento na matriz, ou seja, o ponteiro é incrementado de acordo com a linha e a coluna do elemento. Podemos ver abaixo como isso acontece passo a passo:

- Para acessar o elemento da primeira linha e primeira coluna, o ponteiro é incrementado de acordo com a fórmula `i * 3 + j`, onde `i` é a linha e `j` é a coluna. Neste caso, o ponteiro é incrementado de acordo com a fórmula `0 * 3 + 0 = 0`.

- Para acessar o elemento da primeira linha e segunda coluna, o ponteiro é incrementado de acordo com a fórmula `i * 3 + j`, onde `i` é a linha e `j` é a coluna. Neste caso, o ponteiro é incrementado de acordo com a fórmula `0 * 3 + 1 = 1`.

- Para acessar o elemento da primeira linha e terceira coluna, o ponteiro é incrementado de acordo com a fórmula `i * 3 + j`, onde `i` é a linha e `j` é a coluna. Neste caso, o ponteiro é incrementado de acordo com a fórmula `0 * 3 + 2 = 2`.

- Para acessar o elemento da segunda linha e primeira coluna, o ponteiro é incrementado de acordo com a fórmula `i * 3 + j`, onde `i` é a linha e `j` é a coluna. Neste caso, o ponteiro é incrementado de acordo com a fórmula `1 * 3 + 0 = 3`.

- Para acessar o elemento da segunda linha e segunda coluna, o ponteiro é incrementado de acordo com a fórmula `i * 3 + j`, onde `i` é a linha e `j` é a coluna. Neste caso, o ponteiro é incrementado de acordo com a fórmula `1 * 3 + 1 = 4`.

