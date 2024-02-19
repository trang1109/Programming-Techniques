#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int A[100],n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    while(n<=0 || n> 100){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    time_t t;
    srand((int) time(&t));
    int i=0;
    A[i] =  rand()% (100+1-0);
        
    
    for(int i=1; i<n; i++){
        A[i]=A[i-1]+ rand()% (100+1-0);
    }
    for(int i=0; i<n; i++){
        printf("A[%d} = %d; ", i, A[i]);
    }
    return 0;
}


