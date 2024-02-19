#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	float x=-b/a;
	if (a==0 && b==0)
		printf("1");
	else if (a==0 && b!=0)
		printf("2");
	else
	    printf("%f", x);
	return 0;
}
	

