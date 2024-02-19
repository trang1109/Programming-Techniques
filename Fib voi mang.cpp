#include<stdio.h>
unsigned long long fib(unsigned long n){
	unsigned long long A[n+2];
	A[0]=0;
	A[1]=1;
	for(unsigned long i=2; i<=n;i++){
		A[i]=A[i-1]+A[i-2];
	}
	return A[n];
}
int main(){
	unsigned long n;
	printf("Nhap index: ");
	scanf("%lu", &n);
	printf("%lu", fib(n));

	return 0;
}
