#ifndef _SRECPARSE_H_
#define _SRECPARSE_H_

#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<stdlib.h>
#include"Lib.h"

uint8_t Char2Hex(uint8_t c);                    // prototype
SREC_Status_Type Str2Hex(uint8_t *pStr, uint8_t len, uint32_t *result);

FILE* SREC_GetFilePtr(void);   
SREC_Type SREC_GetVariable();
uint8_t SREC_GetDataBytes(void);                                         // to test manually
SREC_Status_Type SREC_OpenFile(const uint8_t* fileName);
void SREC_CloseFile(void);
Bool_Type SREC_isEOF();

void SREC_InitLine(SREC_Type *srec_line);
SREC_Status_Type SREC_StartSrecFile(void);
SREC_Status_Type SREC_ReadLine(uint8_t *is_valid_format);
SREC_Status_Type SREC_CheckSum(void);

#endif