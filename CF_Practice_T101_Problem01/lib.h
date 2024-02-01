#ifndef LIB_H
#define LIB_H
typedef struct point{                               // kieu du lieu nguoi dung point
    int x;
    int y;
}point;

float distance2Points(point a, point b);            // tim khoang cach 2 points
float squareOfDistance2Points(point a, point b);    // binh phuong khoang cach 2 points
char isRight(point A, point B, point C);            // tra ve 1, 2, 3, 0 lan luot vuong tai A, B, C, khong vuong
char typeOfTriangle(int arr[]);                     // tra ve 1: khong la tam giac, 2: thuong, 3: vuong, 
                                                    // 4: can, 5: vuong can, 6: deu
void show(char x);                                  // tra ve chuoi loai tam giac

#endif