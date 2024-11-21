# Conceitos e Exemplos de Notação de Complexidade de Algoritmos - Notação Big(O)

## Introdução

A notação Big(O) é uma forma de descrever a complexidade de um algoritmo. Ela é usada para descrever o comportamento de um algoritmo em relação ao crescimento do tamanho da entrada. A notação Big(O) é usada para descrever o pior caso de um algoritmo, ou seja, o tempo que ele leva para executar em relação ao tamanho da entrada.

### Tempo de execução de um programa

O  tempo de execução de um programa é o tempo necessário para que o programa realize a tarefa para a qual foi projetado. O tempo de execução é influenciado por vários fatores: quantidade de dados processados, plataforma de hardware e plataforma de software (compilador, S.O., linguagem de programação, etc).

O tempo de execução de um programa pode ser facilmente medido com chamadas de funções de medição de tempo. No entanto, os resultados ficam restritos aos exemplos/entradas utilizados o que dificulta a generalização da análise. 

### Tempo de execução de um algoritmo

O tempo de execução de um algoritmo é determinada a partir de sua análise a qual:

- Leva em conta todas as entradas possíveis;
- Independe das plataformas de hardware e software;
- Não requer a implementação do algoritmo.

Essas características fazem com que seja mais fácil comparar algoritmos do que comparar programas. Aprenderemos um método que que caracteriza o tempo de execução de um algoritmo em função do tamanho de sua entrada.

### Pseudocódigo

Pseudocódigo é uma representação de “alto nível” de programas de computador. Não são escritos em linguagem de programação mas seguem uma estrutura similar através do uso de comandos e instruções similares. Pseudocódigos são mais fáceis de serem entendidos por seres humanos pois abstraem detalhes de implementação, usam linguagem natural e são geralmente mais compactos. Algoritmos são comumente expressos em pseudocódigo, o que facilita a sua análise.

### Exemplo de Pseudocódigo

A seguir, um exemplo de pseudocódigo para uma função que calcula o maior número de uma lista: 

```
Algoritmo maior(A, n)
  Entrada: arranjo A com n >= 1 elementos inteiros
  Saída: o maior elemento em

  maior ← A[0]
  Para i de 1 até n- 1 faça
    Se A[i] > maior então
      maior ← A[i]
    Fim Se
  Fim Para

retorne maior
```

### Contagem de operações

A complexidade de um algoritmo é determinada pela contagem do número de operações que ele realiza. As operações podem ser contadas de várias formas, como o número de comparações, atribuições, acessos a memória, etc. A contagem de operações é uma forma de medir a eficiência de um algoritmo e é usada para determinar a complexidade de tempo de um algoritmo.

A análise de algoritmos é tipicamente realizada sobre pseudocódigos ao invés dos programas escritos em linguagem de programação.

A ideia básica é contar o número de operações primitivas presentes no algoritmo.

Operações primitivas:
- atribuição de valores a variáveis;
- acesso a um arranjo;
- chamadas de funções;
- operações aritméticas;
- comparação de dois valores;
- seguir uma referência ou ponteiro;
- retorno de valor.

Em um programa real as operações primitivas possuem tempos de execução distintos. Entretanto, para realizar a análise do algoritmo consideramos que todas as operações primitivas possuem o mesmo tempo de execução.

```
Algoritmo média(a, b, c)
  Entrada: valores reais a, b e c
  Saída: a média aritmética de a, b, c

  média ← (a + b + c) / 3
  retorne média
```

Neste exemplo, o algoritmo realiza 3 operações de adição, 1 operação de divisão e 1 operação de atribuição. Portanto, o algoritmo realiza 5 operações primitivas.

### Exemplo de contagem de operações

A seguir, um exemplo de contagem de operações para a função que calcula a soma dos maior número de uma lista:

```
Algoritmo soma(A, n)
  Entrada: arranjo A com n >= 1 elementos inteiros
  Saída: a soma dos elementos de A

  soma ← 0 // 1 operação
  Para i de 0 até n- 1 faça  // 2 operação
    soma ← soma + A[i] // 3*n operações 
  Fim Para // 3*n operações

retorne soma // 1 operação

TOTAL = 1 + 2 + 3n + 3n + 1 = 6n + 4
```

Neste exemplo, o algoritmo realiza n operações de adição e n operações de acesso a memória. A expressão `6n + 4` representa o número total de operações primitivas realizadas pelo algoritmo. A complexidade de tempo do algoritmo é `O(n)`, pois o número de operações primitivas é proporcional ao tamanho da entrada. 

