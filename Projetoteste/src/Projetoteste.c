/*
 ============================================================================
 Name        : Projetoteste.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int g;

int main(void) {

	/* local variable declaration */
	int a, b;

    /* actual initialization */
	a = 10;
	b = 20;
	g = a + b;

	printf("value of a = %d, b = %d and g = %d\n", a, b, g);

	return 0;
}
