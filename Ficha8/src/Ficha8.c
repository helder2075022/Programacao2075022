/*
 ============================================================================
 Name        : Ficha8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 void readFileByChar() {
 FILE *fp;
 fp = fopen("text.txt", "r");

 char c = fgetc(fp);

 while (c != EOF) {
 printf("%c", c);
 c = fgetc(fp);
 }
 fclose(fp);
 }

 void readByLine() {
 FILE *fp;
 fp = fopen("text.txt", "r");

 char buff[256];

 while (fgets(buff, 256, fp) != NULL) {
 puts(buff);
 }

 fclose(fp);
 }

 void ReadLine() {
 FILE *fp;
 fp = fopen("text.txt", "r");

 char buff[256];
 int lines = 0;

 while (fgets(buff, 256, fp) != NULL) {
 lines++;
 }
 printf("%i",lines);
 }
 */
void avaliacaoProjeto1() {
	FILE *fp;
	fp = fopen("grades.txt", "w");

	char names[4][255] = { "Helder", "Artur", "Rodolfo", "Diogo" };

	int grades[4] = { 13, 13, 18, 15 };
	float avg = 0;

	int size = sizeof(grades) / sizeof(int);
	for (int i = 0; i < size; i++) {
		fprintf(fp, "%s : %i \n", names[i], grades[i]);
		avg += grades[i];
	}

	avg = avg / size;
	fprintf(fp, "Media : %f \n", avg);
	fclose(fp);
}

void readGrades() {
	FILE *fp;
	fp = fopen("grades.txt", "r");
	char buff[256];
	char *token = ":";
	char *split;

	while (fgets(buff, 256, fp) != NULL) {
		split = strtok(buff, token);
		while (split != NULL) {
			puts(split);
			split = strtok(NULL, token);
		}

		fclose(fp);

	}

}

void randomWords() {

	char words[10][20] ={"Lorem", "Ipsum", "é", "um", "modelo", "da", "indústria", "tipográfica", "e", "impressão" };

	FILE *fp;
	fp = fopen("grades.txt", "w");


	int t = 0;
	srand((unsigned) time(&t));

	for (int i = 0; i < 10; i++) {
		int random = rand() % 10;
		fprintf(fp, "%s \n", words[random]);
	}
	fclose(fp);
}

int main(void) {
	//readFileByChar();
	//readByLine();
	//ReadLine();
	//avaliacaoProjeto1();
	randomWords();

	return EXIT_SUCCESS;
}
