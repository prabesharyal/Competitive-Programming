#include <stdio.h>
#include <stdlib.h>

// A structure to store an integer and its original position
typedef struct {
    int value;
    int position;
} Number;

// A function to compare two numbers based on their value
int compare(const void *a, const void *b) {
    const Number *x = (const Number *) a;
    const Number *y = (const Number *) b;
    return x->value - y->value;
}

// A function to perform selection sort on an array of numbers
void selection_sort(Number array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j].value < array[min_index].value) {
                min_index = j;
            }
        }
        if (min_index != i) {
            Number temp = array[min_index];
            array[min_index] = array[i];
            array[i] = temp;
        }
    }
}

// A function to perform stable sort on an array of numbers
void stable_sort(Number array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i].value == array[j].value && array[i].position > array[j].position) {
                Number temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

// A function to print an array of integers
void print_array(int array[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    Number array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i].value);
        array[i].position = i; // Keep track of original position
    }
    selection_sort(array, n); // First sort by last digit
    stable_sort(array, n); // Then sort by original order
    int sorted_array[n];
    for (int i = 0; i < n; i++) {
        sorted_array[array[i].position] = array[i].value;
    }
    print_array(sorted_array, n);
    return 0;
}