/*
* test_questao4.c (C)
* 
* Objetivo: Suíte de testes da questão 4.
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
#include "../questao4.h"
#include <stdio.h>
#include <time.h>
clock_t t1, t2;

void setUp(){};
void tearDown(){};

void test_fibIterativa(void){
	TEST_ASSERT_EQUAL(0,fibIterativa(0));
	TEST_ASSERT_EQUAL(1,fibIterativa(1));
	TEST_ASSERT_EQUAL(1,fibIterativa(2));
	TEST_ASSERT_EQUAL(2,fibIterativa(3));
	TEST_ASSERT_EQUAL(3,fibIterativa(4));
	TEST_ASSERT_EQUAL(5,fibIterativa(5));
}

void test_fibIterativaTime(void){
	t1 = clock();	
	TEST_ASSERT_EQUAL(9227465,fibIterativa(35));
	t1 = clock() - t1;
	double time1 = ((double) t1)/CLOCKS_PER_SEC;
	printf("fibIterativa(35) rodou em %f segundos\n",time1);
	
	t2 = clock();
	TEST_ASSERT_EQUAL(102334155,fibIterativa(40));
	t2 = clock() - t2;
	double time2 = ((double) t2)/CLOCKS_PER_SEC;
	printf("fibIterativa(40) rodou em %f segundos\n",time2);
}

void test_fibRecursiva(void){
	TEST_ASSERT_EQUAL(0,fibRecursiva(0));
	TEST_ASSERT_EQUAL(1,fibRecursiva(1));
	TEST_ASSERT_EQUAL(1,fibRecursiva(2));
	TEST_ASSERT_EQUAL(2,fibRecursiva(3));
	TEST_ASSERT_EQUAL(3,fibRecursiva(4));
	TEST_ASSERT_EQUAL(5,fibRecursiva(5));
}

void test_fibRecursivaTime(void){
	t1 = clock();	
	TEST_ASSERT_EQUAL(9227465,fibRecursiva(35));
	t1 = clock() - t1;
	double time1 = ((double) t1)/CLOCKS_PER_SEC;
	printf("fibRecursiva(35) rodou em %f segundos\n",time1);
	
	t2 = clock();
	TEST_ASSERT_EQUAL(102334155,fibRecursiva(40));
	t2 = clock() - t2;
	double time2 = ((double) t2)/CLOCKS_PER_SEC;
	printf("fibRecursiva(40) rodou em %f segundos\n",time2);
}

int main(void){
	UNITY_BEGIN();
	RUN_TEST(test_fibIterativa);
	RUN_TEST(test_fibIterativaTime);
	RUN_TEST(test_fibRecursiva);
	RUN_TEST(test_fibRecursivaTime);

	return UNITY_END();
}
