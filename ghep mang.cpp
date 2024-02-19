#include<stdio.h>
void input(int A[], int n){
    for(int i= 0; i<n; i++){
        scanf("%d",  &A[i]);
        while( A[i]<0 || A[i] > 10) {
            printf("Nhap lai diem: ");
            scanf("%d",  &A[i]);
        }
    }
}

void Array(int Dau[], int Rot[], int A[], int &k, int &m, int n){
    k=0; m=0;
    for(int i=0; i<n; i++){
        if(A[i] >=4 && A[i] <=10){
            Dau[k]= A[i];
            k++;
    }
    for(int i=0; i<n; i++){
        if(A[i] >=0 && A[i] <4){
            Rot[m] = A[i];
            m++;
    }
}
void xuatmang(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}
int main(){
    int A[100], Dau[100], Rot[100], k, m, n;
    input (A,n);
    xuatmang(A,n);
    Array(Dau,Rot,A, k);
    printf("Mang sau khi tach la:\nDau: %d\nRot: %d\n", xuatmang(Dau, k), xuatmang(Rot, k));
    Array(Dau,Rot,A, k);
    
    return 0;
}

