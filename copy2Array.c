#include<stdio.h>
#include<stdint.h>

void show(uint32_t arr[], int32_t n){
    int32_t i;
    for(i = 0; i < n; i++){
        printf("0x%x ", arr[i]);
    }
    printf("\n");
}

void show2(uint16_t arr[], int32_t n){
    int32_t i;
    for(i = 0; i < n; i++){
        printf("0x%x ", arr[i]);
    }
    printf("\n");
}

int main(){
    uint32_t A[2] = {0x12345678, 0xABCDEF12};
    uint16_t B[4];
    uint16_t *ptr = (uint16_t*)A;
    int32_t i;
    for(i = 0; i < 4; i++){
        B[i] = *(ptr);
        ptr++;
    }
    show(A, 2);
    show2(B, 4);
    return 0;
}