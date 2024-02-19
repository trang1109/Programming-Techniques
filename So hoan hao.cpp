#include<stdio.h>
int sumus(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum +=i;
        }
        
    }
    return sum;
    

}
int gapdoi(int n){
	
    if(sumus(n) == (n*2)){
        return 1;
    }else return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", gapdoi(n));
    return 0;
}
