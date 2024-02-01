#include<stdio.h>

void swap(&a, &b){
    int tem = a;
    a = b;
    b = tem;
}

int main(){
    int a = 5, b = 4;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}