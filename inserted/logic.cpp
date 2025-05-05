#include "logic.h"
void inserted_sort(int* array, int size) {
	for (int i = 1; i < size; i++) {
		int element = array[i];
		int index = i - 1;

		while (index >= 0 && array[index] > element) {
			array[index + 1] = array[index];
			index--;
		}

		array[index + 1] = element;
	}
}