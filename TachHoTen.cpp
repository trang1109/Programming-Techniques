#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],ho[50],ten[50];
	int dai,i,j,k=0;
	
	printf("Nhap ho ten: ");
	gets(s);
	printf("Xuat chuoi: ");
	puts(s);
	//Tim vi tri ky tu trang sau cung
	dai=strlen(s);
	for(i=dai-1;;i--)
		if(s[i]==' ') break;
	//Tach ten
	for(j=i+1;j<=dai;j++)
		ten[k++]=s[j];
	printf("Ten la: %s\n",ten);
	//Tach Ho lot
	for(j=0;j<i;j++)
		ho[j]=s[j];
	ho[j]='\0';
	printf("Ho lot la: %s\n",ho);
}