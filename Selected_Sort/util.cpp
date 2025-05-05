#include "util.h"
string print_array(int* array, int size) {
	string result = "";
	for (int i = 0; i < size; i++) {
		result += to_string(array[i]) + " ";
	}

	return result;
}