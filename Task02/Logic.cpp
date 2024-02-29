int product_of_even_elements(int* vector, int size) {
    int product = 1;

    for (int i = 0; i < size; i += 2) {
        product *= *(vector + i);
    }

    return product;
}

int find_min_element(int* vector, int size) {
    int min = *(vector);

    for (int i = 1; i < size; i++) {
        int element = *(vector + i);
        if (element < min) {
            min = element;
        }
    }
    return min;
}

int find_max_element(int* vector, int size) {
    int max = *(vector);

    for (int i = 1; i < size; i++) {
        int element = *(vector + i);
        if (element > max) {
            max = element;
        }
    }
    return max;
}