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
	fp=fopen("D:\\BTDemo\\INTEGERBinary.txt","wb");//fp=fopen("D:/BTDemo/INTEGER.txt","w");
	if(fp == NULL)
	{
		printf("\n Ko tao duoc tep");
		exit(0);
	}
	//Ghi ra man hinh: printf("%d", n);
	srand(time(NULL));
	for(int i=1;i<=5;i++)
	{
		n=rand();
		printf("%d\t",n);
		fwrite(&n,sizeof(int),1,fp);
	}
	printf("\Da ghi xong!\n");
	fclose(fp);
	return 0;
}