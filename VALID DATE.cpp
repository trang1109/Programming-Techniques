#include<stdio.h>
int validDate(int d, int m, int y){
    int maxd=31;
    if(d<1 || d>31|| m<1 || m>12){ return 0; }
    if(m==4 || m==6 || m==9 ||m==11 || y<1){
        maxd=30;
    }if(m==2){
        if(y%400==0 || (y%4==0 && y%100!=0)){
            maxd=29;
        }else{ maxd=28;}
    }
    return d<=maxd;
}
int main(){
    int d, m,y, maxd;
    printf("Nhap ngay thang nam: ");
    scanf("%d/ %d/ %d", &d, &m, &y);
    if(validDate(d,m,y)){
        printf("valid date");
        
    }else{
        printf("Invalid date");
    }
    return 0;
}
    