## Notação Big(O)

As notações Big(O) mais comuns são: 
- O(1) - constante
- O(log n) - logarítmica
- O(n) - linear
- O(n log n) - linearítmica
- O(n^2) - quadrática
-  O(n^3) - cúbica
- O(2^n) - exponencial

Os algoritmos podem ser classificados em relação a sua complexidade de tempo. Algoritmos com complexidade de tempo O(1) são considerados muito eficientes, enquanto algoritmos com complexidade de tempo O(2^n) são considerados muito ineficientes. Cada solução pode ser implementada de várias formas, e a escolha da melhor implementação depende do tamanho da entrada e da complexidade do algoritmo.

## Outros Exemplos de Notação Big(O)

### O(1) - constante

O algoritmo realiza um número constante de operações, independentemente do tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo O(1) é uma função para calcular o quadrado de um número:

```
Algoritmo quadrado(n)
  Entrada: um número inteiro n
  Saída: o quadrado de n

  retorne n * n // 1 operação
```

Neste exemplo, o algoritmo realiza uma operação de multiplicação, independentemente do tamanho da entrada. Portanto, a complexidade de tempo do algoritmo é O(1).

### O(log n) - logarítmica

Primeiro precisamos entender o que é um logaritmo. O logaritmo de um número é o expoente ao qual uma base deve ser elevada para produzir esse número. Por exemplo, o logaritmo de 100 na base 10 é 2, porque 10^2 = 100. O logaritmo é uma função crescente, o que significa que o logaritmo de um número maior é maior do que o logaritmo de um número menor. Por exemplo, o logaritmo de 1000 na base 10 é 3, porque 10^3 = 1000. Enquanto que o logaritmo de 10 na base 10 é 1, porque 10^1 = 10. 

`Então, em que situações temos uma função ou equação logarítmica? Quando o tamanho da entrada é reduzido pela metade a cada iteração.` 

Por exemplo, um algoritmo que divide o tamanho da entrada pela metade a cada iteração tem uma complexidade de tempo `O(log n)`. Outro exemplo é um algoritmo que divide o tamanho da entrada por um fator constante a cada iteração, como o algoritmo de busca binária. 

Dessa forma, um algoritmo com complexidade de tempo `O(log n)` é mais eficiente do que um algoritmo com complexidade de tempo `O(n)`, porque ele realiza um número menor de operações à medida que o tamanho da entrada aumenta.  

O algoritmo realiza um número de operações proporcional ao logaritmo do tamanho da entrada. 

Um exemplo de algoritmo com complexidade de tempo O(log n) é uma função para encontrar o índice de um elemento em um  arranjo ordenado: 

``` 
Algoritmo busca_indice(A, n, x)
  Entrada: arranjo A com n >= 1 elementos inteiros, valor inteiro x

  Saída: o índice do elemento x em A, ou -1 se x não estiver em A

  esquerda ← 0 // 1 operação
  direita ← n - 1 // 1 operação
  Enquanto esquerda <= direita faça // log n operações
    meio ← (esquerda + direita) / 2 // log n operações
    Se A[meio] = x então // log n operações
      retorne meio // log n operações
    Senão Se A[meio] < x então // log n operações
      esquerda ← meio + 1 // log n operações
    Senão // log n operações
      direita ← meio - 1 // log n operações
    Fim Se // log n operações
  Fim Enquanto // log n operações

  retorne -1 // 1 operação
```

Neste exemplo, o algoritmo divide o tamanho da entrada pela metade a cada iteração. A quantidade de operações primitivas realizadas pelo algoritmo é `8 log n + 4`. Dessa forma, a complexidade de tempo do algoritmo é `O(log n)`.

### O(n) - linear

O algoritmo realiza um número de operações proporcional ao tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo `O(n)` é uma função para calcular a soma dos elementos de um arranjo:

```
Algoritmo soma(A, n)
  Entrada: arranjo A com n >= 1 elementos inteiros
  Saída: a soma dos elementos de A

  soma ← 0 // 1 operação
  Para i de 0 até n- 1 faça // 2 operações
    soma ← soma + A[i] // 3*n operações 
  Fim Para // 3*n operações

  retorne soma // 1 operação
```

Neste exemplo, o algoritmo realiza n operações de adição e n operações de acesso a memória. A expressão `6n + 4` representa o número total de operações primitivas realizadas pelo algoritmo. A complexidade de tempo do algoritmo é `O(n)`, pois o número de operações primitivas é proporcional ao tamanho da entrada.

