# Linguagem C - Exercícios do capítulo 9

> Estudos sobre linguagem C, livro de Luis Damas

* Correção:

A resolução é feita pelo arquivo Makefile dentro da pasta TDD como comando 'make test'.
As questões devem ser resolvidas em arquivos com o nome 'questao#.c', onde '#' é o número
da questão. Além disso, cada arquivo deve ter um header file correspondente sequindo a
mesma regra de formatação anterior sequido do sufixo '.h', exemplo 'questao#.h'.

* Exercícios propostos:

1. Implemente as sequintes funções que manipulam valores inteiros:

 - **iszero** - Verifica se o parâmetro n é ou não zero.

 - **add1** - Adiciona 1 ao próprio parâmetro n.

 - **zero** - Coloca zero no parâmetro n.

2. Implemente a função **lerInteiro** que devolve o inteiro lido. O parâmetro _prompt_ contém a mensagem que solicita o inteiro ao usuário. Deverá receber apenas inteiros superiores ou iguais a zero.

```c
int lerInteiro(char* prompt)
```

3. Transforme a função anterior de tal forma que o inteiro seja colocado num parâmetro enviado ao **procedimento** lerInteiro.
