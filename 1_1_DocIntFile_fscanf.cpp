#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Bc1: Khai báo bien tep tin: FILE *fp
 	Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	Bc3: Ghi hoac doc tep tin (xu lý du lieu) 
	Bc4: Ðóng tep tin: fclose(fp);
*/
int main(int argc, char *argv[])
{
	//Bc1: Khai báo bien tep tin: FILE *fp
	FILE *fp; 
	int n;
	//Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	fp=fopen("D:\\BTDemo\\INTEGER.txt","r");//fp=fopen("D:/BTDemo/INTEGER.txt","w");
	if(fp == NULL)
	{
		printf("\n Ko mo duoc tep");
		exit(0);
	}
	//Doc ra man hinh: scanf("%d", &n);
	for(int i=1;i<=5;i++)
	{
		fscanf(fp,"%d",&n);
		printf("%d\t",n);
	}
	printf("\nDa doc xong!\n");
	fclose(fp);
	return 0;
}