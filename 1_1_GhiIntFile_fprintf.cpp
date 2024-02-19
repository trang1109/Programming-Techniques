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
	FILE *fp; 
	float n ;
	int k;
	fp = fopen("E:\\REAL.TXT", "wt");//fp = fopen("E:/INTERGER.TXT", "wt");
	
	if(fp == NULL)
	{
		printf("\n Ko tao duoc tep");
		exit(0);
	}
	//Ghi ra man hinh: printf("%d", n);
	
	srand(time(NULL));
	
	for(int i = 0; i < 5; i++)
	{
		n = rand()/(float)RAND_MAX;
		fprintf(fp,"%f\t", n);
		printf("%f\t", n);// Ghi vao tep
	}
	srand(time(NULL));
	for (int i=0;i<5;i++){
		k = rand();
		fprintf(fp,"\n%d",k);
		printf("\n%d", k);
	}
	
	printf("\nDa ghi xong!");
	fclose(fp);
	return 0;
}
