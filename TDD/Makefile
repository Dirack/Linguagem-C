#!/bin/bash
#
# Makefile (Shell Script)
# 
# Objetivo: Compilar testes das questões.
# 
# Site: https://dirack.github.io
# 
# Versão 1.0
# 
# Programador: Rodolfo A C Neves (Dirack) 22/09/2020
# 
# Email: rodolfo_profissional@hotmail.com
# 
# Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.

DEP = questao1.x questao2.x questao3.x questao4.x questao5.x

test:	$(addprefix test_,$(DEP))

%.x:	%.c
	gcc $< ../$(subst test_,,$<) ./Unity/unity.c -o $@
	./$@ < log.txt
	rm $@
