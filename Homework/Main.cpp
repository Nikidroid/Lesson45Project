#include <iostream>

using namespace std;

string vector_to_string(int* vector, int size);

void random_init(int* vector, int size, int bound);

int number_of_positive_numbers(int* vector, int size);
int sum_of_elements(int* vector, int size);

int main() {
	int size;
	do {
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, 10);

	cout << vector_to_string(vector, size) << endl;

	cout << "Number of positive numbers: " << number_of_positive_numbers(vector, size);

	cout << "Sum of positive elements: " << sum_of_elements(vector, size) << endl;

	delete[] vector;

	return 0;
}