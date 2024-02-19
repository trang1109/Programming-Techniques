#include "conio.h"
#include "stdio.h"
#define max 100

//nhap mang
void NhapMang(int A[], unsigned int n) {

    for(int i = 0; i<n; i++)
    {
        printf("phan tu %d = ",i);
        scanf("%d",&A[i]);
    }
}
//xuat mang
void XuatMang(int A[], unsigned int n) {
    for(int i = 0; i<n; i++)
        printf("%d\t",A[i]);

}
//dem so lan xuat hien cua x trong A
unsigned int Count(int A[], unsigned int n, int x){
    unsigned int temp = 0;
    for(int i = 0; i<n; i++)
        if(A[i]==x)
            temp++;
    return temp;
}
//tim phan tu xuat hien nhat lan nhat trong A
unsigned int Count(int A[], unsigned int n) {
    unsigned int temp1, temp = Count(A,n,A[0]), index = 0;
    for(int i = 1; i<n; i++)
    {
        temp1 = Count(A,n,A[i]);
        if(temp<temp1)
        {
            temp = temp1;
            index = i;
        }
    }
    return A[index];
}
//chuong trinh chinh
int main(){

    int B[max];
    unsigned int n;
    
    scanf("%d",&n);
    NhapMang(B,n);
    
    
    printf("%d",Count(B,n));
    getch();
}
