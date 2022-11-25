/*
 ============================================================================
 Name        : Ficha6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Arrayutils.h"

int main(void) {

	/*

	 int n[8];
	 int a,b;

	 for(a = 0; a < 8; a++) {
	 n[a] = a + 7;
	 }

	 for(b = 0; b < 8; b++) {
	 printf("Element of [%d] = %d\n", b, n[b]);
	 }
	 */

	//Ex 1

	int array[6] = { 2, 3, 5, 7, 8, 10 };
	int value = 3;
	int size = 6;

	int index = indexOf(array, value, size);
	printf("O indice do valor %i e: %i \n", value, index);

	int indexMax = indexOfMax(array, size);
	printf("O indice de valor maximo é: %i \n", indexMax);

	int indexMin = indexOfMin(array, size);
	printf("O indice de valor minimo é: %i \n", indexMin);

	int maxindex = max(array, size);
	printf(" O índice de valor máximo é: %i \n", index);

	int minindex = min(array,  size);
		printf(" O índice de valor mínimo é: %i \n", index);





	return EXIT_SUCCESS;
}
