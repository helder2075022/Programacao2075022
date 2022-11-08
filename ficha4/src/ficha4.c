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
void drawLine(int widht){
	for(int i = 0; i < widht; i++) {
		printf("%c", '*');
	}

}

void drawRectangle(int height, int width){
	for(int i = 0; i < height; i++) {
		drawLine(width);
		puts("");
	}
}

void drawTriangle(int height){
	int width = 1;
	for(int i = 0; i < height; i++) {
			drawLine(width);
			puts("");
			width ++;
		}
}

int main(void) {
	//==================================================================Exercicio1============================================================
/*
	float radius = 2;
	float height = 4;
	float volumeC = calculateCilinderVolume(2, 4);
	printf("O cilindro de raio %f e a altura %f tem o volume %f,", radius, height, volumeC);
*/
	//=================================================================Exercicio2============================================================

/*    float imc = calcularIMC(1.7, 60);
	printf("IMC é: %f\n", imc);

	mensagemIMC(imc);
	*/
	//================================================================Exercico3================================================================

	drawRectangle(3, 3);
    //================================================================Exercicio4===============================================================

	drawTriangle(10);
	//================================================================Exercicio5=============================================================

	for(int i = 0)










	return EXIT_SUCCESS;
}






