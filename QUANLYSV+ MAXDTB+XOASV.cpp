#include <stdio.h>
#include <string.h>
typedef struct{
    char Hoten[30], Mssv[10];
    float TK,TH,GK,CK,DTB;
}SINHVIEN;
float DTBsv(SINHVIEN &a);
void Nhap1sv(SINHVIEN &a){
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(a.Hoten);
    printf("Nhap MSSV: ");
    fflush(stdin);
    gets(a.Mssv);
    printf("Nhap diem TK: ");
    fflush(stdin);
    scanf("%f", &a.TK);
    printf("Nhap diem TH: ");
    fflush(stdin);
    scanf("%f", &a.TH);
    printf("Nhap diem GK: ");
    fflush(stdin);
    scanf("%f", &a.GK);
    printf("Nhap diem CK: ");
    fflush(stdin);
    scanf("%f", &a.CK);
    a.DTB =DTBsv(a);
}
float DTBsv(SINHVIEN &a){
    return (((a.TK*2+a.GK*3+a.CK*5)/10)*2+ a.TH)/3;
}

void Xuat1sv(SINHVIEN a){
    printf("|%-30s|%-10s|%-10f|%-10f|%-10f|%-10f|%-10f|\n", a.Hoten,a.Mssv, a.TK, a.TH, a.GK, a.CK, a.DTB);
}
void NhapNsv(SINHVIEN a[], int n){
    for(int i=0;i<n;i++){
        Nhap1sv(a[i]);
        
    }
}
void XuatNsv(SINHVIEN a[],int n){
    printf("|%-5s|%-30s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","STT", "Ho ten", "MSSV", "TK", "TH", "GK", "CK", "DTB");
    for (int i=0;i<n;i++){
        printf("|%-5d", i+1);
        Xuat1sv(a[i]);
    }
}
void SVHocLai(SINHVIEN a[], int n){
    int kt=0;
    for (int i=0; i<n; i++)
        if (a[i]. DTB < 4.0)
        	kt =1;
        
	
	if (kt ==0 ){
        printf("Khong co sv hoc lai");
	}
	else{
		printf("DSSV hoc lai:\n");
		printf("|%-5s|%-30s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","STT", "Ho ten", "MSSV", "TK", "TH", "GK", "CK", "DTB");
            for (int i=0;i<n;i++){
            	if (a[i]. DTB< 4.0){
		        printf("|%-5d", i+1);
		        Xuat1sv(a[i]);
		    	}
			}
	}
    
}
void TimSV(SINHVIEN a[], int n){
    char ma[10];
    int co=0;
    printf("\nNhap mssv can tim: ");
    fflush(stdin);
    gets(ma);
    for(int i=0; i<n; i++)
        if(stricmp (a[i].Mssv, ma)==0){
        	co=1;
        	XuatNsv(a,n);
        }
	if (co==0){
	    printf("K tim thay sv");
	}
}
void sapGiamDTB(SINHVIEN a[], int n){
	SINHVIEN tam;
    for (int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(a[i].DTB <a[j].DTB){
                tam= a[i];
                a[i]=a[j];
                a[j]=tam;
            }
            
        }
    }
    XuatNsv(a,n);
}
void sapTangHoTen(SINHVIEN a[], int n){
    SINHVIEN tam;
    for (int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(stricmp(a[i].Hoten, a[j].Hoten) > 0){
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    XuatNsv(a,n);
}
int timMaSV(SINHVIEN a[], int n){
    char ma[10];
    int co=0;
    printf("Nhap mssv: ");
    fflush(stdin);
    gets(ma);
    for(int i=0; i<n; i++){
        if(stricmp(ma, a[i].Mssv)==0){
        	co=1;
            printf("STT sv can tim la: %d",i+1);
        }
	}
	if (co==0) printf("K tim thay sv\n");
    
}
void timDTBMax(SINHVIEN a[], int n){
    SINHVIEN tam;
    int index;
    int Max= a[0].DTB;
    for(int i=1;i<n;i++){
        if(a[i].DTB>Max){
            Max=a[i].DTB;
            index=i;
            
            
        }else {
            Max=a[0].DTB;
            index=0;
            
        }
    }
    
    printf("|%-5s|%-30s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","STT", "Ho ten", "MSSV", "TK", "TH", "GK", "CK", "DTB");
    if (index>=0){
    	printf("|%-5d", index+1);
        Xuat1sv(a[index]);
	}
}
void xoa1SV(SINHVIEN a[], int &n){
	int k;
    do{
        printf("Nhap STT sv can xoa: ");
        scanf("%d", &k);
    }while(k>n || k<0);
    for (int i=k-1; i< n-1; i++){
        a[i] =a[i+1];
    }
    n--;
    XuatNsv(a,n);
}
void xuatDayDu(SINHVIEN a[], int n){
	char ghichu[10];
	printf("|%-5s|%-30s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|\n","STT", "Ho ten", "MSSV", "TK", "TH", "GK", "CK", "DTB", "Ghi chu");
	for (int i=0;i<n;i++){
        if (a[i]. DTB< 4.0){
        	strcpy(ghichu, "Hoc lai");
    	}else {
    		strcpy(ghichu, " ");
		}
   		printf("|%-5d|%-30s|%-10s|%-10f|%-10f|%-10f|%-10f|%-10f|%-10s|\n", i+1,a[i].Hoten,a[i].Mssv, a[i].TK, a[i].TH, a[i].GK, a[i].CK, a[i].DTB,ghichu);
	}
	
}
int main(){
    SINHVIEN a[100];
    int n, luachon;
    printf("\nNhap lua chon:\n1. Nhap sv\n2. Xuat sv\n3. Hien thi sv hoc lai\n4. Tim sv\n5. Sap giam sv\n6. Sap tang ho ten\n7. Tim vi tri sv\n8. Tim DTB Max\n9. Hien thi day du thong tin sv\n10. Xoa 1 sv\n11. Thoat\n");
    do{
    	printf("Nhap lua chon: ");
	  	scanf("%d", &luachon);
    	switch(luachon){
    		case 1: 
    			do{
		        printf("Nhap so luong sv: ");
		        scanf("%d", &n);
		    	}while (n<=0 || n>100);
				NhapNsv(a,n);
    			break;
    		case 2:
    			XuatNsv(a,n);
    			break;
    		case 3:
    			SVHocLai(a,n);
    			break;
    		case 4:
    			TimSV(a,n);
    			break;
    		case 5:
    			printf("\nSap xep DTB:\n");
    			sapGiamDTB(a,n);
    			break;
    		case 6:
    			printf("\nSap tang ho ten:\n");
    			sapTangHoTen(a,n);
    			break;
    		case 7:
    			timMaSV(a,n);
    			break;
    		case 8:
    			timDTBMax(a,n);
    			break;
    		case 9:
    			xuatDayDu(a,n);
    			break;
    		case 10:
    			xoa1SV(a,n);
    			break;
    		case 11: break;
		};
		if(luachon==11) break;
			
	}while (1);
    
}


