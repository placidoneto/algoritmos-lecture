# Atividade Fixação Structs


Imagine que você precisa gerenciar uma fila de atendimento. A fila de atendimento é composta de algumas restrições:

- A fila tem atendimento preferencial para idosos (pessoas com 60 anos ou mais).
- A fila tem atendimento preferencial para gestantes ou lactantes.
- A fila tem atendimento preferencial para pessoas com deficiência.

A regra de atendimento preferencial é a seguinte:

1. Se houver idosos na fila, atenda o idoso primeiro.
2. Se não houver idosos na fila, atenda a gestante ou lactante primeiro.
3. Se não houver idosos, gestantes ou lactantes na fila, atenda a pessoa com deficiência primeiro.

Para os 3 casos acima, a pessoa atendida deve ser removida da fila.

Além do atendimento preferencial, a fila deve considerar pessoas que não se enquadram nos critérios de atendimento preferencial. Neste caso, a pessoa deve ser atendida por ordem de chegada.

Para cada atendimento preferencial, um atendimento normal deve ser realizado.

OBS: **Para facilitar a implementação e execução do programa, você pode utilizar duas filas distintas. Uma fila para atendimento preferencial e outra fila para atendimento normal.**

Para implementar a fila de atendimento, você deve utilizar uma struct para representar uma pessoa. A struct deve conter os seguintes campos:

- Nome da pessoa.
- Idade da pessoa.
- Tipo de atendimento a ser realizado.
- Se a pessoa é preferencial (idoso, gestante/lactante ou com deficiência).

Para implementar a fila de atendimento, você deve utilizar uma struct para representar a fila. A struct deve conter os seguintes campos:

- Uma pessoa.
- Um ponteiro para a próxima pessoa na fila.

Considerando as orientações acima, implemente as structs e funções necessárias para gerenciar a fila de atendimento.
Crie um programa em C que implemente a fila de atendimento descrita acima. O programa deve conter as seguintes funcionalidades:

1. Inserir uma pessoa na fila preferencial.
2. Inserir uma pessoa na fila normal.
3. Remover uma pessoa da fila preferencial.
4. Remover uma pessoa da fila normal.
5. Atender uma pessoa da fila (o programa deve controlar se o próximo atendimento é preferencial ou normal).
6. Listar as pessoas em cada uma das filas.
7. Sair do programa.

