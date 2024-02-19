#include <stdio.h>
#include <string.h>
//-------------------
typedef struct 
{	
	char ma_nv[12];//mã nhân viên
	char ten_nv[60];//tên nhân viên
	char don_vi[200];
	float hs_luong;// luong
}NHANVIEN;
//---------------------------------
void nhap1NhanVien(NHANVIEN &nv);
void xoa1Nhanvien(NHANVIEN ds[],int &n,char ma[]);
void them1NhanvienVaoVitriI(NHANVIEN ds[],int &n,int vt);
void xuatNVCoLuongBeHonLuongTB(NHANVIEN ds[],int n);
void nhapDSNhanVien(NHANVIEN ds[],int &n);
void xuatDSNhanVien(NHANVIEN ds[],int n);
void xuat1NhanVien(NHANVIEN nv);
int timNV(NHANVIEN ds[],int n,char ma[]);

//---------------------------------
int main()
{
	NHANVIEN ds[1000];
	int n,vt;
	char ma[12];
	//Nhap ds NV
	nhapDSNhanVien(ds,n);
	//Xuat ds NV
	printf("Danh sach nhan vien:\n");
	xuatDSNhanVien(ds,n);
	//tim xoa
	printf("Nhap ma nv can xoa: ");
	fflush(stdin);
	gets(ma);
	//In ds sau khi xoa
	/*if(timNV(ds,n,ma)!=-1)
	{
		xoa1Nhanvien(ds,n,ma);
		printf("Danh sach nhan vien sau khi xoa:\n");
		xuatDSNhanVien(ds,n);
	}	
	else 
		xoa1Nhanvien(ds,n,ma);*/
	//Goi ham xuat nv co luong<LTB
	//printf("Danh sach NV co luong < LTB cua cong ty:\n");
	//xuatNVCoLuongBeHonLuongTB(ds,n);
	//Them 1 nhan vien
	do
	{
		printf("Nhap vi tri can them: ");
		scanf("%d",&vt);
	}
	while(vt<0 || vt>n);
	them1NhanvienVaoVitriI(ds,n,vt);
	//in ds sau khi them
	printf("Danh sach nhan vien sau khi them:\n");
	xuatDSNhanVien(ds,n);
}
//----------------------------------
void nhap1NhanVien(NHANVIEN &nv)
{
	printf("\tNhap ma: ");
	fflush(stdin);
	gets(nv.ma_nv);
	printf("\tNhap ten: ");
	gets(nv.ten_nv);
	printf("\tNhap don vi: ");
	gets(nv.don_vi);
	printf("\tNhap he so luong: ");
	scanf("%f",&nv.hs_luong);
}
//----------------------------------
int timNV(NHANVIEN ds[],int n,char ma[])
{
	for(int i=0;i<n;i++)
		if(stricmp(ds[i].ma_nv,ma)==0) //tim thay
			return i;
	return -1; //Khong tim thay		
}
//----------------------------------
void xoa1Nhanvien(NHANVIEN ds[],int &n,char ma[])
{
	int vt,i;
	vt=timNV(ds,n,ma);
	if(vt==-1)
		printf("Khong tim thay nhan vien can xoa\n");
	else
	{
		for(i=vt;i<n-1;i++)
			ds[i]=ds[i+1];
		n--;
	}	
}
//-------------------------------
void nhapDSNhanVien(NHANVIEN ds[],int &n)
{
	printf("Nhap so NV: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Nhap nhan vien thu %d:\n",i+1);
		nhap1NhanVien(ds[i]);
	}		
}
//------------------------------
void xuatDSNhanVien(NHANVIEN ds[],int n)
{
	int i;
	//In tieu de
	for(i=1;i<=85;i++) printf("-");printf("\n");
	printf("|%-12s|%-20s|%-12s|%-15s|%-20s|\n",
		"Ma NV","Ten NV","Don vi","HS Luong","Luong");
	for(i=1;i<=85;i++) printf("-");printf("\n");
	//In cac nhan vien
	for(i=0;i<n;i++)
		xuat1NhanVien(ds[i]);
}
//------------------------------
void xuat1NhanVien(NHANVIEN nv)
{
	float luong;
	luong=nv.hs_luong*1100000;
	printf("|%-12s|%-20s|%-12s|%-15.2f|%-20.2f|\n",
		nv.ma_nv,nv.ten_nv,nv.don_vi,nv.hs_luong,luong);
	for(int i=1;i<=85;i++) printf("-");printf("\n");
}
//-------------------------
void xuatNVCoLuongBeHonLuongTB(NHANVIEN ds[],int n)
{
	int i,j;
	float LuongTB=0;
	for(i=0;i<n;i++)
		LuongTB+=ds[i].hs_luong*1100000;
	LuongTB=LuongTB/n;
	for(i=0;i<n;i++)
		if(ds[i].hs_luong*1100000<LuongTB)
		{
			//In tieu de
			for(j=1;j<=85;j++) printf("-");printf("\n");
			printf("|%-12s|%-20s|%-12s|%-15s|%-20s|\n",
			"Ma NV","Ten NV","Don vi","HS Luong","Luong");
			for(j=1;j<=85;j++) printf("-");printf("\n");
			//In cac nhan vien
			xuat1NhanVien(ds[i]);
		}
}
//---------------------------
void them1NhanvienVaoVitriI(NHANVIEN ds[],int &n,int vt)
{
	int i;
	NHANVIEN nv;
	nhap1NhanVien(nv);
	for(i=n-1;i>=vt;i--)
		ds[i+1]=ds[i];
	ds[vt]=nv;
	n++;
}
