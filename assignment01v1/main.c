#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include"lib.h"



int main(){
    uint8_t c;
    int32_t n = 0, k, temp;
    int32_t arr[200];       // mang co the them phan tu, =>len > 100
    printf("--------------------------PROGRAM TO MANAGE RANGE OF NUMBER USING ARRAY\n");
    showInstruction();
    scanf("%c", &c);
    while (c != 'e')
    {
        switch (c)
        {
        case 'c':       // tao mang so nguyen
            createIntArray(arr, &n);
            break;
        case 'p':       // in mang
            if(n <= 0){
                printf("Empty array\n");
            }else{
                printf("Show your array: \n");
                showArray(arr, n);
            }
            break;
        case 'i':
            addTail(arr, &n);
            break;
        case 'd':
            printf("Enter a location (k=1, 2, ...), k = ");
            scanf("%d", &k);
            if((k >= 1) && (k <= n)){
                deleteAt(arr, &n, k);
            }else{
                printf("Nonexistent element\n");
            }
            break;
        case 's':
            ascendingSort(arr, n);
            break;
        case 'x':
            descendingSort(arr, n);
            break;
        case 't':
            printf("Enter a value: ");
            scanf("%d", &k);
            temp = findElement(arr, n, k);
            if(temp > -1){
                printf("%d is exist in the array at index: %d\n", k, temp);
            }else{
                printf("%d isn't exist in the array\n", k);
            }
            break;
        }
        printf("--------------------------\n");
        showInstruction();
        scanf("%c", &c);
        scanf("%c", &c);
    }
    return 0;
}













