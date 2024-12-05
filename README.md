# Struct (Estruturas em C)

Structs, também conhecidas como Registros, definem tipos de dados que agrupam variáveis sob um mesmo tipo de dado.

A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma única variável. Por exemplo, se for preciso armazenar a altura, o peso e a idade de uma pessoa, pode-se criar uma struct chamada Pessoa e agrupar os dados em um único tipo de dado, conforme o exemplo a seguir.

Aos dados agruados em uma struct dá-se o nome de campos(*fields*).

Struct é um tipo de dado que permite armazenar diferentes tipos de dados em um único bloco de memória. É uma maneira de armazenar dados relacionados de forma organizada. Sendo um tipo de dado composto, o struct é usado para representar um registro de dados.

Essa é a definição de struct em C. Em outras linguagens de programação, como C++, C#, Java, entre outras, a definição de struct pode variar um pouco, mas a ideia geral é a mesma. Em Java e C#, por exemplo, a struct é uma estrutura de dados que pode conter métodos, enquanto em C e C++, a struct é uma estrutura de dados que contém apenas campos. O Struct é a forma mais primiva de orientação a objetos.


## Sintaxe

A sintaxe para declarar um struct em C é a seguinte:

```c
struct nome_da_struct {
    tipo_do_campo1 campo1;
    tipo_do_campo2 campo2;
    tipo_do_campo3 campo3;
    ...
};
```

Onde `nome_da_struct` é o nome da struct, `tipo_do_campo1`, `tipo_do_campo2`, `tipo_do_campo3`, etc., são os tipos dos campos da struct, e `campo1`, `campo2`, `campo3`, etc., são os nomes dos campos da struct.

Por exemplo, a struct `Pessoa` abaixo tem três campos: `nome`, `idade` e `altura`:

```c
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};
```

## Exemplo

Aqui está um exemplo de como usar a struct `Pessoa`:

```c
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
    struct Pessoa pessoa1;

    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura da pessoa: ");
    scanf("%f", &pessoa1.altura);

    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}
```

## Retorno de Structs em Funções

Em C, uma função não pode retornar um struct diretamente. No entanto, é possível retornar um ponteiro para um struct. Por exemplo, a função `criar_pessoa` abaixo retorna um ponteiro para uma struct `Pessoa`:

```c
#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

struct Pessoa* criar_pessoa(char nome[], int idade, float altura) {
    struct Pessoa* pessoa = (struct Pessoa*) malloc(sizeof(struct Pessoa));

    strcpy(pessoa->nome, nome);
    pessoa->idade = idade;
    pessoa->altura = altura;

    return pessoa;
}

int main() {
    struct Pessoa* pessoa1 = criar_pessoa("João", 30, 1.75);

    printf("Nome: %s\n", pessoa1->nome);
    printf("Idade: %d\n", pessoa1->idade);
    printf("Altura: %.2f\n", pessoa1->altura);

    free(pessoa1);

    return 0;
}
```

Neste exemplo, a função `criar_pessoa` aloca memória para uma struct `Pessoa`, inicializa os campos da struct com os valores passados como argumentos e retorna um ponteiro para a struct. A função `main` chama a função `criar_pessoa` para criar uma pessoa e imprime os dados da pessoa criada.

Para alocar memória para um ponteiro de struct, é necessário incluir a biblioteca `stdlib.h`. A função `malloc` é usada para alocar memória para a struct `Pessoa`. O `sizeof(struct Pessoa)` é usado para determinar o tamanho da struct `Pessoa` em bytes. O ponteiro retornado por `malloc` é convertido para um ponteiro de `struct Pessoa` com `(struct Pessoa*)`. O uso de `malloc` é necessário para alocar memória dinamicamente para a struct `Pessoa`, pois a struct é um tipo de dado composto e pode ocupar uma quantidade significativa de memória. Dessa forma é possível alocar memória apenas para a struct `Pessoa`. Assim que a memória não for mais necessária, ela deve ser liberada com a função `free`. Em linguagens como Java e C#, a memória é gerenciada automaticamente pelo coletor de lixo, mas em C é necessário gerenciar a memória manualmente.

O `strcpy` é usado para copiar a string `nome` para o campo `nome` da struct `Pessoa`. O campo `idade` é inicializado com o valor `idade` passado como argumento, e o campo `altura` é inicializado com o valor `altura` passado como argumento. O ponteiro para a struct `Pessoa` é retornado pela função `criar_pessoa`.

Ao se utilizar um ponteiro para uma struct, é importante lembrar de liberar a memória alocada para a struct quando ela não for mais necessária, para evitar vazamento de memória. Isso é feito com a função `free`. No exemplo acima, a memória alocada para a struct `Pessoa` é liberada com a função `free` após os dados da pessoa serem impressos. Importante notar que não se usa o `.` para acessar os campos da struct como ponteiro, mas sim o `->`.

## Exemplo Agenda de Contatos

Aqui está um exemplo de como usar uma struct `Contato` para criar uma agenda de contatos:

```c
#include <stdio.h>

struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct Contato agenda[100];
    int num_contatos;

    printf("Digite o número de contatos: ");
    scanf("%d", &num_contatos);

    for (int i = 0; i < num_contatos; i++) {
        printf("Digite o nome do contato %d: ", i + 1);
        scanf("%s", agenda[i].nome);

        printf("Digite o telefone do contato %d: ", i + 1);
        scanf("%s", agenda[i].telefone);
    }

    printf("Contatos:\n");

    for (int i = 0; i < num_contatos; i++) {
        printf("Nome: %s\n", agenda[i].nome);
        printf("Telefone: %s\n", agenda[i].telefone);
    }

    return 0;
}
```

Neste exemplo, a struct `Contato` é usada para representar um contato na agenda. A agenda é um array de structs `Contato` com tamanho 100. O usuário digita o número de contatos a serem adicionados à agenda, e em seguida digita o nome e o telefone de cada contato. Os contatos são armazenados na agenda e depois impressos na tela. O programa pode ser modificado para adicionar mais campos à struct `Contato`, como endereço, e-mail, etc. A struct `Contato` é usada para agrupar os dados relacionados de um contato em um único tipo de dado. Isso torna o programa mais organizado e fácil de entender. 

## Conclusão

As structs são uma maneira de agrupar dados relacionados em um único tipo de dado. Elas são úteis para representar registros de dados em um programa. As structs podem conter diferentes tipos de dados, como inteiros, floats, chars, arrays, ponteiros, etc. Elas são uma forma de organizar e acessar dados de forma mais estruturada e organizada. As structs são amplamente utilizadas em programação para representar entidades e registros de dados.



