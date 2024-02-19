#include<stdio.h>
int main()
{
    int a, b, c;
   
    scanf("%d%d%d", &a, &b, &c);
    if (a +b>c && a +c>b && b+c>a) {
        if ( a==b && a==c)
            printf("5 ");
        else {
        	if (a*a +b*b == c*c && a==b || c*c +b*b == a*a && b==c || a*a + c*c == a*a && a==c) 
            	printf("4 "); 
        	if (a== b || b==c|| c==a) 
            	printf("3 ");
			if (a*a +b*b == c*c || c*c +b*b == a*a || a*a + c*c == a*a)
				printf("2 ");
			if (a*a +b*b != c*c && c*c +b*b != a*a && a*a + c*c != a*a && a!=b && a!=c && b!=c)
			printf ("1 "); }
    }
	else 
        printf("0"); 
        
    return 0;
}
