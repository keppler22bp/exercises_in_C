#include <stdio.h>
#include <stdlib.h>

// make an array
// get the size of the array
// get input of the new thing to add to the array (append)
// make a new array with that input at the end

// printf("do you want to add a new value to the element? y/n?\n");
// char answer = scanf("%s");
#include <stdio.h>

void print_array(int arr[], int size) {
    printf("Number of elements: %d\n", size);

    for (int i = 0; i < size; i++) {
        printf("%d element: %d\n", i, arr[i]);
    }
}

void new_element(int arr[], int *size) {
    int num;

    printf("Enter a new element to the array (number): ");
    scanf("%d", &num);

    arr[*size] = num;
    (*size)++;

    print_array(arr, *size);
}

int main(void) {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    new_element(arr, &size);

    return 0;
}
