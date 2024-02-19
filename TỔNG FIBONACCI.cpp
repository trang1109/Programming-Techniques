#include<stdio.h>
int Nhap()
{
	int n;
	do {
		
		scanf("%d", &n); 
	}while (n<0);
	return n;
	
	
		
}
long tong(int n) 
{
	long sum=0;
	for(int i=0; i<=n; i++){
		sum+= i*(i+1)*(i+2); }
	return sum;
}
int main() 
{
	int n;
	n= Nhap();
	printf("%ld", tong(n));
	return 0;
}
	

