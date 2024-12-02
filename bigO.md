# Trabalho Prático 5 

- Link Assigment para o trabalho prático: [Trabalho Prático 5](https://classroom.github.com/a/jZcl5V9I)
- O trabalho pode ser feito em grupos de até 2 pessoas.
- O trabalho deve ser enviado via github-classroom.
- As respostas devem ser enviadas via Markdown MD no arquivo README.md do repositório.
- O nome das equipes devem ser: tp5-nomeSobrenome-nomeSobrenome.
- O prazo de entrega é até o dia 03/12/2024 até às 8:30.

### Questão 1

Analise o algoritmo abaixo e determine a complexidade deste, justificando pela expressão de quantidade de operações:

 ```c
#include <stdio.h>

int obter_primeiro_elemento(int lista[], int tamanho) {
    return lista[0];
}

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    
    printf("Primeiro elemento: %d\n", obter_primeiro_elemento(lista, tamanho));
    
    return 0;
}
```

### Questão 2

Considere o seguinte trecho de código em C, determine a sua complexidade, justificando pela expressão de quantidade de operações. Descreva também o que o algoritmo está realizando como função.

```c
#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int alvo) {
    int inicio = 0;
    int fim = tamanho - 1; 

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        if (arr[meio] == alvo)
            return meio;
        else if (arr[meio] < alvo)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1; // Elemento não encontrado
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int alvo = 10;
    
    int resultado = busca_binaria(arr, tamanho, alvo);
    (resultado == -1) ? printf("Elemento não encontrado\n") : printf("Elemento encontrado no índice %d\n", resultado);
    
    return 0;
}

```

  ### Questão 3

 Considere o seguinte trecho de código em C, determine a sua complexidade, justificando pela expressão de quantidade de operações. Descreva também o que o algoritmo está realizando como função. 

 ```c
#include <stdio.h>

int soma_elementos(int arr[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += arr[i];
    }
    return soma;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    int resultado = soma_elementos(arr, tamanho);
    printf("A soma dos elementos é %d\n", resultado);
    
    return 0;
}

```

### Questão 4

 Considere o seguinte trecho de código em C, determine a sua complexidade, justificando pela expressão de quantidade de operações. Descreva também o que o algoritmo está realizando como função.

 ```c
#include <stdio.h>

void exemplo(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d %d\n", i, j);
        }
    }
}
 ```

 ### Questão 5

 Numa competição de programação, ganhava mais pontos o time que apresentasse o algoritmo mais eficiente para resolver o pior caso de um determinado problema. A complexidade assintótica (notação Big O) dos algoritmos elaborados está ilustrada na tabela abaixo.

| Time            | Complexidade |
|-----------------|--------------|
| Lilas           | O(nˆ20)      |
| Laranja         | O(n log n)   |
| Azul            | O(1)         |
| Amarelo         | O(nˆ3)       |
| Bege            | O(2ˆn)       |

 
Ordene os times considerando o mais eficiente e o menos eficiente justificando sua resposta.


