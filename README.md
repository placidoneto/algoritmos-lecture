# Lista Ligada - Detalhando as operações em Código

## Introdução

Uma lista ligada é uma estrutura de dados linear que consiste em uma sequência de elementos, chamados de nós, onde cada nó armazena um valor e uma referência para o próximo nó da sequência. A lista ligada é uma estrutura de dados dinâmica, ou seja, ela pode crescer ou diminuir de tamanho durante a execução do programa.

## Estrutura

A lista ligada é composta por nós, onde cada nó possui dois campos: um campo para armazenar o valor do nó e um campo para armazenar a referência para o próximo nó da sequência. A referência para o próximo nó é chamada de ponteiro.

```c
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    struct Node *proximo;
    int valor;
};

struct Node *inicio_da_lista;
```

Iremos considerar 7 operações possíveis em uma lista ligada, como mostra o código abaixo que implementa essas operações.

```c
void imprimir_menu()
{
    printf("1. Adicionar elemento\n");
    printf("2. Adicionar elemento no final\n");
    printf("3. Remover elemento\n");
    printf("4. Remover elemento no final\n");
    printf("5. Remover elemento no inicio\n");
    printf("6. Imprimir lista\n");
    printf("7. Tamanho da lista\n");
    printf("8. Sair\n");
}
```

### Adicionar elemento

A operação de adicionar um elemento em uma lista ligada consiste em criar um novo nó e inserir esse nó no início da lista. Para isso, é necessário criar um novo nó, atribuir o valor ao campo `valor` do nó e atribuir a referência para o próximo nó da lista ao campo `proximo` do nó.

```c
void adicionar_elemento(int valor)
{
    struct Node *novo_node = (struct Node *)malloc(sizeof(struct Node));
    novo_node->valor = valor;
    novo_node->proximo = inicio_da_lista;
    inicio_da_lista = novo_node;
}
```

Perceba que a operação de adicionar um elemento em uma lista ligada é uma operação de complexidade O(1), ou seja, a operação é executada em tempo constante. Outra observação importante é que a operação de adicionar um elemento em uma lista ligada é uma operação de inserção no início da lista. Dessa forma, a ordem dos elementos na lista é inversa à ordem de inserção. As definições de valor e próximo são feitas de maneira direta, pois o valor é o argumento da função, enquanto o próximo é o inicio da lista. Por fim, o inicio da lista é atualizado para o novo nó.

### Adicionar elemento no final

A operação de adicionar um elemento no final de uma lista ligada consiste em criar um novo nó e inserir esse nó no final da lista. Para isso, é necessário percorrer a lista até o último nó e inserir o novo nó após o último nó.

```c
void adicionar_final(int valor)
{
    struct Node *novo_node = (struct Node *)malloc(sizeof(struct Node));
    novo_node->valor = valor;
    novo_node->proximo = NULL;
    if (inicio_da_lista == NULL)
    {
        inicio_da_lista = novo_node;
    }
    else
    {
        struct Node *atual = inicio_da_lista;
        while (atual->proximo != NULL)
        {
            atual = atual->proximo;
        }
        atual->proximo = novo_node;
    }
}
```

Perceba que a operação de adicionar um elemento no final de uma lista ligada é uma operação de complexidade O(n), onde n é o número de elementos na lista. Isso ocorre porque é necessário percorrer a lista até o último nó para inserir o novo nó. A definição do valor é feita de maneira direta, pois o valor é o argumento da função. O próximo é NULL, pois o novo nó será o último nó da lista. Se a lista estiver vazia, o novo nó será o primeiro nó da lista. Caso contrário, é necessário percorrer a lista até o último nó e inserir o novo nó após o último nó.

### Remover elemento

A operação de remover um elemento de uma lista ligada consiste em percorrer a lista até o nó que contém o valor a ser removido e remover esse nó da lista. Para isso, é necessário percorrer a lista até o nó anterior ao nó que contém o valor a ser removido e atualizar a referência para o próximo nó.

```c
void remover_elemento(int valor)
{
    struct Node *atual = inicio_da_lista;
    struct Node *anterior = NULL;
    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            if (anterior == NULL)
            {
                remover_inicio();
            }
            else
            {
                anterior->proximo = atual->proximo;
                free(atual);
            }
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}
```

Perceba que a operação de remover um elemento de uma lista ligada é uma operação de complexidade O(n), onde n é o número de elementos na lista. Isso ocorre porque é necessário percorrer a lista até o nó que contém o valor a ser removido. A definição do valor é feita de maneira direta, pois o valor é o argumento da função. A remoção do nó é feita de maneira direta, pois é necessário apenas atualizar a referência para o próximo nó e liberar a memória alocada para o nó a ser removido.

### Remover elemento no final

A operação de remover um elemento no final de uma lista ligada consiste em percorrer a lista até o penúltimo nó e remover o último nó da lista. Para isso, é necessário percorrer a lista até o penúltimo nó e atualizar a referência para o próximo nó.

```c
void remover_final()
{
    struct Node *atual = inicio_da_lista;
    struct Node *anterior = NULL;
    while (atual->proximo != NULL)
    {
        anterior = atual;
        atual = atual->proximo;
    }
    if (anterior == NULL)
    {
        inicio_da_lista = NULL;
    }
    else
    {
        anterior->proximo = NULL;
    }
    free(atual);
}

```

Perceba que a operação de remover um elemento no final de uma lista ligada é uma operação de complexidade O(n), onde n é o número de elementos na lista. Isso ocorre porque é necessário percorrer a lista até o penúltimo nó para remover o último nó da lista. A remoção do nó é feita de maneira direta, pois é necessário apenas atualizar a referência para o próximo nó e liberar a memória alocada para o nó a ser removido.

