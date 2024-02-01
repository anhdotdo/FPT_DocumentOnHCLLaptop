#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include"lib.h"

void showInstruction(){
    printf("c. Create an interger array\n");
    printf("p. Display the array\n");
    printf("i. Add one element at the array's tail\n");
    printf("d. Delete one element at k location, k=1, 2, ...\n");
    printf("s. Ascending sort the array\n");
    printf("x. Descending sort the array\n");
    printf("t. Search that x is exist in the array?\n");
    printf("e. Exit the program\n");
    printf("--------------------------\n");
    printf("Which character do you choose?: ");
}

void showArray(int32_t arr[], int32_t n){
    int32_t i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void createIntArray(int32_t arr[], int *n){
    printf("Enter length of array: ");
    scanf("%d", n);
    int8_t i;
    printf("Enter the array: \n");
    for(i = 0; i < *n; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void addTail(int32_t arr[], int *n){
    int32_t x;
    printf("Enter value: ");
    scanf("%d", &x);
    arr[*n] = x;
    (*n)++;
}

void deleteAt(int32_t arr[], int *n, int k){
    int32_t arr1[200];
    int32_t i, j = 0;
    for(i = 0; i < *n; i++){
        if(i == k-1){
            continue;
        }
        arr1[j] = arr[i];
        j++;
    }
    (*n)--;

    // copy arr1 to arr
    for(i = 0; i < *n; i++){
        arr[i] = arr1[i];
    }
}

void ascendingSort(int32_t *arr, int n){
    int32_t i, j;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}

void descendingSort(int32_t *arr, int n){
    int32_t i, j;
    for(i = 0; i < n; i++){
        for(j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
}

int32_t findElement(int32_t *arr, int n, int value){
    int32_t i, index = -1;
    for(i = 0; i < n; i++){
        if(value == arr[i]){
            index = i;
        }
    }
    return index;
}