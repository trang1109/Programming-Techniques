#include<stdio.h>
void Docchuso(int chuso){
    if(chuso == 0) printf(" Khong ");
    if(chuso == 1) printf(" Mot ");
    if(chuso == 2) printf(" Hai ");
    if(chuso == 3) printf(" Ba ");
    if(chuso == 4) printf(" Bon ");
    if(chuso == 5) printf(" Nam ");
    if(chuso == 6) printf(" Sau ");
    if(chuso == 7) printf(" Bay ");
    if(chuso == 8) printf(" Tam ");
    if(chuso == 9) printf(" Chin ");
}
void Demchuso(int chuso){
    int count =0;
    while(chuso !=0){
        n /=10;
        count++;
    }
}  
void Dao(int n){
    int sodao =0;
    while(n!=0){
        sodao =  sodao*10 + n%10;
        n /=10;
    }

    int soluong = Demchuso(n);
    Docchuso(sodao % 10);
    if(soluong == 9 ) printf(" Tram ");
    if(soluong == 8 ) printf(" Muoi ");
    if(soluong == 7 ) printf(" Trieu ");
    if(soluong == 6 ) printf(" Tram ");
    if(soluong == 5 ) printf(" Muoi ");
    if(soluong == 4 ) printf(" Ngan ");
    if(soluong == 3 ) printf(" Tram ");
    if(soluong == 2 ) printf(" Muoi ");
    if(soluong == 1 ) printf(" ");
    soluong --;
}


