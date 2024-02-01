#include<stdio.h>
#include<math.h>
#include"lib.h"

// ham tinh khoang cach 2 point
float distance2Points(point a, point b){
    return sqrt(pow((a.x * 1.0 - b.x), 2) + pow((a.y * 1.0 - b.y), 2));
}

// ham tinh binh phuong khoang cach 2 point
float squareOfDistance2Points(point a, point b){
    return pow((a.x * 1.0 - b.x), 2) + pow((a.y * 1.0 - b.y), 2);
}

char isRight(point A, point B, point C){
    char ir = 0;        // 1, 2, 3, 0: lan luot vuong tai A, B, C, khong vuong
    float a2, b2, c2;
    a2 = squareOfDistance2Points(B, C);
    b2 = squareOfDistance2Points(A, C);
    c2 = squareOfDistance2Points(A, B);

    if(a2 == (b2 + c2)){          // kiem tra vuong tai A
        ir = 1;
    }else if(b2 == (c2 + a2)){    // kiem tra vuong tai B
        ir = 2; 
    }else if(c2 = a2 + b2){    // kiem tra vuong tai C
        ir = 3;
    }

    // printf("canh: %f, %f, %f\n", a2, b2, c2);
    // printf("ri: %d\n", ir);
    return ir;
}

char typeOfTriangle(int arr[]){
    point A, B, C;
    float a, b, c;
    A.x = arr[0];
    A.y = arr[1];
    B.x = arr[2];
    B.y = arr[3];
    C.x = arr[4];
    C.y = arr[5];
    a = distance2Points(B, C);
    b = distance2Points(A, C);
    c = distance2Points(A, B);
    char ri = isRight(A, B, C);

    // phan loai
    if((a + b <= c) || (b + c <= a) || (c + a < b)){
        return 1;
    }else{
        if(a == b){             // kiem tra can tai C
            if(a == c){         // kiem tra deu
                return 6;
            }else if(ri == 3){  // kiem tra vuong can tai C
                return 5;
            }else{
                return 4;       // can tai C
            }
        }else if(b == c){       // kiem tra can tai A 
            if(b == a){         // kiem tra deu
                return 6;       
            }else if(ri == 1){  // kiem tra vuong can tai A
                return 5;
            }else{
                return 4;
            }
        }else if(c == a){       // kiem tra can tai B
            if(c == b){         // kiem tra deu
                return 6;
            }else if(ri == 2){  // kiem tra vuong can tai B
                return 5;
            }else{
                return 4;
            }
        }else if(ri != 0){        // kiem tra vuong
            return 3;
        }else{
            return 2;              // tam giac thuong: khong can, khong vuong
        }
    }
}


void show(char x){
    switch (x)
    {
    case 1:
        printf("Not a Triangle\n");
        break;
    case 2:
        printf("Normal\n");
        break;
    case 3:
        printf("Right\n");
        break;
    case 4:
        printf("Isosceles\n");
        break;
    case 5:
        printf("Right-Isosceles\n");
        break;
    case 6:
        printf("Equilateral\n");
        break;
    }
}