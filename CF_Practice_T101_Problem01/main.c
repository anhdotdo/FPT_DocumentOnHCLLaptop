#include<stdio.h>
#include<string.h>
#include<math.h>
#include"lib.h"

int main(){
    int x;
    int arr[6];
    printf("Enter 3 points: \n");
    for(int i = 0; i < 6; i++){
        scanf("%d", &x);
        arr[i] = x;
    }
    show(typeOfTriangle(arr));
    return 0;
}