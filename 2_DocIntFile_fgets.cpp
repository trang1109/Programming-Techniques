#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
	char *p,*q;
	char str[100];
	//Bc2: Mo tep tin de ghi hoac doc: fopen("Ten tep", "mode");
	fp=fopen("E:/PERSON.txt","r");
	if(fp == NULL)
	{
		printf("\n Ko mo duoc tep");
		exit(0);
	}
	
	while(!feof(fp))
	{
		fgets(str,100,fp);
		//Tach code
		q=strtok(str,":");
		
		//Tach Hoten
		p=strtok(NULL,",");
		printf("\n%s",p);
		//In code
		printf("\t\t[Code: %s]",q);
		//Tach Adress
		p=strtok(NULL,":");
		printf("\n\tAdress : [%s]",p);
		//Tach Birthday
		p=strtok(NULL," ");
		printf("\n\tBirthday : [%s]",p);
	}
	printf("\nDa doc xong!\n");
	fclose(fp);
	return 0;
}
