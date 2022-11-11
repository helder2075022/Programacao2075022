/*
 ============================================================================
 Name        : Ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	//===============================================================Exercício 4========================================================

	/*
	float operando1 = 2;
	float operando2 = 4;
	char operador = '+';

	float resultado = 0;

	if(operador == '+') {
		resultado = operando1 + operando2:
	}else if(operador == '-') {
		resultado = operando1 - operando2;
	}else if(operador == '*') {
		resultado = operando1 * operando2;
	}else if(operador == '/') {
		resultado = operando1 / operando2;
	}else if(operador == '^') {
		resultado = operando1, operando2;
	}

	printf("%.2f %c &.1f = %.1f",operando1, operador, operando2, resultado);
	*/
	//===============================================================Exercício 5=============================================================
/*


    int  soma = 0;
	int max = 100;
	int i = 1;


	while(i <= max){
		soma = soma + i;
		i++;
	}

	printf("Soma até %i é: %i", 100, soma);
*/
//===================================================================Exercício 6=============================================================
/*
	int multiplo = 5;
	int max = 20;
	int i = 0;

	printf("%i \n", 1);
	while(i  < max){
		i += multiplo;
		printf( "%i \n",i);
	}
	*/

	/*
	    int multiplo = 5;
		int max = 20;
		int index = 1;

		while(index  < max){
			if(index % multiplo == 0){
				printf( "%i \n",index);
			}
			index++;
		}
		*/

//===================================================================Exercício 7=============================================================
/*
int n = 5;
int factorial = 1;

while(n >= 1){
	factorial = factorial * n;
	n--;
}
printf("%i! é: %i \n", 5, factorial);
*/
//==================================================================Exercício 8=========================================================

	int ano = 2020;


	if(ano % 100 == 0){
		if (ano % 400 == 0) {
			puts("é ano bisseto");
		}




	}









	return EXIT_SUCCESS;
}
