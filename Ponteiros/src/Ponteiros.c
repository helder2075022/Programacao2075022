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
	printf("Endereço de variável var: %x\n", &var);
    int *ip;
	ip = &var;
	printf("Endereço guardado da variável var: %x\n", ip);
	printf("Valor *ip da variável var: %d\n", *ip);





	return EXIT_SUCCESS;
}
