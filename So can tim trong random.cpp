#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void input(int a[][20]){
    srand((int)time(0));
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            a[i][j]= rand()%1000;
            printf("%5d", a[i][j]);
        }printf("\n");
    }
}
void timMax(int a[][20]){
    int max = a[0][0];
    for(int i=0; i<20;i++){
        for(int j=0; j<20; j++){
            if(a[i][j]>max){
                max= a[i][j];
            }
        }
    }
    printf("So max la: %d", max);
}
void dem(int a[][20], int &x){
    int count =0;
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(a[i][j] == x){
                count++;
                printf("Hang %d cot %d\n", i,j);
            }
        }
    }
    printf("Xuat hien: %d lan\n", count);
    
}
void sort(int a[][]){
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            if(a[i][j]> a[i][j++]){
                
            }
        }
    }
}
int main(){
    int a[20][20];
    int x;
    input(a);
    timMax(a);
    printf("Nhap so can tim: ");
    scanf("%d", &x);
    dem(a);
    return 0;
}


