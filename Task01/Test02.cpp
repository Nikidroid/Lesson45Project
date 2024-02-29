//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int size;
//	do {
//		cout << "Enter size of array: ";
//		cin >> size;
//	} while (size <= 0);
//
//	int* const array = new int[size];
//
//	for (int i = 0; i < size; i++) {
//		*(array + i) = rand() % 100;
//	}
//
//	for (int i = 0; i < size; i++) {
//		cout << *(array + i) << " ";
//	}
//
//	cout << endl;
//
//	for (int i = size - 1; i >= 0; i--) {
//		cout << *(array + i) << " ";
//	}
//
//	delete[] array;
//
//	return 0;
//}