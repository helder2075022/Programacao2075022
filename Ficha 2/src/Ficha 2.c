/*
 ============================================================================
 Name        : Ficha.c
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

	//Exercício 1:

	float p1 = 13.0;
	float p2 = 14.0;
	float freq = 12.0;

	float avaliacao = (p1 * 0.3) + (p2 * 0.3) + (freq * 0.4);
	printf("avaliacao final é %f \n", avaliacao);

	// Exercício 2:

	float base = 5.0;
	float altura = 10.0;

	float area = base * altura;

	printf("A área do retangulo é %f \n", area);

	// Exercício 3:

	float comprimento = 20.0;
	float largura = 15.0;
	float altura2 = 10.0;
    float volume = comprimento * largura * altura2;
    printf("O volume do pararalelepípedo é %f \n", volume);

    // Exercício 4:

    float quilometros = 300.0;
    float litros = 20;
    float consumo = (litros/quilometros*100);

    printf("Consumo médio é %fl/100KM \n", consumo);

    // Exercício 5:

    int x1 = 1;
    int y1 = 2;

    int x2 = 3;
    int y2 = 3;

    pow(x2 - x1, 2);
    pow(y2 - y1, 2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));

    printf("%f", exp);









	return EXIT_SUCCESS;
}
\
