#include <stdio.h>
#include <stdlib.h>
struct PHANSO
{
	int ts;
	int ms;
};
//----------------------
void nhapPS(PHANSO &ps)
{
	printf("Nhap tu so: ");
	scanf("%d",&ps.ts);
	printf("Nhap mau so: ");
	scanf("%d",&ps.ms);
}
//----------------------
int USCLN(int a,int b)
{
	while(a!=b)
		if(a>b) a=a-b;
		else b=b-a;
	return a;
}
//----------------------
void rutGonPS(PHANSO &ps)
{
	PHANSO tam;
	tam.ts=abs(ps.ts);
	tam.ms=abs(ps.ms);
	int usc=USCLN(tam.ts,tam.ms);
	ps.ts=ps.ts/usc;
	ps.ms=ps.ms/usc;
}
//----------------------
void xuatPS(PHANSO ps)
{
	printf("%d/%d\n",ps.ts,ps.ms);
}
//----------------------
PHANSO tong(PHANSO ps1,PHANSO ps2)
{
	PHANSO ps;
	ps.ts=ps1.ts*ps2.ms+ps2.ts*ps1.ms;
	ps.ms=ps1.ms*ps2.ms;
	rutGonPS(ps);
	return ps;
}
//----------------------
PHANSO hieu(PHANSO ps1,PHANSO ps2)
{
	PHANSO ps;
	ps.ts=ps1.ts*ps2.ms-ps2.ts*ps1.ms;
	ps.ms=ps1.ms*ps2.ms;
	rutGonPS(ps);
	return ps;
}
//----------------------
PHANSO tich(PHANSO ps1,PHANSO ps2)
{
	PHANSO ps;
	ps.ts=ps1.ts*ps2.ts;;
	ps.ms=ps1.ms*ps2.ms;
	rutGonPS(ps);
	return ps;
}
//----------------------
PHANSO thuong(PHANSO ps1,PHANSO ps2)
{
	PHANSO ps;
	ps.ts=ps1.ts*ps2.ms;;
	ps.ms=ps1.ms*ps2.ts;
	rutGonPS(ps);
	return ps;
}
//----------------------
int KTPSToiGian(PHANSO ps)
{
	if(USCLN(ps.ts,ps.ms)==1)
		return 1;
	return 0;
}
//----------------------
void quyDongMS2PS(PHANSO &ps1,PHANSO &ps2)
{
	rutGonPS(ps1);
	rutGonPS(ps2);
	ps1.ts=ps1.ts*ps2.ms;
	ps2.ts=ps2.ts*ps1.ms;
	ps1.ms=ps2.ms=ps1.ms*ps2.ms;
}
//----------------------
int main()
{
	PHANSO ps1,ps2,ps;
	//Nhap
	printf("Nhap ps thu nhat:\n");
	nhapPS(ps1);
	printf("Nhap ps thu hai:\n");
	nhapPS(ps2);
	//Xuat
	printf("Ps thu nhat la:\n");
	xuatPS(ps1);
	printf("Ps thu hai la:\n");
	xuatPS(ps2);
	//Rut gon
	/*printf("Phan so thu nhat sau khi duoc rut gon:\n");
	rutGonPS(ps1);
	xuatPS(ps1);
	printf("Phan so thu hai sau khi duoc rut gon:\n");
	rutGonPS(ps2);
	xuatPS(ps2);*/
	//Tinh tong
	printf("Tong cua 2 ps la:\n");
	ps=tong(ps1,ps2);
	xuatPS(ps);
	printf("Hieu cua 2 ps la:\n");
	ps=hieu(ps1,ps2);
	xuatPS(ps);
	printf("Tich cua 2 ps la:\n");
	ps=tich(ps1,ps2);
	xuatPS(ps);
	printf("Thuong cua 2 ps la:\n");
	ps=thuong(ps1,ps2);
	xuatPS(ps);
	//Kiem tra ps toi gian
	ps.ts=10;
	ps.ms=15;
	if(KTPSToiGian(ps))
		printf("Phan so toi gian\n");
	else
		printf("Phan so khong toi gian\n");
	//Quy dong mau so
	ps1.ts=6;
	ps1.ms=15;
	ps2.ts=6;
	ps2.ms=8;
	quyDongMS2PS(ps1,ps2);
	printf("\n");
	xuatPS(ps1);
	xuatPS(ps2);
}