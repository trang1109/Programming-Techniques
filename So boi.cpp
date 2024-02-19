#include<stdio.h>
int sumDigit(int n){
    
    int sum=0;
    while(n>0){
        int digit=n%10;
        n/=10;
        sum+=digit;
        
    }
    return sum;
    
    
}
int soboi (int n, int k){
    for(int i=1; i<=20; i++){
        int k = i*n;
        if(sumDigit(n) % k == 0){
        return 1;
        }
    return 0;
    }
    
}
int main(){
    int n,k;
    do{
        scanf("%d", &n);
        if(n>=0){
            printf("%d", sumDigit(n));
        }
            
            
    }while(n>=0);
    printf("%d", soboi(n,k));
    
    
    return 0;
}

