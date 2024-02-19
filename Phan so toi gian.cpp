#include<stdio.h>
int ucln(int a, unsigned int b){
    if(a==0) return 0;
    while(a!=b){
        if(a>b) a -= b;
        else b -=a;
    }
    return a;
}
int main(){
    int a;
    unsigned int b;
    scanf("%d / %u", &a, &b);
    int x= ucln(a,b);
    if(a==0) printf("%d",x);
    else printf("%d/%d", a/x, b/x );
    return 0;
}
