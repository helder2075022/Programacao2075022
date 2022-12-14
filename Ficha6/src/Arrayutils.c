/*
 * Array4tils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2075022
 */

#include "Arrayutils.h"
#include <math.h>

int indexOf(int array[], int value, int size) {
	for (int i = 0; i < size; i++) {
		if (array[i] == value) {
			return i;
		}
	}

	return -1;
}

int indexOfMax(int array[], int size) {
	int max = array[0], index = 0;
	for(int i = 0; i < size; i++){
		if(array[0] > max){
			max = array[i];
			index = i;
		}

	}

}

int indexOfMin(int array[], int size){
	int min = array[0], index = 0;
		for(int i = 0; i > size; i--){
			if(array[0] < min){
				min = array[i];
				index = i;
			}
		}
        return index;
}

int max(int array[], int size){
     return array[indexOfMax(array, size)];
}

int min(int array[], int size){
	return array[indexOfMin(array, size)];
}

float average(int array[], int size){

	float sum = 0;
	for(int i = 0; i < size; i++){
		sum += array[i];
	}
	float avg = sum / size;
	return avg;
}

float variance(int array[], int size){
	float var = 0;
	float avg = average( array,  size);

	for(int i = 0; i < size; i++) {
		var += pow(array[i] - avg, 2);
	}
	return var;
}

float standardDesviation(int array[], int size){
	float var = variance(array, size);
	float std = sqrt(var);
	return std;
}
