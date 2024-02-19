#include<stdio.h>
#include<math.h>
typedef struct {
    int x,y;
}DIEM;
void Nhaptoado(DIEM &diem){
    printf("Nhap toa do: ");
    scanf("%d", &diem.x);
    scanf("%d", &diem.y);
}
float chuvi(DIEM diem1, DIEM diem2, DIEM diem3) {
    float a= sqrt(pow(diem2.x-diem1.x,2)+ pow(diem2.y-diem1.y,2));
    float b= sqrt(pow(diem3.x-diem2.x,2)+ pow(diem3.y-diem2.y,2));
    float c= sqrt(pow(diem1.x-diem3.x,2)+ pow(diem1.y-diem3.y,2));
    return a+b+c;
}
float dientich(DIEM diem1, DIEM diem2, DIEM diem3){
    float a= sqrt(pow(diem2.x-diem1.x,2)+ pow(diem2.y-diem1.y,2));
    float b= sqrt(pow(diem3.x-diem2.x,2)+ pow(diem3.y-diem2.y,2));
    float c= sqrt(pow(diem1.x-diem3.x,2)+ pow(diem1.y-diem3.y,2));
    float p= (a+b+c)/2;
    float DT= sqrt(p*(p-a)*(p-b)*(p-c));
    return DT;
}

void xuat(DIEM diem){
    printf("\n(%d;%d)", diem.x,diem.y);
}
int main(){
    DIEM diem1, diem2,diem3;
    Nhaptoado(diem1);
    Nhaptoado(diem2);
    Nhaptoado(diem3);
    xuat(diem1);
    
    xuat(diem2);
    xuat(diem3);
    printf("Chu vi: %f", chuvi(diem1,diem2,diem3));
    
    printf("\nDien tich: %f", dientich(diem1, diem2, diem3));
}
