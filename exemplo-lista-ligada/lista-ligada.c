#include <stdio.h>
#include <stdlib.h>

struct Node
{
    /* data */
    struct Node *proximo;
    int valor;
};


struct Node *inicio_da_lista;


void criar_lista()
{
    inicio_da_lista = NULL;
}

void adicionar_elemento(int valor)
{
    struct Node *novo_node = (struct Node *)malloc(sizeof(struct Node));
    novo_node->valor = valor;
    novo_node->proximo = inicio_da_lista;
    inicio_da_lista = novo_node;
}

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

void remover_inicio()
{
    struct Node *temp = inicio_da_lista;
    inicio_da_lista = inicio_da_lista->proximo;
    free(temp);
}

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