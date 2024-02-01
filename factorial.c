#include<stdio.h>

int fac(int n){
    int i, result = 1;
    if(n < 0){
        return -1;
    }else if (n == 0 || n == 1){
        return 1;
    }else{
        for(i = 1; i <= n; i++){
            result *= i;
        }
        return result;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fac(n));
    return 0;
}