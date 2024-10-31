## TP - Trabalho Prático 3

### Objetivo

Praticar os conceitos de Array e String vistos em aula.


### Descrição

- O trabalho pode ser feito em grupos de até 2 pessoas.
- O trabalho deve ser enviado via github-classroom.
- O trabalho deve ser feito em C.
- Os membros do grupo devem enviar (*commit e push*), cada um, pelo menos a metade das questões abaixo.
- O link para o Assignment é: [Assignment TP3](https://classroom.github.com/a/gnNEiMg3)
- Os códigos devem ser implementados em arquivos separados, com o nome `tp3-q1.c`, `tp3-q2.c`, ..., `tp3-q5.c`.
- O prazo de entrega é até o dia 01/11/2024 até às 18:00.
- O nome das equipes deem ser: `tp3-nomeSobrenome-nomeSobrenome`.

### Questões

1. Dada uma sequência de n números, imprimi-la na ordem inversa à da leitura.
   
2. Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes. A prova consta de 10 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados: (i) o cartão gabarito; (ii) o número de alunos da turma; (iii) o cartão de respostas para cada aluno, contendo o seu número e suas respostas. faça um programa em C para a correção automática das provas. O programa deverá ler o gabarito, o número de alunos e as respostas de cada aluno. Para cada aluno o programa deverá calcular o número de acertos e imprimir o número do aluno e o número de acertos.

3. Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou n vezes. Dados os N (onde N é determinado como entrada do usuário) resultados dos lançamentos, determinar o número de ocorrências de cada face. 

4. Dados dois strings (um contendo uma frase e outro contendo uma palavra), determine o número de vezes que a palavra ocorre na frase.
```
Exemplo:
Para a palavra ANA e a frase :
ANA E MARIANA GOSTAM DE BANANA
Temos que a palavra ocorre 4 vezes na frase.
```

5. Dada uma seqüência de n números reais, determinar os números que compõem a seqüência e o número de vezes que cada um deles ocorre na mesma.

```
Exemplo: n = 8
Seqüência: 
-1.7,  3.0,  0.0,  1.5,  0.0, -1.7,  2.3, -1,7
Saída:       
-1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez 
```

6. Em uma classe há n alunos, cada um dos quais realizou k provas com pesos distintos. Dados n , k, os pesos das k provas e as notas de cada aluno, calcular a média ponderada das provas para cada aluno e a média aritmética da classe em cada uma das provas.

7. Crie um programa que calcula o comprimento de uma string (nao use a funcção ```strlen```).

8. Crie um programa que concatena duas strings (nao use a função ```strcat```).

9. Fac¸a um programa que conte o numero de 1’s que aparecem em um string. Exemplo: ´
```
“0011001” -> 3
```

10.  A Cifra de César é uma famosa e bem antiga implementação de criptografia. Basicamente pega uma sentença e reorganiza as letras baseado em um deslocamento de letras do alfabeto. Por exemplo, com uma troca de 3 posições, o A se torna D, B se torna E, e assim por diante. O alfabeto é circular, ou seja, depois do Z, volta para o A.
Link: https://pt.wikipedia.org/wiki/Cifra_de_C%C3%A9sar

Escreva um programa que lê uma string e um número inteiro que representa o deslocamento de letras do alfabeto. O programa deve imprimir a string criptografada.
OBS: Lembre que os caracteres são representações númericas na tabela ASCII. Para converter um caractere para um número inteiro, basta fazer um cast para inteiro. 

```
EXEMPLO 3 posições
String: a ligeira raposa marrom saltou sobre o cachorro cansado

Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
```