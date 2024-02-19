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
int main(){
    int n;
    do{
        scanf("%d", &n);
        if(n>=0){
            printf("%d", sumDigit(n));
        }
            
            
    }while(n>=0);
    
    
    return 0;
}
