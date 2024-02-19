#include <stdio.h>
#include <ctype.h>

struct STUDENT
{
	int code;
	char name[25];
	double avgmark;
};
//---prototype---
void nhap1SinhVien(STUDENT &sv);
void themSinhVien(STUDENT a[],int &n);
void docDSSinhVien(STUDENT a[],int &n);
void suaDTB(STUDENT a[],int n);
void xuat1SinhVien(STUDENT sv);
//---------------
int main()
{
	STUDENT a[20];
	int n,chon;
	do
	{
		printf("---------------\n");
		printf("[1]. Them\n");
		printf("[2]. Doc\n");
		printf("[3]. Sua\n");
		printf("[4]. Thoat\n");
		printf("Chon tac vu: ");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
				themSinhVien(a,n);
				break;
			case 2:
				docDSSinhVien(a,n);
				break;
			case 3:
				suaDTB(a,n);
				break;	
		}
		if(chon==4)
		{
			printf("Ban chon chuc nang thoat CT\n");
			break;
		}
	}
	while(1);
}
//----------------
void nhap1SinhVien(STUDENT &sv)
{
	printf("\t%-10s>  ","Ma so");
	scanf("%d",&sv.code);
	printf("\t%-10s>  ","Ten");
	fflush(stdin);
	gets(sv.name);
	printf("\t%-10s>  ","Diem TB");
	scanf("%lf",&sv.avgmark);
}
//----------------
void themSinhVien(STUDENT a[],int &n)
{
	char tl;
	printf("GHI FILE\n");
	n=0;
	do
	{
		printf("Nhap mot mau tin (y/n)? ");
		fflush(stdin);
		scanf("%c",&tl);
		if(tolower(tl)=='y')
		{
			nhap1SinhVien(a[n]);
			n++;
		}
	}
	while(tolower(tl)=='y');
	FILE *fp;
	fp=fopen("STUDENT.DAT","wb");
	if(fp==NULL)
	{
		printf("Khong tao duoc file\n");
		return;
	}
	fwrite(a,sizeof(STUDENT),n,fp);
	printf("Da ghi file ...\n");
	fclose(fp);
}
//----------------
void docDSSinhVien(STUDENT a[],int &n)
{
	FILE *fp;
	fp=fopen("STUDENT.DAT","rb");
	if(fp==NULL)
	{
		printf("Khong doc duoc file\n");
		return;
	}
	fseek(fp,0,SEEK_END);//di chuyen con tro file ve cuoi
	n=ftell(fp)/sizeof(STUDENT);
	fseek(fp,0,SEEK_SET);//di chuyen con tro file ve dau
	fread(a,sizeof(STUDENT),n,fp);
	fclose(fp);
	printf("da doc du lieu tu file len mang...\n");
	for(int i=0;i<n;i++)
	{
		printf("Sinh vien thu %d:\n",i+1);
		xuat1SinhVien(a[i]);
	}
}
//----------------
void suaDTB(STUDENT a[],int n)
{
	int MaSV,vt=-1;
	printf("Nhap ma SV can sua: ");
	scanf("%d",&MaSV);
	for(int i=0;i<n;i++)
		if(a[i].code==MaSV)
		{
			vt=i;
			break;
		}
	if(vt==-1)
		printf("khong tim thay maSV %d\n",MaSV);
	else
	{
		printf("Thong tin cua sinh vien tim thay:\n");
		xuat1SinhVien(a[vt]);
		printf("Nhap diemTB can sua: ");
		double dtb;
		scanf("%lf",&dtb);
		a[vt].avgmark=dtb;
		FILE *fp;
		fp=fopen("STUDENT.DAT","wb");
		if(fp==NULL)
		{
			printf("Khong tao duoc file\n");
			return;
		}
		fwrite(a,sizeof(STUDENT),n,fp);
		printf("Da cap nhat file ...\n");
		fclose(fp);
		printf("Thong tin sau khi sua:\n");
		xuat1SinhVien(a[vt]);
	}
}
//-----------------
void xuat1SinhVien(STUDENT sv)
{
	printf("\t%-10s>  ","Ma so");
	printf("%d\n",sv.code);
	printf("\t%-10s>  ","Ten");
	puts(sv.name);
	printf("\t%-10s>  ","Diem TB");
	printf("%.2lf\n",sv.avgmark);
}