# Resolução Trabalho Prático 4

## Questões

### Questão 1
1. **Implemente e use uma função para calcular a média de elementos em um array**
    ```c
    float mediaArray(int arr[], int tamanho) {
         ...
    }
    ```

A questão pede para implementar uma função que calcula a média dos elementos de um array. A função recebe um array de inteiros e o tamanho do array. A função deve retornar a média dos elementos do array.

```c
#include <stdio.h>

float mediaArray(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    float media = mediaArray(arr, tamanho);
    printf("Media: %.2f\n", media);
    return 0;
}
```

Perceba que na função `main` o array `arr` é inicializado com os valores `{1, 2, 3, 4, 5}`. O tamanho do array é calculado dividindo o tamanho total do array pelo tamanho de um elemento do array. A função `mediaArray` é chamada passando o array e o tamanho do array como argumentos. O resultado é armazenado na variável `media` e é impresso na tela.


### Questão 2


2. **Implemente e use uma função para multiplicar duas matrizes**
    ```c
    void multiplicaMatrizes(int a[2][2], int b[2][2], int resultado[2][2]) {
         ...
    }
    ```

A questão pede para implementar uma função que multiplica duas matrizes. A função recebe duas matrizes de inteiros e uma matriz de resultado. A função deve armazenar o resultado da multiplicação das duas matrizes na matriz de resultado.

```c
#include <stdio.h>

void multiplicaMatrizes(int a[2][2], int b[2][2], int resultado[2][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int resultado[2][2];
    multiplicaMatrizes(a, b, resultado);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

A função `multiplicaMatrizes` recebe duas matrizes `a` e `b` e uma matriz `resultado`. A função calcula o produto das duas matrizes e armazena o resultado na matriz `resultado`. Na função `main`, as matrizes `a` e `b` são inicializadas com os valores `{{1, 2}, {3, 4}}` e `{{5, 6}, {7, 8}}` respectivamente. A matriz `resultado` é declarada e a função `multiplicaMatrizes` é chamada passando as matrizes `a` e `b` e a matriz `resultado` como argumentos. O resultado é impresso na tela.

A multiplicação de matrizes é uma operação que consiste em multiplicar cada elemento da linha da primeira matriz pelo elemento da coluna da segunda matriz e somar os resultados. O elemento da linha `i` e coluna `j` da matriz `resultado` é calculado somando o produto dos elementos da linha `i` da matriz `a` pelos elementos da coluna `j` da matriz `b`. Por exemplo, o elemento da linha `0` e coluna `0` da matriz `resultado` é calculado como `1*5 + 2*7 = 19`. 

O elemento da linha `0` e coluna `1` da matriz `resultado` é calculado como `1*6 + 2*8 = 22`. O elemento da linha `1` e coluna `0` da matriz `resultado` é calculado como `3*5 + 4*7 = 31`. O elemento da linha `1` e coluna `1` da matriz `resultado` é calculado como `3*6 + 4*8 = 44`. Portanto, a matriz `resultado` é igual a `{{19, 22}, {31, 44}}`.


### Questão 3

3. **Implemente e use uma função para transpor uma matriz**
    ```c
    void transporMatriz(int matriz[3][3], int transposta[3][3]) {
         ...
    }
    ```
A questão pede para implementar uma função que transpõe uma matriz. A função recebe uma matriz de inteiros e uma matriz transposta. A função deve armazenar a transposta da matriz na matriz transposta. A transposta de uma matriz é obtida trocando as linhas pelas colunas.

```c

#include <stdio.h>

void transporMatriz(int matriz[3][3], int transposta[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j
               transposta[j][i] = matriz[i][j];
          }
     }
}

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposta[3][3];
    transporMatriz(matriz, transposta);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {   
            printf("%d ", transposta[i][j]);
        } 
            printf("\n");
     }
     return 0;
}

