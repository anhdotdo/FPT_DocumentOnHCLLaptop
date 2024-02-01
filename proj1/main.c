#include<stdio.h>
#include "mathLib.h"

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", sum(a, b));
    return 0;
}