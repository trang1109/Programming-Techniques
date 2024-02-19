#include<stdio.h>
int nCk(int n, int k);
int factorial(int n);
int nCk(int n, int k){
	
    return factorial(n)/ (factorial(k)*factorial(n-k));
    
}
int factorial(int n){
    if (n==0|| n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    if (k>n || k*n<0){
    	printf("Nhap lai");}
    else{ 
    	printf("%d", nCk(n,k));}
    return 0;
}