```

A função `transporMatriz` recebe uma matriz `matriz` e uma matriz `transposta`.
A resolução da questão é simples, basta percorrer a matriz original e trocar as linhas pelas colunas. O elemento da linha `i` e coluna `j` da matriz `transposta` é igual ao elemento da linha `j` e coluna `i` da matriz `matriz`. Na função `main`, a matriz `matriz` é inicializada com os valores `{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}`. A matriz `transposta` é declarada e a função `transporMatriz` é chamada passando a matriz `matriz` e a matriz `transposta` como argumentos. O resultado é impresso na tela.

A transposta da matriz `{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}` é igual a `{{1, 4, 7}, {2, 5, 8}, {3, 6, 9}}`. Portanto, a matriz `transposta` é igual a `{{1, 4, 7}, {2, 5, 8}, {3, 6, 9}}`. 

### Questão 4

 4. **Implemente uma função em C que recebe um array de inteiros e seu tamanho, e inverte os elementos do array utilizando ponteiros.**

```c
void inverteArray(int arr[], int tamanho) {
     ...
}

```

A questão pede para implementar uma função que inverte os elementos de um array. A função recebe um array de inteiros e o tamanho do array. A função deve inverter os elementos do array utilizando ponteiros.

```c

#include <stdio.h>

void inverteArray(int arr[], int tamanho) {
    int *inicio = arr;
    int *fim = arr + tamanho - 1;
    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }     

}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    inverteArray(arr, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

```

A solução da função é simples, basta criar dois ponteiros `inicio` e `fim` que apontam para o início e fim do array respectivamente. Enquanto o ponteiro `inicio` for menor que o ponteiro `fim`, troca-se os elementos apontados pelos ponteiros `inicio` e `fim` e incrementa-se o ponteiro `inicio` e decrementa-se o ponteiro `fim`. Na função `main`, o array `arr` é inicializado com os valores `{1, 2, 3, 4, 5}`. O tamanho do array é calculado dividindo o tamanho total do array pelo tamanho de um elemento do array. A função `inverteArray` é chamada passando o array e o tamanho do array como argumentos. O resultado é impresso na tela.

O array `arr` é invertido e o resultado é igual a `{5, 4, 3, 2, 1}`.

Imagiine um exemplo com 15 elementos no array. O ponteiro `inicio` aponta para o primeiro elemento do array e o ponteiro `fim` aponta para o último elemento do array. O ponteiro `inicio` aponta para o elemento `1` e o ponteiro `fim` aponta para o elemento `15`. O elemento `1` é trocado com o elemento `15`. O ponteiro `inicio` aponta para o elemento `2` e o ponteiro `fim` aponta para o elemento `14`. O elemento `2` é trocado com o elemento `14`. O ponteiro `inicio` aponta para o elemento `3` e o ponteiro `fim` aponta para o elemento `13`. O elemento `3` é trocado com o elemento `13`. O processo continua até que o ponteiro `inicio` seja maior ou igual ao ponteiro `fim`. Dessa forma, o array é invertido. O ponteiro tem por objetivo percorrer o array de forma mais eficiente. Para inverter todo o array, basta percorrer metade do array e trocar os elementos do início com os elementos do fim. A troca é feita usando a estratégia de troca de variáveis, como é feita usando o Bubble Sort. 

### Questão 5


 5. **Escreva uma função em C que receba uma string e substitua todas as letras minúsculas por maiúsculas utilizando ponteiros.**

```c
void converteMaiuscula(char *str) {
     ...
}
```

A questão pede para implementar uma função que substitui todas as letras minúsculas de uma string por letras maiúsculas. A função recebe uma string e deve substituir todas as letras minúsculas por letras maiúsculas utilizando ponteiros.

```c
#include <stdio.h>

void converteMaiuscula(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        str++;
    }

}

