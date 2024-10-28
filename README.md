# Array e String em C

## Array

Array é uma estrutura de dados que armazena uma coleção de elementos do mesmo tipo. Os elementos são armazenados em locais de memória contíguos e podem ser acessados por meio de um índice.

Um array é um agregado homogêneo de elementos, onde cada elemento é acessado por um índice. O índice é um número inteiro que indica a posição do elemento no array. O índice do primeiro elemento de um array é 0 e o índice do último elemento é `tamanho - 1`. Abaixo temos um exemplo de um array de inteiros em C:

```c
#include <stdio.h>
int main (int argc, char **argv){
	int i, x[10];
	for (i = 0 ; i < 10 ; i++){
		scanf("%d",&x[i]);
	}
	for (i = 0 ; i < 10 ; i++){
		printf("%d ",x[i]);
	}
	return 0;
}
```

### Declaração de um Array

A declaração de um array em C é feita da seguinte forma:

```c
tipo nome[tamanho];
```

onde:

- `tipo` é o tipo de dado dos elementos do array;
- `nome` é o nome do array;
- `tamanho` é o número de elementos do array.
- Exemplo:

```c
int numeros[5]; 
```

### Inicialização de um Array

A inicialização de um array em C pode ser feita de duas formas:

1. Inicialização de todos os elementos do array:

```c
tipo nome[tamanho] = {valor1, valor2, ..., valorN};
```

2. Inicialização de alguns elementos do array:

```c
tipo nome[tamanho] = {valor1, valor2, ..., valorN, [tamanho-1] = valorN};
```

### Acesso a Elementos de um Array

Os elementos de um array podem ser acessados por meio de um índice. O índice de um array é um número inteiro que indica a posição do elemento no array. O índice do primeiro elemento de um array é 0 e o índice do último elemento é `tamanho - 1`.

```c
int numeros[5] = {10, 20, 30, 40, 50};

printf("%d\n", numeros[0]); // Saída: 10
printf("%d\n", numeros[2]); // Saída: 30
printf("%d\n", numeros[4]); // Saída: 50
```

### Exemplo de Uso de Array

No exemplo abaixo é criado um array de inteiros com 5 elementos e, em seguida, é feito um loop para imprimir os elementos do array.

```c
#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
```

Imagine outro exemple de uso de arrays em C, onde é necessário verificar o maior elemento de um array e em qual índice ele se encontra.

```c
#include <stdio.h>
int main (int argc, char **argv){
	int i,maior,indiceMaior, x[100];
	for (i = 0 ; i < 100 ; i++){
		scanf("%d",&x[i]);
	}
    indiceMaior=0;
    maior=x[0];
	for (i = 1 ; i < 100 ; i++){
		if(x[i]>maior){
			indiceMaior=i;
			maior=x[i];
		}
	}
	printf("O maior elemento é %d e está no índice %d\n",maior,indiceMaior);
	return 0;
}
```

### Arrays como Parâmetros de Funções

Arrays podem ser passados como parâmetros de funções em C. Quando um array é passado como parâmetro de uma função, ele é passado por referência, ou seja, a função recebe um ponteiro para o array. Abaixo temos um exemplo de uma função que recebe um array de inteiros e imprime os elementos do array.

```c
#include <stdio.h>

void imprimir(int numeros[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", numeros[i]);
    }
} 

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    imprimir(numeros, 5);

    return 0;
}
```

**Passagem de parâmetro por Valor**: Quando um parâmetro é passado por valor, uma cópia do valor é passada para a função. Qualquer alteração feita no valor do parâmetro dentro da função não afeta o valor original.

**Passagem de parâmetro por Referência**: Quando um parâmetro é passado por referência, o endereço de memória do valor é passado para a função. Qualquer alteração feita no valor do parâmetro dentro da função afeta o valor original.

Em C arrays são passados por referência, ou seja, a função recebe um ponteiro para o array. Isso significa que qualquer alteração feita no array dentro da função afeta o array original.

No exemplo abaixo, a função `duplicaValores` recebe um array de inteiros e duplica os valores dos elementos do array.

```c
void duplicaValores(int a[10]) {
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = a[i] * 2;
	}
}

int main(int argc, char **argv) {
	int a1[10];
	int i;
	for (i = 0; i < 10; i++) {
		a1[i] = i;
	}
	duplicaValores(a1);
	for (i = 0; i < 10; i++) {
		printf("%d ", a1[i]);
	}
	return 0;
}
```

## Strings

Strings em C são arrays de caracteres terminados por um caractere nulo (`\0`). O caractere nulo é um caractere especial que indica o final da string. Strings em C são representadas como arrays de caracteres, onde cada caractere é armazenado em um elemento do array.

### Declaração de Strings

A declaração de uma string em C é feita da seguinte forma:

```c
char nome[tamanho];
```

onde:

- `char` é o tipo de dado dos elementos da string;
- `nome` é o nome da string;
- `tamanho` é o número de caracteres da string.
- Exemplo:

```c
char nome[10]; 
```

