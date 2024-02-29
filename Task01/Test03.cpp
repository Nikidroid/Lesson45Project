#include <iostream>

using namespace std;

int main() {
	const int size = 10;

	int array[size];

	cout << array << endl;
	cout << &array[0] << endl;

	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % 100;
	}

	for (int i = 0; i < size; i++) {
		cout << *(array + i) << " ";
	}

	cout << endl;

	for (int i = size - 1; i >= 0; i--) {
		cout << *(array + i) << " ";
	}

	return 0;
}