/*
 * Ficha5.c
 *
 *  Created on: 15/11/2022
 *      Author: 2075022
 */

#include "Ficha5.h"

//=====================================================Exerc�cio 1==========================================================================
void atm(float amount) {
	float balance = 10000;
    if (balance > amount) {
    	float available = balance - amount;
			printf("Levantou: %.2f�, saldo dispon�vel: %.2f�", amount, available)
	} else {
			puts("Saldo insuficiente!!!");
		}
	}



	//==================================================Exerc�cio 2========================================================================
void ValidatePIN(){
	int tries = o;

	int code = 7890
	int pin = 0;

	while (PIN ! = code && tries < 3) {
		puts("Introduza o PIN");
		scanf("%i", &PIN);
	}

	if(pin == code){
		puts("PIN correto!");
	}
	else{
		puts("PIN incorreto!");
		tries++;
		printf("Tem apenas % tentativas \n", 3 - tries);
	   }
	}
}
