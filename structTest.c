#include<stdio.h>

typedef struct rectangle
{
    float peri;
    float area;
    float length;
    float width;
} rec_t;

void calPeriArea(rec_t *rec){
    rec->peri = (rec->length + rec->width)*2;
    rec->area = rec->length * rec->width;
}

void showRec(struct rectangle *rec){
    printf("perimeter of rectangle: %f\n", rec->peri);
    printf("Area of rectangle: %f\n", rec->area);
}

int main(){
    float length, width;
    scanf("%f%f", &length, &width);
    rec_t rec1 = {.length = length, .width = width};  // khoi tao struct giong mang
    calPeriArea(&rec1);
    showRec(&rec1);
    return 0;
}