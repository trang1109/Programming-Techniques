#include <stdio.h>
#include<math.h>
void inputArray(int a[], int &n)
{
	do
	{
		printf("\nNhap so phan tu cua mang:");
		scanf("%d",&n);
	}while (n<0||n>100);
	for(int i=0;i<n;i++){
		printf("\nA[%d] = ",i);
		scanf("%d",&a[i]);
	}

}
void outputArray(int a[], int n)
{
	for(int i=0;i<n;i++)printf("\t%d",a[i]);
}
void BinhPhuong (int a[],int c[], int n){
    for(int i=0; i<n; i++){
        c[i]= pow(a[i],2);
        
    }
    for(int i=0; i < n-1;i++)
		for(int j = i+1; j < n; j++)
			if(c[i] > c[j])
			{
				int tam = c[i]; 
				c[i] = c[j]; 
				c[j] = tam;
			}
}
int main()
{	
	int a[100], c[100];
	int n;
	inputArray(a,n);
	printf("\nMang truoc khi binh phuong: ");
	outputArray(a,n);
	
	BinhPhuong(a,c,n);
	printf("\nMang sau khi binh phuong la: ");
	outputArray(c,n);
	
}
