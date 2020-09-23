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

4. Escreva de forma iterativa e recursiva, a função de _Fibonacci_ que é definida da seguinte forma:

  - Fib(0) = 0

  - Fib(1) = 1

  - Fib(2) = 1

  - Fib(n) = Fib(n-1) + Fib(n-2), para n>2

O nome das funções deverá ser fibIterativa (Para a função iterativa) e fibRecursiva (para a função recursiva).

  * Questão extra (opicional): Verificar comparativamente os tempos de cálculo das duas funções de Fibonacci criadas (iterativa e recursiva) para fib(35) e fib(40). 

[Tutorial de como calcular o tempo de execução em c](https://www.geeksforgeeks.org/how-to-measure-time-taken-by-a-program-in-c/)

[Tabela de Fibonacci pré-calculada](http://www.educ.fc.ul.pt/icm/icm99/icm41/os100.htm)

5. Implemente de forma recursiva a função **strcat** que concatena duas strings.
