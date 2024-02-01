#include<stdio.h>
#include<stdint.h>
// #include<string.h>

size_t my_strlen(uint8_t *string){
    size_t len = 0;
    while (*string != '\0')
    {
        len++;
        string++;
    }
    return len;
}

typedef struct
{
    uint8_t name[50];
    uint32_t power;
    uint32_t uint_price;
}DeviceType;

uint8_t main(){
    DeviceType device;
    scanf("%s", device.name);
    scanf("%d", &(device.power));
    scanf("%d", &(device.uint_price));
    printf("%ld\n", my_strlen(device.name));
    printf("%s\n", device.name);
    return 0;
}