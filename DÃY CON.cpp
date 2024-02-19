#include<stdio.h>
void input(int A[], int n){
    for(int i= 0; i<n; i++){
        printf("A[%d] = ",i);
        scanf("%d",  &A[i]);
        
    }
}
void xuatmang(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}
void daycon (int A[], int n){
    int count;
    for(int i=0; i<n; i++){
    	
        while (A[i]< A[i+1]){
            printf("%d %d ", A[i], A[i+1]);
            i++; 
        }printf("\n");
    }
}
int main(){
    int A[100], n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    while(n<=0 || n>100){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    input(A,n);
    printf("Cac day con la:\n");
    daycon(A, n);
    return 0;
}

