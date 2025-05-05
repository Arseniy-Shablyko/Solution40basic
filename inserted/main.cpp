#include "logic.h"
#include "util.h"

int main() {
	int array1[5]{ 1, 2, 3, 4, 5 };
	int array2[5]{ 2, 3, 1, 5, 4 };
	int array3[5]{ 5, 4, 3, 2, 1 };

	cout << "Array 1 Before - " << print_array(array1, 5) << endl;
	inserted_sort(array1, 5);
	cout << "Array 1 After - " << print_array(array1, 5) << endl;

	cout << "Array 2 Before - " << print_array(array2, 5) << endl;
	inserted_sort(array2, 5);
	cout << "Array 2 After - " << print_array(array2, 5) << endl;

	cout << "Array 3 Before - " << print_array(array3, 5) << endl;
	inserted_sort(array3, 5);
	cout << "Array 3 After - " << print_array(array3, 5) << endl;

	return 0;
}