#include<stdio.h>
#include<math.h>
int prime(int n){
    int m=sqrt(n);
    if(n<2){ return 0; }
    for (int i=2; i<=m; i++){
        if(n%i==0){
            return 0;}
    } 	
	return 1;
	
	
   
}
int main(){
    int n;
    
    do{
        scanf("%d", &n);
    }while(n<=0);
    for(int i=2; i<=n; i++ ){
    	if(prime(i)){
        	printf("%d ", i);}
    }
    return 0;
}
    

