/*
 ============================================================================
 Name        : Ponteiros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int var = 100;
	printf("Endere�o de vari�vel var: %x\n", &var);
    int *ip;
	ip = &var;
	printf("Endere�o guardado da vari�vel var: %x\n", ip);
	printf("Valor *ip da vari�vel var: %d\n", *ip);





	return EXIT_SUCCESS;
}
