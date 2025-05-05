#include "logic.h"

void selected_sort(int* array, int size) {
	for (int i = 0; i < size - 1; i++) {
		int min_element = i;

		for (int j = i + 1; j < size; j++) {
			if (array[j] < array[min_element]) {
				min_element = j;
			}
		}
		
		swap(array[i], array[min_element]);
	}
}