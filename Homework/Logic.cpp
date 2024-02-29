int number_of_positive_numbers(int* vector, int size) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (vector[i] > 0) {
			counter++;
		}
	}
	return counter;
}

int sum_of_elements(int* vector, int size) {
    int sum = 0;
    bool zero = false;

    for (int i = 0; i < size; i++) {
        if (zero) {
            sum += *(vector + i);
        }

        if (*(vector + i) == 0) {
            zero = true;
            sum = 0;
        }
    }
}