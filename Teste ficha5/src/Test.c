/*
 * Test.c
 *
 *  Created on: 11/11/2022
 *      Author: 2075022
 */

#include "Test.h"

/*

 float multi(float x, float y){
 return x * y;
 }

 float sum(float x, float y){
 return x + y;
 }

 float fraction(float x, float y){

 if(y == 0)
 return 0;
 else

 return x / y;
 }
 */
//Exercício 3
void CalcularTempoTrabalho(int he, int me, int se, int hs, int ms, int ss) {
	int hes = he * 3600 + me * 60 + se;
	int hss = hs * 3600 + ms * 60 + ss;

	int TempoTrabalho = hss - hes;

	printf("Total em segundos: %i \n", TempoTrabalho);

	int horas = TempoTrabalho / 3600;
	int resto_horas = TempoTrabalho % 3600;

	int minutos = resto_horas / 60;
	int segundos = resto_horas & 60;

	printf("HORAS: %i \n", horas);

	printf("MINUTOS: %i \n", minutos);

	printf("SEGUNDOS: %i \n", segundos);

}


//Exercício 4
void adivinha() {

	int t = 0;

	srand((unsigned) time(&t));
	// generates a random number between o and 8
	int random = rand() % 11;
    int palpite = 0;

	while (palpite != random) {
		puts("Indique seu palpite!");
		scanf("%i", &palpite);

		if (palpite == random) {
			puts("ACERTOU!");
			break;
		} else {
			if (palpite > random) {
				puts("ACIMA!");
			} else {
				puts("ABAIXO!");
			}
		}
	}
}

