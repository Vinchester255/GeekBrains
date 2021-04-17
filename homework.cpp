#include <iostream>
void print_arr(int* arr, int n);
void sum_array(int *array_first, int n);
void check_array(int *array_check, int n);

int main() {
int array [4] = {1, 0, 1, 0};
int array_first [8] {};
int array_check [5] = {2, 1, 1, 1, 1};
print_arr(array, 4);
std::cout << " \n";
sum_array(array_first, 8);
std::cout << " \n";
check_array(array_check, 5);
    return 0;
}
