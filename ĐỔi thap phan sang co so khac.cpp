#include<stdio.h>
#include<math.h>
long doiCoSo(unsigned int n, int i){
    
    
    
    
    long binaryNumber;
    if(n>0){
    	
        return binaryNumber = (n%2)* pow(10,i)+ doiCoSo(n/2, i+1);
        
    
    }
    
}
int main(){
    unsigned int n,i;
    scanf("%u", &n);
    printf("%ld", doiCoSo(n,i));
    return 0;
    
}

