#include <iostream>

void print_arr(int* array, int n) {
    for(int i = 0; i < n; i++) {
        if (array[i] == 1) {
            array[i] = 0; 
        } else {
            array[i] = 1;
        }
        std::cout << array[i] << " ";
    }
}
void sum_array(int *array_first, int n) {
    for(int i = 0; i < n; i++) {
        array_first[i] += 3 * i;
        array_first[i]++;
        std::cout << array_first[i] << " "; 
    }
}
void check_array(int *array_check, int n) {
    int left_sum = 0;
    int right_sum = 0;
    for(int i = 0; i < (n - 1); i++) {
        for(int j = 0; j <= i; j++) {
            left_sum += array_check[j];
        }
        for(int k = (i + 1); k < n; k++) {
            right_sum += array_check[k];
        }
        if (left_sum == right_sum) {
            std::cout << "true\n";
        } else {
            std::cout << "false\n";
        }
    }  
}