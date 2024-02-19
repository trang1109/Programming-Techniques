#include<stdio.h>
int main()
{
	int n,d,hh,mm,ss;
	scanf("%d", &n);
	d=n/86400;
	n=n%86400;
	hh=n/3600;
	n=n%3600;
	mm=n/60;
	n=n%60;
	ss=n%60;
	printf("%d days %02d:%02d:%02d", d,hh,mm,ss);
 	return 0;
} 
