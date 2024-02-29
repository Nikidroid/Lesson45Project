int product_of_even_elements(int* vector, int size) {
    int product = 1;

    for (int i = 0; i < size; i += 2) {
        product *= *(vector + i);
    }

    return product;
}

int find_min_element(int* vector, int size) {
    int min;
    for (int i = 0; i < size; i++) {
        int element = *(vector + i);
        if (*(vector + i) < element) {
            min = vector[i];
        }
    }
    return min;
}
