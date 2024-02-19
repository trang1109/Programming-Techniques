#include<stdio.h>  
int max_rec(int A[], int n){
    if(n==1) return A[0];
    else if(n>1){
        int temp= max_rec(A,n-1);
        if (A[n-1] < temp) return temp;
        else return A[n-1];
    }
}
void intput(int A[], int n){
	for(int i=0;i<n;i++){
		printf("A[%d]= ",i);
		scanf("%d", &A[i]);
	}
}
void output(int A[],int n){
	for(int i=0;i<n;i++){
		printf("A[%d]= %d\t",i, A[i]);
	}
}
int main(){
    int A[100],n;
    do{
    	printf("Nhap n: ");
        scanf("%d", &n);
    }while(n>100|| n<0 );
    intput(A,n);
    output(A,n);
    printf("\nGia tri lon nhat la: %d", max_rec(A,n));
    
    return 0;
}
