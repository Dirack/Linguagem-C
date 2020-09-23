#include "questao4.h"

int fibRecursiva(int i){

	if(i==0){
		return 0;
	}else if(i==1 || i==2){
		return 1;
	}

	return i = fibRecursiva(i-1) + fibRecursiva(i-2);
}

int fibIterativa(int i){
	
	if(i==0){
		return 0;
	} else if(i==1 || i==2){
		return 1;
	}

	int i1 = 1;
	int i2 = 1;
	int j,fib;
	for(j=0;j<(i-2);j++){
		fib = i1 + i2;
		i2 = i1;
		i1 = fib;
	}
	return fib;
}
