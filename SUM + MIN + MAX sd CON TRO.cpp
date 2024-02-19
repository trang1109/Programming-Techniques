#include <stdio.h>
#define size 100
void input(int *a, int *n);
void output(int *a, int n);
int sum(int *a, int n);
int count(int *a, int n);
int min(int *a, int n);
int max(int *a, int n);
int main()
{
	int a[size], n;
	input(a, &n);
	output(a, n);
	printf("\nTong = %d",sum(a,n));
	printf("\nDem = %d",count(a,n));
	printf("\nNho nhat = %d",min(a,n));
	printf("\nLon nhat = %d",max(a,n));
	return 0;
}
void input(int *a, int *n)
{
	do
	{
	printf("\nSo phan tu:");scanf("%d", n);
	}while (*n<1||*n>size);
	for(int i=0; i<*n; i++)
	{
	printf("\na[%d]= ",i); scanf("%d",a+i);
	}
}
void output(int *a, int n)
{
	printf("\nList of array: ");
	for(int i=0; i<n; i++)printf("%d\t", *(a+i));
	printf("\n\n");
}
int sum(int *a, int n)
{
	int temp =0;
	for(int i=0; i<n; i++)if(*(a+i)%5==0)temp +=*(a+i);
	return(temp);
	}
	int count(int *a, int n)
	{
	int temp =0;
	for(int i=0; i<n; i++)if(*(a+i)%3==0)temp +=1;
	return(temp);
}
int min(int *a, int n)
{
	int min_temp =*a;
	for(int i=1; i<n; i++)if(*(a+i)<min_temp)min_temp =*(a+i);
	return(min_temp);
}
int max(int *a, int n)
{
	int max_temp =*a;
	for(int i=1; i<n; i++)if(*(a+i)>max_temp)max_temp =*(a+i);
	return(max_temp);
}
