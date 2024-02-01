#include"IO.h"

void time_inputTime(Time *t){
    scanf("%hhu %hhu %hhu", &(t->hour), &(t->minute), &(t->second));
}

uint8_t *time_showFormat(uint8_t t){
    uint8_t value[3];
    if(t < 10){
        value[0] = '0';
        value[1] = t + 0x30;
        value[2] = '\0';
    }else{
        value[0] = 0x30 + (t % 10);
        value[1] = 0x30 + (t / 10);
        value[2] = '\0';
    }

    uint8_t *value1 = value;
    return value1;
}

void time_showTime(Time t_temp){
    printf("%s", time_showFormat(t_temp.hour));
    printf(":");
    printf("%s", time_showFormat(t_temp.minute));
    printf(":");
    printf("%s", time_showFormat(t_temp.second));
    printf("\n");
}