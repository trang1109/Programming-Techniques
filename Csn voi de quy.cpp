#include<stdio.h>
long csn(int n, int q, int a){
    if(n==1) 
        return a;
    return q*csn(n-1,q,a);
}
int main(){
    int n,q,a;
    
    scanf("%d%d%d", &n, &q,&a);
    for(int i=1;i<=n;i++){
       
        printf("%ld\t", csn(i,q,a));
        if(i%10==0){
            printf("\n");
        }
        
    }
    return 0;
}

