#include <stdio.h>
void nhapmang(int a[],int &n)
{
	printf("Nhap so pt: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
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
	
	
	nhapmang(a,n);
	printf("Mang vua nhap la:\n");
	xuatmang(a,n);
	
	printf("Tong mang la: %d\n",sum_rec(a,n));
}