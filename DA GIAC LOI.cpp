#include<stdio.h>
#include<math.h>
typedef struct{
    int x,y;
} Point;
void Nhap(Point &P){
    printf("\nNhap hoanh do: ");
    scanf("%d", & P.x);
    printf("\nNhap tung do: ");
    scanf("%d", &P.y);
}
float DoDai(Point P1, Point P2){
    return sqrt(pow(P1.x - P2.x,2) +pow(P1.y- P2.y,2));
}
void Xuat(Point P){
    printf("Toa do: (%d;%d)\n ", P.x,P.y);
    
}
float DienTich(Point P1,Point P2, Point P3){
    Point P4;
    P4.x= P2.x - P1.x;
    P4.y = P2.y - P1.y;
    Point P5;
    P5.x= P3.x-P1.x;
    P5.y= P3.y-P1.y;
    if((P4.x/P5.x)== (P4.y/P5.y)) return 1;
    else {
        return (1/2) *(float)abs(P4.x *P5.y -P5.x*P4.x);
    }
}
int main(){
    Point P1,P2,P,P3;
    Nhap(P1);
    Nhap(P2);
    Xuat(P1);
    Xuat(P2);
    printf("\nDo dai: %f", DoDai(P1,P2));
    Nhap(P3);
    Xuat(P3);
    printf("\nDien tich: %f", DienTich(P1,P2,P3));
}
