#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapmang(int a[],int &n)
{
		printf("Nhap so pt: ");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		a[i]=1+rand()%(10-1+1);//phat sinh snn tu 1 den 10
}
//--------------------------
void xuatmang(int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\n");
}
//---------------------------
int sum_rec(int a[],int n)
{
	if(n==1)
		return a[0];
	return a[n-1]+sum_rec(a,n-1);
}
//---------------------------
int main()
{
	int a[50],n;
	

	srand(time(0));
	nhapmang(a,n);
	printf("Mang vua nhap la:\n");
	xuatmang(a,n);
	
	printf("Tong mang la: %d\n",sum_rec(a,n));
}