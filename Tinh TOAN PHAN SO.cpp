#include<stdio.h>
typedef struct{
    int ts[100],ms[100];
}PHANSO;
void Nhap(PHANSO &a[], int n){
    for(int i=1;i<=n; i++){
        printf("\nNhap phan so thu %d: ",i);
        scanf("%d/%d", &a.ts[i], &a.ms[i]);
    }
}
void Xuat(PHANSO a, int n){
    for(int i=1; i<=n; i++){
        printf(" %d/%d ", a.ts[i], a.ms[i]);
    }
}
int USCLN(int a,int b)
{
	while(a!=b)
		if(a>b) a=a-b;
		else b=b-a;
	return a;
}
//----------------------
void rutGonPS(PHANSO &a)
{
	PHANSO tam;
	tam.ts=abs(a.ts);
	tam.ms=abs(a.ms);
	int usc=USCLN(tam.ts,tam.ms);
	a.ts=a.ts/usc;
	a.ms=a.ms/usc;
}
int main(){
    PHANSO a;
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    Nhap(a,n);
    Xuat(a,n);
}

