#include <stdio.h>
#include <stdlib.h>

typedef struct array {
    int *arr;
    int size;

} appendArr;

int Initial_Elements(appendArr *myArr) {

    int temp[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < myArr->size; i++) {
        myArr->arr[i] = temp[i];
    }

    return 0;
}

void Print_Array(appendArr *myArr) {
    printf("Number of elements: %d\n", myArr->size);

    for (int i = 0; i < myArr->size; i++) {
        printf("%d element: %d\n", i, myArr->arr[i]);
    }
}

void New_Element(appendArr *myArr) {
    int num;

    printf("Enter a new element to the array (number): ");
    scanf("%d", &num);

    myArr->arr[myArr->size] = num;
    (myArr->size)++;

    Print_Array(myArr);
}

int main(void) {

    appendArr *myArr = (appendArr *)malloc(sizeof(appendArr));

    myArr->size = 5;

    myArr->arr = malloc(myArr->size * sizeof(int));

    Initial_Elements(myArr);
    New_Element(myArr);

    free(myArr->arr);
    free(myArr);

    return 0;
}