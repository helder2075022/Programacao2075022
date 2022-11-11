/*
 ============================================================================
 Name        : ficha5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ficha5.h"

int main(void) {
    void atm(float amount){

    	float balance  = 10000;

    	if(balance > amount){
    		printf("Levantou: %.2f€, saldo disponível: %.2f€", amount, balance - amount);
    	  }
    	else{
    		puts("Saldo insuficiente");
    	}
    }

   atm(1000);


	return EXIT_SUCCESS;
}

