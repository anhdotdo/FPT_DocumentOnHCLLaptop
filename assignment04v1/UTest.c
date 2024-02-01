#include"UTest.h"
#define MAX_LEN 5

static const SREC_Status_Type expectedStatus[MAX_LEN] = {
                                                SREC_LINE_TRUE,
                                                SREC_ERROR_BYTECOUNT,
                                                SREC_ERROR_CHECKSUM,
                                                SREC_ERROR_FORMAT,
                                                SREC_LINE_TRUE
                                                };

uint8_t getMaxLen(){
    return MAX_LEN;
}

SREC_Status_Type getExpStatus(uint8_t idx){
    return expectedStatus[idx];
}
