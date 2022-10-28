/*
 ============================================================================
 Name        : ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//=======================================Exercício 1===================


int main(void) {
	/*

   float p1 = 14.0;
   float p2 =  12.0;
   float freq = 13.0;

   float  media = (p1*0.3) + (p2*0.3) + (freq*0.4);

    if (media > 9.5) {
    	printf("%f\n aluno está aprovado", media);
    } else (media < 9.5) {
    	printf("%f\n aluno está reprovado",media);
    }
    */

    //========================================Exercício 2====================
   /*
	puts("insira a altura");
    int altura;
    scanf("%i", &altura);

    if (altura > 180) {
       printf("alta estatura");
    } else if(altura > 165) {
    	printf("media estatura");
    }else {
    	printf("baixa estatura");
    }

    */

	//========================================Exercício 3======================
/*
	int mes = 3;

	if(mes == 1){
		puts("Janeiro");
	} else if(mes == 2) {
		puts("Fevereiro");
	}else if(mes == 3) {
		puts("Marco");
	}else if(mes == 4) {
		puts("Abril");
	}else if(mes == 5) {
		puts("Maio");
	}else if(mes == 6) {
		puts("Junho");
	}else if(mes == 7) {
		puts("Julho");
	}else if(mes == 8) {
		puts("Agosto");
	}else if(mes == 9) {
		puts("Setembro");
	}else if(mes == 10) {
		puts("Outubro");
	}else if(mes == 11) {
		puts("Novembro");
	}else(mes == 12) {
		puts("Dezembro");
	}

	*/

//==============================================Exercício 4=====================
	float operando1 = 2;
	float operando2 = 4;
	char operador = '-';

	float resultado = 0;

	if(operador == '+'){
		resultado = operando1 + operando2;
	}
	else if(operador == '-'){
		resultado = operando1 - operando2;
	}
	else if(operador == '*'){
		resultado = operando1 * operando2;
	}
	else(operador == '/'){
		resultado = operando1 / operando2;
	}

	printf("%f %c %f = %f",operando1, operador, operando2,resultado);



























	return EXIT_SUCCESS;
}