### Remover elemento no início

A operação de remover um elemento no início de uma lista ligada consiste em remover o primeiro nó da lista. Para isso, é necessário atualizar o início da lista para o próximo nó e liberar a memória alocada para o primeiro nó.

```c
void remover_inicio()
{
    struct Node *temp = inicio_da_lista;
    inicio_da_lista = inicio_da_lista->proximo;
    free(temp);
}
``` 

Perceba que a operação de remover um elemento no início de uma lista ligada é uma operação de complexidade O(1), ou seja, a operação é executada em tempo constante. A remoção do nó é feita de maneira direta, pois é necessário apenas atualizar o início da lista para o próximo nó e liberar a memória alocada para o primeiro nó.

### Imprimir lista

A operação de imprimir uma lista ligada consiste em percorrer a lista e imprimir o valor de cada nó.

```c
void imprimir_lista()
{
    struct Node *atual = inicio_da_lista;
    while (atual != NULL)
    {
        printf("%d --> ", atual->valor);
        atual = atual->proximo;
    }
    printf(" NULL\n");
}
```

Perceba que a operação de imprimir uma lista ligada é uma operação de complexidade O(n), onde n é o número de elementos na lista. Isso ocorre porque é necessário percorrer a lista para imprimir o valor de cada nó. A impressão do valor é feita de maneira direta, pois é necessário apenas acessar o campo `valor` do nó. Por fim é impresso NULL para indicar o final da lista.

### Tamanho da lista

A operação de calcular o tamanho de uma lista ligada consiste em percorrer a lista e contar o número de nós.

```c
int tamanho_da_lista()
{
    struct Node *atual = inicio_da_lista;
    int tamanho = 0;
    while (atual != NULL)
    {
        tamanho++;
        atual = atual->proximo;
    }
    return tamanho;
}
```

Perceba que a operação de calcular o tamanho de uma lista ligada é uma operação de complexidade O(n), onde n é o número de elementos na lista. Isso ocorre porque é necessário percorrer a lista para contar o número de nós. O incremento do tamanho é feito de maneira direta, pois é necessário apenas incrementar uma variável. Por fim, é retornado o tamanho da lista.

### Programa principal

O programa principal é responsável por criar a lista ligada e chamar as operações de acordo com a escolha do usuário.

```c
int main()
{
    criar_lista();
    int opcao;
    int valor;
    while (1)
    {
        imprimir_menu();
        printf("Digite a opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            adicionar_elemento(valor);
            break;
        case 2:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            adicionar_final(valor);
            break;
        case 3:
            printf("Digite o valor: ");
            scanf("%d", &valor);
            remover_elemento(valor);
            break;
        case 4:
            remover_final();
            break;
        case 5:
            remover_inicio();
            break;
        case 6:
            imprimir_lista();
            break;
        case 7:
            printf("Tamanho da lista: %d\n", tamanho_da_lista());
            break;
        case 8:
            return 0;
        default:
            printf("Opcao invalida\n");
        }
    }
    return 0;
}
```

Perceba que o programa principal é um loop infinito que exibe o menu de opções, lê a opção escolhida pelo usuário e chama a operação correspondente. O loop é interrompido quando o usuário escolhe a opção de sair. O programa principal é responsável por criar a lista ligada e chamar as operações de acordo com a escolha do usuário.

## Conclusão

Nesta aula, detalhamos as operações de uma lista ligada e implementamos essas operações em código. A lista ligada é uma estrutura de dados linear que consiste em uma sequência de elementos, chamados de nós, onde cada nó armazena um valor e uma referência para o próximo nó da sequência. As operações de uma lista ligada incluem adicionar um elemento, adicionar um elemento no final, remover um elemento, remover um elemento no final, remover um elemento no início, imprimir a lista e calcular o tamanho da lista. Cada operação foi detalhada e implementada em código. Por fim, o programa principal foi implementado para criar a lista ligada e chamar as operações de acordo com a escolha do usuário.

## Desafio

Implemente um programa simples que simule filas de atendimento em um consultorio médico. O programa deve permitir adicionar pacientes na fila, remover pacientes da fila e imprimir a fila de pacientes. As filas de pacientes são organizadas em ordem de chegada, ou seja, o primeiro paciente a chegar é o primeiro a ser atendido. As filas são organizadas por médico. Cada médico tem uma fila de pacientes. O programa deve permitir gerenciar ps pacientes em uma fila de um médico. Uma restrição do programa é que cada médico pode atender no máximo 15 pacientes por dia, sejam eles normais ou pacientes preferenciais. A cada 2 pacientes preferenciais, 1 paciente normal é atendido. O programa deve permitir adicionar pacientes normais e preferenciais na mesma fila do médico.

Atualize a estrutura do nó para incluir um campo para o tipo de paciente. O campo tipo de paciente deve ser um inteiro que indica se o paciente é normal ou preferencial. O campo tipo de paciente deve ser 0 para pacientes normais e 1 para pacientes preferenciais. Atualize as operações de adicionar um elemento e remover um elemento para incluir o campo tipo de paciente. Atualize a operação de imprimir a lista para imprimir o tipo de paciente. Atualize a operação de calcular o tamanho da lista para calcular o número de pacientes normais e preferenciais. Atualize o programa principal para incluir a opção de adicionar pacientes normais e preferenciais na fila.

- Link para o código base em C da aula: [Link lista-ligada.c](exemplo-lista-ligada/lista-ligada.c)
- Link para o assitente do desafio: [Link github classromm](https://classroom.github.com/a/YkUZjsdJ)

## Referências

- [Wikipedia](https://en.wikipedia.org/wiki/Linked_list)

- [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/)

- [Programiz](https://www.programiz.com/dsa/linked-list)