### Inicialização de Strings

A inicialização de uma string em C pode ser feita de duas formas:

1. Inicialização de uma string com um texto:

```c
char nome[tamanho] = "texto";
```

2. Inicialização de uma string com um texto e tamanho:

```c

char nome[tamanho] = {'t', 'e', 'x', 't', 'o', '\0'};
```

### Acesso a Caracteres de uma String

Os caracteres de uma string podem ser acessados por meio de um índice. O índice de uma string é um número inteiro que indica a posição do caractere na string. O índice do primeiro caractere de uma string é 0 e o índice do último caractere é `tamanho - 1`.

```c
char nome[6] = "texto";

printf("%c\n", nome[0]); // Saída: t
printf("%c\n", nome[2]); // Saída: x
printf("%c\n", nome[4]); // Saída: o
```

### Exemplo de Uso de Strings

No exemplo abaixo é criada uma string com o texto "texto" e, em seguida, é feito um loop para imprimir os caracteres da string.

```c
#include <stdio.h>

int main() {
    char nome[6] = "texto";

    for (int i = 0; i < 6; i++) {
        printf("%c\n", nome[i]);
    }

    return 0;
}
```

Imagine outro exemplo de uso de strings em C, onde é necessário contar o número de vogais em uma string.

```c
#include <stdio.h>
int main (int argc, char **argv){
  int i,cont=0;
  char s[100];
  scanf("%s",s);
  for (i = 0 ; s[i] != '\0' ; i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
      cont++;
    }
  }
  printf("A string tem %d vogais\n",cont);
  return 0;
}
```

### Strings como Parâmetros de Funções

Strings podem ser passadas como parâmetros de funções em C. Quando uma string é passada como parâmetro de uma função, ela é passada por referência, ou seja, a função recebe um ponteiro para a string. Abaixo temos um exemplo de uma função que recebe uma string e imprime os caracteres da string.

```c
#include <stdio.h>

void imprimir(char nome[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%c\n", nome[i]);
    }
}

int main() {
    char nome[6] = "texto";

    imprimir(nome, 6);

    return 0;
}
```

No exemplo abaixo, a função `contarVogais` recebe uma string e conta o número de vogais na string.

```c
#include <stdio.h>

int contarVogais(char s[]) {
    int i, cont = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            cont++;
        }
    }
    return cont;
}

int main() {
    char s[100];
    scanf("%s", s);
    printf("A string tem %d vogais\n", contarVogais(s));
    return 0;
}
```

### Funções para Manipulação de Strings

Em C, existem várias funções para manipulação de strings, como `strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strstr`, entre outras. Abaixo temos exemplos de uso da função o uso das funções listadas acima.

Para o uso do `strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strstr` é necessário incluir a biblioteca `string.h`.

Abaixo temos o exemplo de uso das funções `strlen`, `strcpy`, `strcat`, `strcmp`, `strchr`, `strstr`.

A função `strlen` retorna o tamanho de uma string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[6] = "texto";
    int tamanho = strlen(nome);
    printf("O tamanho da string é %d\n", tamanho);
    return 0;
}
```

A função `strcpy` copia uma string para outra string.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[6] = "texto";
    char destino[6];
    strcpy(destino, nome);
    printf("A string destino é %s\n", destino);
    return 0;
}
```

A função `strcat` concatena duas strings.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char nome[6] = "texto";
    char sobrenome[6] = "abcde";
    strcat(nome, sobrenome);
    printf("A string nome é %s\n", nome);
    return 0;
}
```

A função `strcmp` compara duas strings. Se as strings forem iguais, a função retorna 0. Se a primeira string for menor que a segunda string, a função retorna um número negativo. Se a primeira string for maior que a segunda string, a função retorna um número positivo.

```c
#include <stdio.h>

int main() {
    char nome1[6] = "texto";
    char nome2[6] = "texto";
    if (strcmp(nome1, nome2) == 0) {
        printf("As strings são iguais\n");
    } else {
        printf("As strings são diferentes\n");
    }
    return 0;
}
```
A função `strchr` procura a primeira ocorrência de um caractere em uma string e retorna um ponteiro para a posição do caractere na string. Se o caractere não for encontrado, a função retorna NULL. 

```c
#include <stdio.h>

int main() {
    char nome[6] = "texto";
    char *p = strchr(nome, 't');
    if (p != NULL) {
        printf("O caractere 't' foi encontrado na posição %ld\n", p - nome);
    } else {
        printf("O caractere 't' não foi encontrado\n");
    }
    return 0;
}
```

A função `strstr` procura a primeira ocorrência de uma substring em uma string e retorna um ponteiro para a posição da substring na string. Se a substring não for encontrada, a função retorna NULL.

```c
#include <stdio.h>

int main() {
    char nome[6] = "texto";
    char *p = strstr(nome, "ex");
    if (p != NULL) {
        printf("A substring 'ex' foi encontrada na posição %ld\n", p - nome);
    } else {
        printf("A substring 'ex' não foi encontrada\n");
    }
    return 0;
}
```