### O(n log n) - linearítmica

O algoritmo realiza um número de operações proporcional ao produto do tamanho da entrada e o logaritmo do tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo `O(n log n)` é o algoritmo de ordenação quicksort (será estudado no 2o bimestre).

Neste exemplo temos um numero de operações proporcional a `n log n`. A complexidade de tempo do algoritmo é `O(n log n)`.

### O(n^2) - quadrática

O algoritmo realiza um número de operações proporcional ao quadrado do tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo `O(n^2)` é uma função para calcular a soma dos elementos de uma matriz:

```
Algoritmo soma_matriz(A, n)
  Entrada: matriz A com n x n elementos inteiros
  Saída: a soma dos elementos de A

  soma ← 0 // 1 operação
  Para i de 0 até n- 1 faça // 2 operações
    Para j de 0 até n- 1 faça // 3 operações
      soma ← soma + A[i][j] // 4*n^2 operações
    Fim Para // 4*n operações
  Fim Para // 4*n^2 operações

  retorne soma // 1 operação
```

Neste exemplo, o algoritmo realiza n^2 operações de adição e n^2 operações de acesso a memória. A expressão `4n^2 + 4n + 1` representa o número total de operações primitivas realizadas pelo algoritmo. A complexidade de tempo do algoritmo é `O(n^2)`, pois o número de operações primitivas é proporcional ao quadrado do tamanho da entrada.


### O(n^3) - cúbica

O algoritmo realiza um número de operações proporcional ao cubo do tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo `O(n^3)` é uma função para calcular o produto de duas matrizes:

```

Algoritmo produto_matriz(A, B, n)
  Entrada: matrizes A e B com n x n elementos inteiros
  Saída: a matriz produto de A e B

  Para i de 0 até n- 1 faça // 2 operações
    Para j de 0 até n- 1 faça // 3 operações
      C[i][j] ← 0 // 4 operações
      Para k de 0 até n- 1 faça // 5 operações
        C[i][j] ← C[i][j] + A[i][k] * B[k][j] // 6*n^3 operações
      Fim Para // 6*n operações
    Fim Para // 6*n^2 operações
  Fim Para // 6*n^3 operações

  retorne C // 1 operação
``` 

Neste exemplo, o algoritmo realiza n^3 operações de adição e n^3 operações de multiplicação. A expressão `6n^3 + 6n^2 + 6n + 1` representa o número total de operações primitivas realizadas pelo algoritmo. A complexidade de tempo do algoritmo é `O(n^3)`, pois o número de operações primitivas é proporcional ao cubo do tamanho da entrada.

### O(2^n) - exponencial

O algoritmo realiza um número de operações proporcional a uma exponencial do tamanho da entrada. Um exemplo de algoritmo com complexidade de tempo `O(2^n)` é uma função para calcular o n-ésimo número de Fibonacci:

```

Algoritmo fibonacci(n)
  Entrada: um número inteiro n
  Saída: o n-ésimo número de Fibonacci

  Se n = 0 então // 1 operação
    retorne 0 // 1 operação
  Senão Se n = 1 então // 1 operação
    retorne 1 // 1 operação
  Senão // 1 operação
    retorne fibonacci(n - 1) + fibonacci(n - 2) // 2^(n-1) operações
  Fim Se // 1 operação
```

Neste exemplo, o algoritmo realiza 2^(n-1) operações de adição. A complexidade de tempo do algoritmo é `O(2^n)`, pois o número de operações primitivas é proporcional a uma exponencial do tamanho da entrada.

## Conclusão

A notação Big(O) é uma forma de descrever a complexidade de um algoritmo em relação ao crescimento do tamanho da entrada. Ela é usada para descrever o pior caso de um algoritmo, ou seja, o tempo que ele leva para executar em relação ao tamanho da entrada. As notações Big(O) mais comuns são O(1), O(log n), O(n), O(n log n), O(n^2), O(n^3) e O(2^n). Cada solução pode ser implementada de várias formas, e a escolha da melhor implementação depende do tamanho da entrada e da complexidade do algoritmo.

## Referências

- Cormen, T. H., Leiserson, C. E., Rivest, R. L., & Stein, C. (2009). Introduction to algorithms. MIT press.

- Goodrich, M. T., Tamassia, R., & Goldwasser, M. H. (2014). Data structures and algorithms in Python. John Wiley & Sons.

- Sedgewick, R., & Wayne, K. (2011). Algorithms. Addison-Wesley.

- Skiena, S. S. (2008). The algorithm design manual. Springer Science & Business Media.
