#include "questao5.h"

int newstrlen(char* str){
	int i;
	for(i=0;str[i]!='\0';i++){};

	return i;
}

char* newstrcat(char* dest, char* orig){
	if(*dest=='\0')
		return strcpy(dest,orig);
	return newstrcat(dest+1,orig)-1;
}
