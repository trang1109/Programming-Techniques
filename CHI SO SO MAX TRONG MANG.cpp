#include<stdio.h>
int main()
{
    
    int n;
    scanf("%d", &n);
    int dem[10001]={0};
    int a[n]; 
    for(int i=0; i<n; i++)
        scanf("%d", a[i]);
    
    
    for(int i=0; i<n; i++) 
        dem[a[i]]++;
    int max=0, index = 0;
    for (int i=0; i<10001; i++) {
    	
    
        if(dem[i]>max) {
        	
        
            max=dem[i];
    
            index=i; }
    }
    printf("%d%d", max, index);
    
    
     
        
    
    return 0;
}
