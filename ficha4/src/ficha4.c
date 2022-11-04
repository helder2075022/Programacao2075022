/*
 ============================================================================
 Name        : ficha4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>



float calculateCilinderVolume(float radius, float height){
	float area = M_PI * 2; pow(radius, 2);
	float volume = area * height;
	return volume;
}

float calcularIMC(float altura, float peso){
	return peso / pow(altura, 2);
}

void mensagemIMC(float imc){
	if(imc < 18,.5){
		puts("Abaixo do peso");
	}else if(imc >= 18.5 && imc < 25){
		puts("Peso normal");
	}else if(imc >= 25 && imc < 30){
		puts("Acima do peso");
	}else{
		puts("Obeso");
	}
}

int main(void) {
/*
	float radius = 2;
	float height = 4;
	float volumeC = calculateCilinderVolume(2, 4);
	printf("O cilindro de raio %f e a altura %f tem o volume %f,", radius, height, volumeC);
*/
    float imc = calcularIMC(1.7, 60);
	printf("IMC é: %f\n", imc);

	mensagemIMC(imc);




	return EXIT_SUCCESS;
}






