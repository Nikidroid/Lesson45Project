#include <iostream>

using namespace std;

string vector_to_string(int* vector, int size);

void random_init(int* vector, int size, int bound);

int product_of_even_elements(int* vector, int size);

int find_min_element(int* vector, int size);

int main() {
	int size;
	do {
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, 10);

	cout << vector_to_string(vector, size) << endl;

	cout << "Product of even elements: " << product_of_even_elements(vector, size) << endl;

	cout << "Min: " << find_min_element(vector, size) << endl;

	cout << "DSD"

	delete[] vector;

	return 0;
}