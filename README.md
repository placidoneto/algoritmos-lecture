# Avalliação Final 1o Bimestre

## Instruções

- Não seguir alguma das regras na descrição desta atividade implicará em não correção da atividade.
- O trabalho pode ser feito em grupos de até 2 pessoas.
- O trabalho deve ser enviado via github-classroom.
- Os membros do grupo devem enviar (commit e push), cada um, pelo menos a metade das questões abaixo.
- O link para o Assignment é: [Assignment Avaliação - 1o Bimestre] (https://classroom.github.com/a/p5Cq6abr).
- O prazo de entrega é até o dia 12/12/2024 até às 12:00.
- O nome das equipes deem ser: avalicacao-nomeSobrenome-nomeSobrenome.

## Questões

1. Crie uma struct chamada Produto com os campos nome (string), preco (float) e quantidade
(int). Escreva uma função que receba um ponteiro para um produto e atualize a quantidade em
estoque. Em seguida, crie um produto e teste a função.

```c
#include <stdio.h>
  #include <string.h>

  struct Produto {
      char nome[50];
      float preco;
      int quantidade;
  };

  void atualizaEstoque(struct Produto *p, int qtd) {
      ...
  }

  int main() {
      
      struct Produto p;
      // Restante da implementacao...
  
      return 0;
  }
```

2. Crie uma struct chamada Aluno com os campos nome (string), matricula (int), notas (vetor de 3 floats). Escreva uma função que receba um ponteiro para um aluno e retorne a média das notas. Em seguida, crie um aluno e teste a função.

```c
#include <stdio.h>
  #include <string.h>

  struct Aluno {
      char nome[50];
      int matricula;
      float notas[3];
  };

  float mediaNotas(struct Aluno *a) {
      ...
  }

  int main() {
      
      struct Aluno a;
      // Restante da implementacao...
  
      return 0;
  }
```

3. Crie uma struct chamada Data com os campos dia, mes e ano (inteiros). Escreva uma função que receba duas datas e retorne 1 se a primeira data for anterior à segunda, 0 se forem iguais e -1 se a primeira data for posterior à segunda.

```c

  struct Data {
      int dia;
      int mes;
      int ano;
  };

  int comparaDatas(struct Data d1, struct Data d2) {
      ...
  }

  int main() {
      
      struct Data d1, d2;
      // Restante da implementacao...
  
      return 0;
  }
```

4. Crie uma struct chamada Ponto com os campos x e y. Escreva uma função que calcule a distância entre dois pontos. Em seguida, crie dois pontos e teste a função.

```c

  struct Ponto {
      float x;
      float y;
  };

  float distancia(struct Ponto p1, struct Ponto p2) {
      ...
  }

  int main() {
      
      struct Ponto p1, p2;
      // Restante da implementacao...
  
      return 0;
  }
```

5. Considerando o struct Ponto da questão anterior, escreva uma função que receba um 3 pontos e retorne o a area do triangulo formado pelos 3 pontos.

A fórmula para calcular a área de um triângulo usando a formula do semiperímetro, temos:

```math
\text{Área} = \sqrt{p \cdot (p - a) \cdot (p - b) \cdot (p - c)} 
```

onde:
- \( `p `\) é o semiperímetro do triângulo, calculado como `p = {a + b + c} / 2`
- \( `a` \), \( `b` \) e \( `c` \) são os comprimentos dos lados do triângulo.
 


```c

  float areaTriangulo(struct Ponto p1, struct Ponto p2, struct Ponto p3) {
      ...
  }

  int main() {
      
      struct Ponto p1, p2, p3;
      // Restante da implementacao...
  
      return 0;
  }
```

1. Para as 5 questões anteriores analise a complexidade de cada função, APRESENTE e EXPLIQUE, no `README.m` do seu repositório, a **(i) complexidade de cada função** junto com a **(ii) expressão de quantidade de operações**.