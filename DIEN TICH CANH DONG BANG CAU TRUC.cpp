#include <stdio.h>
#include <math.h>
typedef struct{
    float x,y;
} DIEM;
void Nhapdiem(DIEM a[],DIEM b[], int n){
    for(int i=0; i<n; i++){
		printf("Nhap toa do thu %d", i);
		printf("\nNhap x: ");
        scanf("%f", &a[i].x);
		printf("Nhap y: ");
        scanf("%f", &a[i].y);
        printf("Nhap x: ");
        scanf("%f", &b[i].x);
		printf("Nhap y: ");
        scanf("%f", &b[i].y);
	}
}
float Dientich(DIEM a[], DIEM b[], int n){
    float s=0;
    for(int i=0; i<n; i++){
        if((a[i].x* b[i].y)!=0)
            s += abs(a[i].x *b[i].y);
        else s += abs(a[i].y *b[i].x);
    }
    return s;
}
int main(){
    DIEM a[10], b[10];
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Nhapdiem (a,b,n);
    printf("\nDT %d hcn: %f",n, Dientich(a,b,n));
}

