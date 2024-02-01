#include<stdio.h>
#include<stdint.h>

int32_t sum(int32_t a, int32_t b){
    return a+b;
}

int32_t sub(int32_t a, int32_t b){
    return a-b;
}

int32_t mul(int32_t a, int32_t b){
    return a*b;
}

uint8_t main(){
    int32_t (*funcPtr)(int32_t, int32_t);
    int32_t a = 5, b = 4;
    uint32_t user_input, result;
    scanf("%d", &user_input);
    switch (user_input)
    {
    case 1:
        funcPtr = &sum;
        result = (*funcPtr)(a, b);
        break;
    case 2:
        funcPtr = &sub;
        result = (*funcPtr)(a, b);
        break;
    case 3:
        funcPtr = &mul;
        result = (*funcPtr)(a, b);
        break;
    
    default:
        break;
    }

    printf("%d\n", result);
    return 0;
}