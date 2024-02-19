#include <stdio.h>
#include <string.h>
int ktDoiXung(char s[])
{
	int dai=strlen(s),i;
	for(i=0;i<=dai/2;i++)
		if(s[i]!=s[dai-i-1
		]) return 0;
	return 1;
}
//----------------
int main()
{
	char s[50];
	int kt;
	printf("Nhap chuoi: ");
	gets(s);
	kt=ktDoiXung(s);
	if(kt)
		printf("Chuoi doi xung");
	else
		printf("Chuoi khong doi xung");
	printf("\n");
}