int main() {
    char str[] = "Olá PessoALL!";
    converteMaiuscula(str);
    printf("%s\n", str);
    return 0;

}
```

A função `converteMaiuscula` recebe uma string `str`. A função percorre a string `str` e verifica se o caractere apontado pelo ponteiro `str` é uma letra minúscula. Se o caractere for uma letra minúscula, o caractere é convertido para maiúscula. Na função `main`, a string `str` é inicializada com o valor `"Olá PessoALL!"`. A função `converteMaiuscula` é chamada passando a string `str` como argumento. O resultado é impresso na tela. 

A string `str` é convertida para `"OLÁ PESSOALL!"`. A função usa uma estratégia de conversão pela tabela ASCII. A letra minúscula `a` tem o valor ASCII `97` e a letra maiúscula `A` tem o valor ASCII `65`. Para converter uma letra minúscula para maiúscula, basta subtrair o valor ASCII da letra minúscula pelo valor ASCII da letra `a` e somar o valor ASCII da letra `A`. Por exemplo, para converter a letra `a` para `A`, basta subtrair `97 - 97 + 65 = 65`. Portanto, a letra `a` é convertida para `A`. O mesmo processo é feito para as outras letras minúsculas. 

A letra `b` é convertida para `B`, a letra `c` é convertida para `C`, e assim por diante. A função percorre a string `str` e verifica se o caractere apontado pelo ponteiro `str` é uma letra minúscula. Se o caractere for uma letra minúscula, o caractere é convertido para maiúscula. O ponteiro `str` é incrementado para apontar para o próximo caractere da string. O processo continua até que o caractere apontado pelo ponteiro `str` seja o caractere nulo `'\0'`.

### Questão 6

 6.  **Implemente uma função em C que ordene uma matriz 3x3 em ordem crescente utilizando ponteiros.**
```c
void ordenaMatriz(int matriz[3][3]) {
     ...
}
```

A questão pede para implementar uma função que ordena uma matriz 3x3 em ordem crescente. A função recebe uma matriz de inteiros e deve ordenar os elementos da matriz em ordem crescente utilizando ponteiros.

```c
 
#include <stdio.h>

void ordenaMatriz(int matriz[3][3]) {
    int *p = &matriz[0][0];
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (*(p + i) > *(p + j)) {
                int temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}

int main() {
    int matriz[3][3] = {{3, 2, 1}, {6, 5, 4}, {9, 8, 7}};
    ordenaMatriz(matriz);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

```

A função `ordenaMatriz` recebe uma matriz `matriz`. A função percorre a matriz utilizando um ponteiro `p` e ordena os elementos da matriz em ordem crescente. A função usa um algoritmo de ordenação de seleção para ordenar os elementos da matriz. Na função `main`, a matriz `matriz` é inicializada com os valores `{{3, 2, 1}, {6, 5, 4}, {9, 8, 7}}`. A função `ordenaMatriz` é chamada passando a matriz `matriz` como argumento. O resultado é impresso na tela.

A matriz `matriz` é ordenada em ordem crescente e o resultado é igual a `{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}`. O algoritmo de ordenação de seleção consiste em percorrer a matriz e encontrar o menor elemento da matriz. O menor elemento é trocado com o primeiro elemento da matriz. O processo é repetido para os elementos restantes da matriz. O menor elemento é encontrado e trocado com o segundo elemento da matriz. O processo continua até que todos os elementos da matriz estejam ordenados. O algoritmo de ordenação de seleção é um algoritmo de ordenação simples e eficiente para ordenar um pequeno número de elementos.

A função `ordenaMatriz` utiliza aritimética de pondeiros na sua estrutura de repetição. O ponteiro `p` aponta para o primeiro elemento da matriz. O ponteiro `p` é incrementado para apontar para o próximo elemento da matriz. O ponteiro `p` é usado para acessar os elementos da matriz. O ponteiro `p` é incrementado para acessar o próximo elemento da matriz. O ponteiro `p` é usado para comparar os elementos da matriz e trocar os elementos da matriz. O ponteiro `p` é incrementado para acessar o próximo elemento da matriz. O processo continua até que todos os elementos da matriz sejam ordenados.

Dessa forma `*(p + i)` é o elemento da matriz na posição i. `*(p + j)` é o elemento da matriz na posição j. Se o elemento da matriz na posição i for maior que o elemento da matriz na posição j, os elementos são trocados. O ponteiro `p` é incrementado para acessar o próximo elemento da matriz. O processo continua até que todos os elementos da matriz sejam ordenados. Por exemplo,  o elemento da matriz na posição 0 é 3 e o elemento da matriz na posição 1 é 2. O elemento da matriz na posição 0 é maior que o elemento da matriz na posição 1. Portanto, os elementos são trocados. O elemento da matriz na posição 0 é 2 e o elemento da matriz na posição 1 é 3. O ponteiro `p` é incrementado para acessar o próximo elemento da matriz. O processo continua até que todos os elementos da matriz sejam ordenados.

