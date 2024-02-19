#include <stdio.h>
#include<string.h>
typedef struct{
    char HoLot[30], Ten[30], Ngaysinh[10], Noisinh[40], X_Loai[20], Ghichu[30];
    float D_Win, D_Word, D_Excel, Tongdiem;
} HOCVIEN;
void Nhapten(HOCVIEN &a){
    printf("\nNhap ho: ");  
    fflush(stdin);
    gets(a.HoLot);
    printf("\nNhap ten: ");
    fflush(stdin);
    gets(a.Ten);
    printf("\nNgay sinh: ");
    fflush(stdin);
    gets(a.Ngaysinh);
}
void Nhapdiem(HOCVIEN &a){
    
    int chon;
    do{
        printf("\nNhap diem:\n1. Win\n2. Word\n3. Excel\nChon so: ");
        scanf("%d", &chon);
        switch(chon){
            case 1: 
            	printf("Nhap diem Win: ");
				scanf("%f", &a.D_Win); break;
            case 2: 
				printf("Nhap diem Word: ");
				scanf("%f", &a.D_Word); break;
            case 3: 
				printf("Nhap diem Excel: ");
				scanf("%f", &a.D_Excel); break;
			default: break;
        }
    }while (chon<=3 && chon >0);
}
void Nhapnoisinh(HOCVIEN &a){
    printf("\nNhap noi sinh: ");
    fflush(stdin);
    gets(a.Noisinh);
    printf("\nNhap ghi chu: ");
    fflush(stdin);
    gets(a.Ghichu);
}
void DTB(HOCVIEN &a){
	a.Tongdiem = a.	D_Win+ a.D_Word+ a.D_Excel;
}
void Xeploai(HOCVIEN &a){
	if (a.Tongdiem>=24) strcpy(a.X_Loai, "Gioi");
	else if(a.Tongdiem <24 && a.Tongdiem >=18) strcpy(a.X_Loai, "Kha");
	else if(a.Tongdiem <18 && a.Tongdiem >=15) strcpy(a.X_Loai, "Trung binh");
	else if (a.Tongdiem <15) strcpy(a.X_Loai, "Kem");
}
void Nhap1hocvien(HOCVIEN &a){
    Nhapten(a);
    Nhapnoisinh(a);
    Nhapdiem(a);
	DTB(a);
	Xeploai(a);
}
void NhapNhocvien(HOCVIEN a[],int n){
    for(int i=0; i<n; i++){
        Nhap1hocvien(a[i]);
    }
}
void Output_one(HOCVIEN a){
	printf("|%-20s|%-15s|%-20s|%-20s|%-20s|\n", a.HoLot, a.Ten, a.Ngaysinh, a.Noisinh, a.Ghichu);
	for(int i=1;i<=107;i++) printf("-"); printf("\n");
}
void Output_list(HOCVIEN a[], int n){
    printf("|%-5s|%-20s|%-15s|%-20s|%-20s|%-20s|\n","STT","Ho lot","Ten","Ngay Sinh", "Noi sinh","Ghi chu");
    for(int i=1;i<=107;i++) printf("="); printf("\n");
    for(int i=0;i<n;i++){
        printf("|%-5d", i+1);
        Output_one(a[i]);
    }
}
void Outputdiem_1hv(HOCVIEN a){
	printf("|%-20s|%-15s|%-10.1f|%-10.1f|%-10s|\n%47.1f\n%47.1f\n",
	a.HoLot,a.Ten, a.D_Win, a.Tongdiem, a.X_Loai,a.D_Word,a.D_Excel);
	for(int i=1;i<=77;i++) printf("-"); printf("\n");
}
void Output_diemNhv(HOCVIEN a[],int n){
	printf("|%-5s|%-20s|%-15s|%-10s|%-10s|%-10s|\n","STT", "Ho", "Ten", "Diem", "Tong", "Xep loai" );
	for(int i=1;i<=77;i++) printf("="); printf("\n");
	for (int i=0; i<n; i++){
		printf("|%-5d", i+1);
		Outputdiem_1hv (a[i]);
	}
}
int main(){
	HOCVIEN a[100];
	int n;
	do{
		printf("\nNhap n: ");
		scanf("%d", &n);
	}while(n<0 || n>100);
	NhapNhocvien(a,n);
	Output_list(a,n);
	printf("\n");
	printf("Ket qua thi:\n"); Output_diemNhv(a,n);
}
