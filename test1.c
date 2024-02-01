#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
   //  uint16_t Year : 7;
   //  uint16_t Month : 4;
    uint16_t Day : 5;
    uint16_t Month : 4;
    uint16_t Year : 7;
}FAT_Date_Type;

int main( int argc, char *argv[] )  
{
   uint8_t a = 15;
   uint8_t* ptr = &a;
   printf("%d, %d, %d, %d\n", *ptr, ptr, &a, &ptr);

   return 0;
}