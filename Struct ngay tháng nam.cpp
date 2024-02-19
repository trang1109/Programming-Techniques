#include<stdio.h>
typedef struct{
    int day, month, year;
} NGAY;
int Kiemtranamnhuan(NGAY a){
    if((a.year %4==0 && a.year %100!=0 )|| (a.year %400 ==0))
        return 1;
    return 0;
}
int Timsongaytrongthang(NGAY a){
    int ngaytrongthang;
    switch(a.month){
        case 6:
        case 9:
        case 11:
        case 4:
            ngaytrongthang=30; break;
        case 3:
        case 5:
        case 7:
        case 10:
        case 12:
        case 1:
            ngaytrongthang =31;
        case 2:
            int check=Kiemtranamnhuan(a);
            if(check==1){
                ngaytrongthang= 29;
            }else ngaytrongthang=28;
    
    }
    return ngaytrongthang;
}
int Kiemtrasothutungay(NGAY a){
    int S= a.day;
    for(int i=1; i< a.month;i++){
        switch(i){
            case 4: case 6: case 9: case 11:
                S+= 30; break;
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                S+=31; break;
            case 2:
                
                if(Kiemtranamnhuan(a)){
                    S+=29; break;
                }else S+=28; break;
        }
    }
    return S;
}

void NhapNgay(NGAY &a)
{
	do
	{
		printf("\nNhap vao nam: ");
		scanf("%d", &a.year);
		
	}while(a.year > 10000);

	do
	{
		printf("\nNhap vao thang: ");
		scanf("%d", &a.month);
		
	}while(a.month < 1 || a.month > 12);

	int ngaytrongthang = Kiemtrasothutungay(a);
	do
	{
		printf("\nNhap vao ngay: ");
		scanf("%d",&a.day);
		
	}while(a.day < 1 || a.day > ngaytrongthang);
}
void xuat(NGAY &a){
    printf("Time: %d/%d/%d", a.day, a.month,a.year);
}
void Sothutu(NGAY a){
    
    int A=1;
    int check=Kiemtranamnhuan(a);
    for(int i=1; i<a.year; i++){
        
        if(check ==1) A+= 366;
        else A+=365;
            
    }
    printf("\nSo ngay tu ngay 1/1/1: %d", A+Kiemtrasothutungay(a));
        
    
}
void Timngayke (NGAY a,int k){
    int ngaytrongthang= Timsongaytrongthang(a);
    if(a.day + k <= ngaytrongthang ){
        printf("\nNgay ke tiep k ngay: %d/%d/%d", a.day + k, a.month, a.year);
    }else if((a.day + k > ngaytrongthang) && (a.month !=12)){
        printf("\nNgay ke tie[ k ngay: %d/%d/%d", (a.day + k) - ngaytrongthang, a.month+1, a.year);
    }else if((a.day + k > ngaytrongthang) && (a.month ==12)){
        printf("\nNgay ke tiep k ngay: %d/%d/%d", (a.day + k) - ngaytrongthang, 1, a.year);
    }
    if(a.day -k <ngaytrongthang){
        printf("\nNgay truoc do k ngay: %d/%d/%d", k-a.day, a.month, a.year);
    }else if(a.day - k <=0  && a.month !=1){
        a.month--;
        printf("\nNgay truoc do k ngay: %d/%d/%d", ngaytrongthang-(k-a.day), a.month, a.year);
    }
    
}
int main(){
    NGAY a;
    NhapNgay(a);
    xuat(a);
    printf("\nSo thu tu ngay: %d",Kiemtrasothutungay(a));
    Sothutu(a);
    int k;
    printf("\nNhap k: ");
    scanf("%d", &k);
    Timngayke(a,k);
}
