/*
 * Array4tils.c
 *
 *  Created on: 25/11/2022
 *      Author: 2075022
 */

#include "Arrayutils.h"

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
