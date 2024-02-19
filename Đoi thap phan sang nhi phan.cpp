#include<stdio.h>
void xuatnhiphan(int n){
    int A[100];
    int i=0;
    while(n>0){
        A[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0;j--){
        printf("%d", A[j]);
    }
    
}
int main(){
    int n;
    scanf("%d", &n);
    xuatnhiphan(n);
    return 0;
}

