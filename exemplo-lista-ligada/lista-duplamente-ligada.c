#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* proximo;
    struct Node* anterior;
};

struct Node* inicio_da_lista = NULL;

void criar_lista()
{
    inicio_da_lista = NULL;
}


void adicionar_elemento(int valor)
{
    struct Node *novo_node = (struct Node *)malloc(sizeof(struct Node));
    novo_node->data = valor;
    novo_node->proximo = inicio_da_lista;
    novo_node->anterior = NULL;
    if (inicio_da_lista != NULL)
    {
        inicio_da_lista->anterior = novo_node;
    }
    inicio_da_lista = novo_node;
}

void adicionar_final(int valor)
{
    struct Node *novo_node = (struct Node *)malloc(sizeof(struct Node));
    novo_node->data = valor;
    novo_node->proximo = NULL;
    if (inicio_da_lista == NULL)
    {
        novo_node->anterior = NULL;
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
        novo_node->anterior = atual;
    }
}

void remover_inicio()
{
    struct Node *temp = inicio_da_lista;
    inicio_da_lista = inicio_da_lista->proximo;
    inicio_da_lista->anterior = NULL;
    free(temp);
}

void remover_elemento(int valor)
{
    struct Node *atual = inicio_da_lista;
    struct Node *anterior = NULL;
    while (atual != NULL)
    {
        if (atual->data == valor)
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

    printf(" INICIO --> ");
    while (atual != NULL)
    {
        printf("%d --> ", atual->data);
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
    do
    {
        imprimir_menu();
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser adicionado: ");
            scanf("%d", &valor);
            adicionar_elemento(valor);
            break;
        case 2:
            printf("Digite o valor a ser adicionado: ");
            scanf("%d", &valor);
            adicionar_final(valor);
            break;
        case 3:
            printf("Digite o valor a ser removido: ");
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
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != 8);
    return 0;
}

