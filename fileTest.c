#include<stdio.h>
#include<stdint.h>

uint8_t main(){
    FILE* ptr;
    ptr = fopen("hello.txt", "r");
    // fputc('H', ptr);
    // fputc('e', ptr);

    uint8_t c = fgetc(ptr);
    while (!feof(ptr))
    {   
        printf("%c", c);
        c = fgetc(ptr);
    }

    // uint8_t c;
    // while (1)
    // {
    //     c = fgetc(ptr);
    //     if(feof(ptr)){
    //         break;
    //     }
    //     printf("%c", c);
    // }
    
    fclose(ptr);

    return 0;
}

// #include <stdio.h>

// int main ()
// {
//    FILE *fp;
//    int c;
  
//    fp = fopen("hello1.txt","r");
//    if(fp == NULL) 
//    {
//       perror("Da xay ra loi trong khi mo hello1.txt");
//       return(-1);
//    }
   
//    while(1)
//    {
//       c = fgetc(fp);
//       if( feof(fp) )
//       { 
//          break ;
//       }
//       printf("%c", c);
//    }
//    fclose(fp);
   
//    return(0);
// }