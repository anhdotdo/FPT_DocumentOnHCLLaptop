#include<stdint.h>
#include<stdio.h>
#include"SRECParse.h"
#include"UTest.h"
#include<assert.h>

int sum(int a, int b){
    return a+b;
}

uint8_t main(){
    uint8_t is_valid_format = 0;
    SREC_Status_Type status;
    uint8_t idx;

    status = SREC_OpenFile("1.srec");
    assert(SREC_FILE_EXIST == status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);

    status = SREC_ReadLine(&is_valid_format);
    printf("%d\n", status);


    // for(idx = 0; idx < getMaxLen(); idx++){
    //     status = SREC_ReadLine(&is_valid_format);
    //     assert(getExpStatus(idx) == status);
    // }

    SREC_CloseFile();
    return 0;
}