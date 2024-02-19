#include<stdio.h>
void input(int A[], int n){
    for(int i= 0; i<n; i++){
    	printf("Nhap diem: A[%d] = ",i);
        scanf("%d",  &A[i]);
        while( A[i]<0 || A[i] > 10) {
            printf("Nhap lai diem: A[%d] = ", i);
            scanf("%d",  &A[i]);
        }
    }
}
void xuatmang(int A[], int n){
    for(int i=0; i<n; i++){
        printf("Thu tu: %d, diem so: %d; ", i,A[i] );
    }
}
void Array(int Dau[], int Rot[], int A[], int &k, int &m, int n){
    k=0; m=0;
    for(int i=0; i<n; i++){
        if(A[i] >=4 && A[i] <=10){
            Dau[k]= A[i];
            k++;
        }
    }
    for(int i=0; i<n; i++){
        if(A[i] >=0 && A[i] <4){
            Rot[m] = A[i];
            m++;
        }
    }
    
}
int main(){
    int A[100], Dau[100], Rot[100], k, m, n;
    printf("Nhap so luong phan tu mang A:");
    scanf("%d", &n);
    while(n<= 0 || n> 100){
        printf("Nhap lai n:");
        scanf("%d", &n); }
    input (A,n);
    Array(Dau,Rot,A, k, m,n);
    printf("Mang sau khi tach la:\nDanh sach dau gom cac phan tu:\n");
    xuatmang(Dau, k);
    printf("\nDanh sach rot gom cac phan tu:\n");
    xuatmang(Rot, m);
    
    return 0;
}

