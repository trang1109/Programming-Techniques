#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ngay= n/86400;
    n= n%86400;
    int gio=n/3600;
    n=n%3600;
    int phut=n/60;
    n =n%60;
    int giay=n%60;
    printf("%d days ", ngay);
    if( gio<10)
        printf("0%d:", gio);
    if(gio>=10 )
        
        printf("%d:", gio);
    
   	printf("%02d:", phut );
    
    printf("%02d", giay);
	return 0;
    
    
}
