# L01 - Introdução a C
## Introdução

C é uma linguagem de programação de propósito geral, estruturada, imperativa, procedural, padronizada pela ISO, criada em 1972, por Dennis Ritchie, no AT&T Bell Labs, para o desenvolvimento do sistema operacional Unix. É uma das linguagens de programação mais antigas ainda em uso, e serve de base para a criação de muitas outras linguagens, como C++, C#, Java, JavaScript, PHP, Python, entre outras.


## Entrada e Saída

A entrada e saída de dados em C é feita através das funções scanf() e printf(), disponíveis na sua biblioteca padrão. A função scanf() é usada para ler dados do teclado, e a função printf() é usada para exibir dados na tela.



```c
#include <stdio.h>

int main(int argc, char **argv) {
   printf("Hello World!\n");
   printf ("Meu primeiro programa em ANSI C\n");
   return 0;
}
```

Todo programa em C começa pela função **main** retorna um inteiro. Possui dois parâmetros inteiro com a quantidade de elementos no array de parâmetros Array de strings.

```c
int main(int argc, char ** argv) {
	//Aqui vai o programa
	return 0;
}
```

## Leitura e Escrita de Dados em C

A função scanf() é usada para ler dados do teclado, e a função printf() é usada para exibir dados na tela. A função scanf() é usada para ler dados do teclado, e a função printf() é usada para exibir dados na tela.



```c
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
```

| Tipo de Dado            | Identificador de Entrada | Identificador de Saída |
|-------------------------|--------------------------|------------------------|
| `int`                   | `%d`                     | `%d`                   |
| `float`                 | `%f`                     | `%f`                   |
| `double`                | `%lf`                    | `%lf`                  |
| `char`                  | `%c`                     | `%c`                   |
| `char[]` (string)       | `%s`                     | `%s`                   |
| `short`                 | `%hd`                    | `%hd`                  |
| `unsigned int`          | `%u`                     | `%u`                   |
| `long`                  | `%ld`                    | `%ld`                  |
| `unsigned long`         | `%lu`                    | `%lu`                  |
| `long long`             | `%lld`                   | `%lld`                 |
| `unsigned long long`    | `%llu`                   | `%llu`                 |

O identificador **unsigned** em C é usado para declarar variáveis que só podem armazenar valores não negativos (ou seja, zero ou positivos). Ele pode ser aplicado a tipos de dados inteiros, como int, short, long, etc.

- Quando usar unsigned?:      
   - Quando você sabe que os valores não serão negativos: Por exemplo, contadores, tamanhos de arrays, índices, etc.
   - Para aumentar o intervalo de valores positivos: Como unsigned int tem o dobro do intervalo positivo comparado a int.

- Comparação:
  - int (signed): Pode armazenar valores de -2,147,483,648 a 2,147,483,647.
  - unsigned int: Pode armazenar valores de 0 a 4,294,967,295.
  - Usar unsigned é útil quando você precisa garantir que uma variável não seja negativa, ou quando você precisa de um intervalo maior de valores positivos.

```c
#include <stdio.h>

int main() {
    unsigned int positivo = 300;
    int negativo = -300;

    printf("Valor unsigned: %u\n", positivo);
    printf("Valor signed: %d\n", negativo);

    return 0;
}
```

## Compilação e Execução

Para executar este arquivo, salve o código acima em um arquivo chamado ex1.c, e execute o seguinte comando no terminal:

```
gcc ex1.c -o ex1
```
- Compilação:
  - Traduz o programa em (ASM) Assembly
  - Código intermediário
  - Traduz o programa em (LM) Linguagem de Máquina
  - Executa-se o programa em LM: Mais rápido
  - Código gerado nativo do processador
- Interpretação:
  - Um programa (interpretador) processa as instruções
  - Execução mais lenta
  - Necessário ter interpretador para executar
  
- Tipos de Compiladores
      GCC - Gnu Compiler Collection - http://gcc.gnu.org
      Clang - http://clang.llvm.org

## Variáveis e Tipos de Dados

Conjunto de palavras (keywords) e regras a serem usadas na descrição de um programa, palavras chaves como: *int, float, char* ou ainda palavras reservadas como: return, *while, if, for*

- Regras:
  
      Declaração de variáveis: TIPO VAR;
      Atribução: VAR=EXPR
      Condicional: if (EXPR) then BLOCO end

C é uma linguagem de programação de tipagem estática, ou seja, o tipo de uma variável é definido em tempo de compilação, e não pode ser alterado durante a execução do programa. Os tipos de dados básicos em C são: int, float, double, char, void, e os modificadores de tipo: short, long, signed, unsigned.

Conjunto de instruções que o computador é capaz de processar, como: *+, -, *, /, %, =, ==, !=, <, >, <=, >=, &&, ||, !, ++, --, +=, -=, *=, /=, %= e outros* são chamados de operadores.  



## Expressões e Operadores

