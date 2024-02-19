#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a[5][4];
    srand((int)time(NULL));
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            a[i][j]= rand()%100;
            printf("%5d", a[i][j]);
        }printf("\n");
    
    }
    return 0;
}

