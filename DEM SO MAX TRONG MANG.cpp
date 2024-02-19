#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int a[1000];
   
    
    int count=1;
    int max=a[0];
    for(int i=0; i<n; i++)
    	scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
    	
        if (a[i]>max)
        	max=a[i];
            count=1;
    for(int i=0; i<n; i++)
        if(a[i]==max)
            count++;
    
    printf("%d", max);
        
    
    
    
    
    
        
    
    return 0;
}