Uma expressão é uma combinação de valores, variáveis, operadores e funções que são avaliados para produzir um resultado. Em C, as expressões são usadas para realizar cálculos, comparar valores, e tomar decisões. Os operadores em C são usados para realizar operações matemáticas, lógicas, de comparação, de atribuição, de incremento e decremento, de ponteiros, de bits, e de tamanho.

Exemplo de uma expressão em C:

```c
#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int soma, subtracao, multiplicacao, divisao, modulo;

    // Expressões aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    modulo = a % b;

    printf("Soma: %d + %d = %d\n", a, b, soma);
    printf("Subtração: %d - %d = %d\n", a, b, subtracao);
    printf("Multiplicação: %d * %d = %d\n", a, b, multiplicacao);
    printf("Divisão: %d / %d = %d\n", a, b, divisao);
    printf("Módulo: %d %% %d = %d\n", a, b, modulo);

    // Expressão lógica
    if (a > b && b > 0) {
        printf("%d é maior que %d e %d é positivo\n", a, b, b);
    }

    return 0;
}
```

## Estruturas de Controle

As estruturas de controle em C são usadas para alterar o fluxo de execução de um programa, e são divididas em três tipos: sequencial, condicional e repetitiva. A estrutura sequencial é a mais simples, e é usada para executar um conjunto de instruções em ordem. A estrutura condicional é usada para executar um conjunto de instruções se uma condição for verdadeira. A estrutura repetitiva é usada para executar um conjunto de instruções várias vezes, enquanto uma condição for verdadeira.

Exemplo de uma estrutura condicional em C:



```c  
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}
```


## Funções em C

Uma função em C é um bloco de código que executa uma tarefa específica, e pode ser chamada de outros lugares do programa. As funções em C são usadas para dividir um programa em partes menores, e facilitar a leitura, manutenção e reutilização do código. Uma função em C é composta por um cabeçalho, que contém o tipo de retorno, o nome da função, e os parâmetros, e um corpo, que contém as instruções que serão executadas pela função.



Exemplo de uma chama de função em C:

```c
#include <stdio.h>

int main(int argc, char **argv) {
   int x = 10;
   int y = 20;
   int m = media(x,y);
   printf("A média de %d e %d é %d\n",x,y,m);
   return 0;
}

int media(int a, int b){
   int soma,media;
   soma = a+b;
   media = soma/2;
   return media;
}
```
## Tipos de Dados

Os tipos de dados em C são usados para definir o tamanho e o formato dos dados que serão armazenados em variáveis. Os tipos de dados básicos em C são: int, float, double, char, void, e os modificadores de tipo: short, long, signed, unsigned. Os tipos de dados em C são usados para definir o tamanho e o formato dos dados que serão armazenados em variáveis. Os tipos de dados básicos em C são: int, float, double, char, void, e os modificadores de tipo: short, long, signed, unsigned.

| Tipo de Dado | Descrição                                                                 |
|--------------|--------------------------------------------------------------------------|
| `int`        | Inteiro, geralmente de 4 bytes.                                          |
| `char`       | Caractere, geralmente de 1 byte.                                         |
| `float`      | Ponto flutuante de precisão simples, geralmente de 4 bytes.              |
| `double`     | Ponto flutuante de precisão dupla, geralmente de 8 bytes.                |
| `void`       | Tipo de dado vazio, usado para indicar que uma função não retorna valor. |
| `short`      | Inteiro curto, geralmente de 2 bytes.                                    |
| `long`       | Inteiro longo, geralmente de 4 ou 8 bytes.                               |
| `signed`     | Modificador que indica que o tipo de dado pode ser positivo ou negativo. |
| `unsigned`   | Modificador que indica que o tipo de dado só pode ser positivo.          |

## Nomes de Identificadores em C

Os nomes de identificadores em C são usados para nomear variáveis, funções, estruturas, e outros elementos do programa. Os nomes de identificadores em C devem começar com uma letra ou um sublinhado, e podem conter letras, dígitos e sublinhados. Os nomes de identificadores em C são sensíveis ao caso, ou seja, diferenciam maiúsculas de minúsculas.

Exemplos de nomes de identificadores em C:

```c
int idade;
float altura;
char sexo;
void imprimirMensagem();
struct Pessoa;
```

## Variaveis Locais

As variáveis locais em C são usadas para armazenar dados temporários que são usados dentro de uma função. As variáveis locais em C são declaradas dentro de uma função, e só podem ser acessadas dentro da função onde foram declaradas. As variáveis locais em C são armazenadas na pilha de execução, e são automaticamente liberadas quando a função termina de executar.

Exemplo de variáveis locais em C:

```c
#include <stdio.h>

void calcularSoma() {
    // Declaração de variáveis locais
    int a = 5;
    int b = 10;
    int soma;

    // Cálculo da soma
    soma = a + b;

    // Impressão do resultado
    printf("A soma de %d e %d é %d\n", a, b, soma);
}

int main() {
    // Chamada da função que utiliza variáveis locais
    calcularSoma();

    return 0;
}
```
