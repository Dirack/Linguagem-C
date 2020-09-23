/*
* test_questao5.c (C)
* 
* Objetivo: Testes das funções da questão 5.
* 
* Site: https://dirack.github.io
* 
* Versão 1.0
* 
* Programador: Rodolfo A C Neves (Dirack) 22/09/2020
* 
* Email: rodolfo_profissional@hotmail.com
* 
* Licença: GPL-3.0 <https://www.gnu.org/licenses/gpl-3.0.txt>.
*/

#include "Unity/unity.h"
#include "../questao5.h"

void setUp(){};
void tearDown(){};

void test_newstrcat(void){
	char nome[20] = "Rodolfo ";
	char sobrenome[20] = "Dirack";
	char* test;
	test = newstrcat(nome,sobrenome);
	TEST_ASSERT_EQUAL_STRING("Rodolfo Dirack",test);
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_newstrcat);
	return UNITY_END();
}
