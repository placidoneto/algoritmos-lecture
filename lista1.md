# TP 1 - *Trabalho Prático 1*

### 1

O programa a seguir escreve uma mensagem de Olá mundo! no terminal de comandos em que é executado:

```c
#include <stdio.h>
int main(){
  printf("Olá mundo!\n");
  return 0;
}
```

Escreva, compile e execute o programa. Para compilar, execute:

```bash
gcc -o ola_mundo ola_mundo.c
```
### 2

2	Altere o programa da questão anterior para que o mesmo mostre na tela a mensagem *Olá FULANO, bem-vindo(a) ao mundo da linguagem de programação C!* 
onde FULANO deve ser substituído pelo seu nome.

### 3

O programa a seguir lê dois números inteiros a e b (−106 ≤ a, b ≤ 106 ) e mostra a soma dos mesmos.
    
```c
#include <stdio.h>
int soma(int a, int b){
    int s = a+b;
    return s;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",soma(a,b));
    return 0;
}
```

Modifique o programa para que o mesmo mostre a multiplicação, ao invés da soma, entre a e b. Realize testes com os valores a seguir:

```bash
10 e 20
11 e 22
13 e 31
1001 e 201
29183 e 2321
23291 e 39281
93827 e 82836
```

### 4

Escreva um programa que calcule a média aritmética de quatro números reais informados pelo usuário.

### 5

Escreva um programa que, tendo como dados de entrada dois pontos quaisquer do plano, A(x1, y1) e B(x2, y2), imprima a distância entre eles.


A fórmula para calcular a distância \( d \) entre dois pontos \( A(x_1, y_1) \) e \( B(x_2, y_2) \) em um plano cartesiano é dada por:

\[ d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2} \]


Onde:
- \( (x_1, y_1) \) são as coordenadas do ponto A.
- \( (x_2, y_2) \) são as coordenadas do ponto B.
- \( d \) é a distância entre os dois pontos.

Faça uma pesquisa das funções presentes na biblioteca math.h para lhe auxiliar no cálculo. Caso o compilador não reconheça as funções em math.h, adicione -lm ao final do comando de compilação. Exemplo:

```bash
gcc -o questao questao.c -lm
```

| Exemplo de entrada |Exemplo de saída |
|----------|----------|
| A(0, 0) - B(4, 3)   | 5.0  |
| A(1.5, 2.3) - B(4, 6)   | 4.47  |


### 6

Escreva um programa para calcular e exibir a média ponderada de 2 notas informadas pelo usuário (nota 1 = peso 6 e nota 2 = peso 4). As notas são números reais.


| Exemplo de entrada |Exemplo de saída |
|----------|----------|
| 5 - 8   | 6.3  |
| 3.5 - 7.7   | 5.2  |

### 7

Escreva um programa capaz de inverter um número inteiro de 3 dígitos fornecido pelo usuário. A inversão consiste em apresentar primeiro a unidade, seguida da dezena e por último a centena.
Exemplo:


| Exemplo de entrada |Exemplo de saída |
|----------|----------|
| 108   | 801  |
| 123   | 321  | 

### 8
Escreva um programa que leia o salário de um funcionário, um percentual de aumento e ao final calcule e mostre o valor do aumento e do novo salário.

### 9

Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Escreva um programa que leia o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do funcionário.

Entrada:
```bash
- Salário fixo do funcionário: : R$ 1100,00
- Valor das vendas: : R$ 2000,00
```
Saída:

```bash
- Valor da Comissão: : R$ 80,00
- Valor do Salário final: : R$ 1180,00
```

### 10

Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos para os quais fornece a quantidade de ração em gramas. Escreva um programa que leia o peso do saco de ração e a quantidade de ração fornecida para cada gato e em seguida calcule e mostre quanto restará de ração no saco após cinco dias.

Entrada:
```bash
1
50
100
```

Saída:
```bash
Resto de ração apos cinco dias: 250 gramas
```