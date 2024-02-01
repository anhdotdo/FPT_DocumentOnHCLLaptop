#include<stdio.h>
#include<stdint.h>

uint64_t arr[] = {1, 2, 6, 4, 7, 8};     // la mang so nguyen (so bit: 8/16/32/64)

void ascSort(){
    size_t n = sizeof(arr)/sizeof(arr[0]);
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

void show(){
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int32_t i;
    int32_t size = sizeof(arr[0]);
    if(size < 64){
        for(i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }else{
        for(i = 0; i < n; i++){
            printf("%ld ", arr[i]);
        }
        printf("\n");
    }
}

int32_t indexLocate(int32_t x){
    size_t n = sizeof(arr)/sizeof(arr[0]);
    int32_t i;
    for(i = 0; i < n; i++){
        if(x == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    show();     // array before ascending sort
    ascSort();
    show();     // array after ascending sort

    int32_t index = indexLocate(5);
    if(index == -1){
        printf("5 is not exist\n");
    }else{
        printf("Index of number 5: %d\n", index);
    }
    return 0;
} 