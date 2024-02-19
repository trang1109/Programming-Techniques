#include <stdio.h>
#include <string.h>
int main()
{
	char s[50];
	int i,dem=0;
	printf("Nhap chuoi: ");
	gets(s);
	/*for(i=0;i<strlen(s);i++)
		if(s[i]==' ') dem++;*/
	for(i=0;s[i]!='\0';i++)
		if(s[i]==' ') 
		{
			dem++;
			s[i]='\n';
		}
	printf("Chuoi co %d tu\n",dem+1);
	printf("Xuat chuoi:\n");
	puts(s);
}