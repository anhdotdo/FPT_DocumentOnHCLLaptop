#include<stdio.h>

int main(){ 
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        int i = 2;
        if(i < n){
            printf("%d", i);
            i++;
        }
        for(; i < n; i++){
            if(i % 2 == 0){
                printf(", %d", i);
            }
        }
        printf("\nEnter again: ");
        scanf("%d", &n);
    }
    return 0;
}