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
		avg+=grades[i];
	}

    avg = avg / size;
   fprintf(fp, "Media : %f \n", avg);
	fclose(fp);
}

void readGrades(){
	FILE *fp;
	 fp = fopen("grades.txt", "r");
	 char buff[256];
	 char *token = ":";
	 char *split;

	 while (fgets(buff, 256, fp) != NULL) {
		 split = strtok(buff, token);
	  while(split != NULL){
		  puts(split);
		  split = strtok(NULL, token);
	 }

	 fclose(fp);

	 }


}
int main(void) {
	//readFileByChar();
	//readByLine();
	//ReadLine();
	avaliacaoProjeto1();

	return EXIT_SUCCESS;
}
