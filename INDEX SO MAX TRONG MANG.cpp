#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
     
    int a[10001]={0};
    int b;
    
    for(int i=0; i<n; i++)
    	scanf("%d", &b);
    for(int i=0; i<n; i++)
    	a[b]+=1;
    
    
        
    int max=0, index = 0;
    for (int i=0; i<10001; i++) {
    	
    
        if(b>max) {
        	
        
            max=a[b];
    
            index=i; }
    }
    printf("%d %d ", max, index);
    
    
     
        
    
    return 0;
}
