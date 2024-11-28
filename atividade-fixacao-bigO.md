# Atividade de Fixação - Big O

## Exercício 1

Faça um gráfico das funções `f(x)=5x, g(x)=log2x, h(x)=x log2x, w(x)=x2, z(x)=x3 e t(x)=2x` para os eixos x e y e considerando os intervalos x >= 1 e y >= 0. Use o site Desmos (`https://www.desmos.com/`).com para auxiliar nesta tarefa e responda às seguintes perguntas:

1. A partir de qual valor de x temos `h(x) > f(x)`?

2. A partir de qual valor de x temos `w(x) > f(x)`?

3. A expressão `w(x) > g(x)` é válida para todo valor de `x`? Em caso negativo, a partir de qual valor de `x` a expressão é verdadeira?

4. A expressão `g(x) > f(x)` é válida para todo valor de `x`? Em caso negativo, a partir de qual valor de `x` a expressão é verdadeira?

5. A expressão `t(x) > z(x)` é válida para todo valor de `x`? Em caso negativo, a partir de qual valor de `x` a expressão é verdadeira?

6. Qual função apresenta a maior taxa de crescimento?

## Exercício 2

Escreva um algoritmo que receba valores em um vetor e imprima `ORDENADO` se o vetor estiver em ordem crescente. Qual e função de custo de pior caso e sua ordem de complexidade O?


## Exercício 3

Escreva um algoritmo que receba um vetor ordenado e um numero extra e insira esse número na sua posição correta no vetor ordenado, deslocando os outros números se for necessario. Quais a sua função de custo e ordens de complexidade O.

## Exercício 4

Calcule a complexidade, no pior caso, do fragmento de codigo abaixo:

```c
int i , j , k , s ;
for ( i =0; i < N−1; i++){
    for ( j= i +1; j < N; j++){
        for ( k=1; k < j ; k++){
            s = 1 ;
        }
    }
}
```

 ## Exercício 5

 Calcule a complexidade, no pior caso, do fragmento de codigo abaixo:

```c

int i , j , s ;
s = 0 ;
for ( i =1; i < N−1; i ++){
    for ( j =1; j < 2∗N; j ++){
        s = s + 1 ;
    }
}
```

## Exercício 6

Escreva um algoritmo que determine se um valor V encontra-se em um arranjo de n elementos. Escreva a equação de tempo de execução do seu algoritmo.

## Exercício 7

Escreva um algoritmo que encontre o menor elemento de um arranjo A com n elementos. Encontre a equação do tempo de execução do algoritmo.