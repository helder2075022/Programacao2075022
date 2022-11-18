/*
 * Ficha5.c
 *
 *  Created on: 15/11/2022
 *      Author: 2075022
 */

#include "Ficha5.h"

#include "Ficha_5.c"
//=====================================================Exercício 1==========================================================================
/*
 void atm(float amount) {
 float balance = 10000;
 if (balance > amount) {
 float available = balance - amount;
 printf("Levantou: %.2f€, saldo disponível: %.2f€", amount, available)
 } else {
 puts("Saldo insuficiente!!!");
 }
 }


 */
//==================================================Exercício 2========================================================================
/*
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
 */
//=================================================Exercício 3=================================================
void CalcularTempoTrabalho(int he, int me, int se, int hs, int ms, int ss) {
	int hes = he * 3600 + me * 60 + se;
	int hss = hs * 3600 + ms * 60 + ss;

	int TempoTrabalho = hss - hes;

	printf("Total em segundos: %i", TempoTrabalho);

	int horas = TempoTrabalho / 3600;
	int resto_horas = TempoTrabalho % 3600;

	int minutos = resto_horas / 60;
	int segundos  = resto_horas & 60;

	printf("HORAS: %i", horas);

	printf("MINUTOS: %i", minutos);

	printf("SEGUNDOS: %i", segundos);

}

