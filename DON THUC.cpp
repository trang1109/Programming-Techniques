#include<stdio.h>
#include<math.h>
typedef struct
{
  int heso;
  int somu;
} DONTHUC;
void
Nhap (DONTHUC & a)
{
  printf ("\nNhap he so: ");
  scanf ("%d", &a.heso);
  printf ("Nhap so mu: ");
  scanf ("%d", &a.somu);

}

void
Xuat (DONTHUC a)
{

  if (a.somu == 0)
    printf ("Don thuc la: %d", a.heso);
  else
    printf ("Don thuc la: %dx^%d", a.heso, a.somu);
}

DONTHUC
Tich (DONTHUC a1, DONTHUC a2)
{
  DONTHUC a;

  a.heso = a1.heso * a2.heso;
  a.somu = a1.somu + a2.somu;
  return a;
}

DONTHUC
Thuong (DONTHUC a1, DONTHUC a2)
{
  DONTHUC a;
  a.heso = a1.heso / a2.heso;
  a.somu = a1.somu - a2.somu;
  return a;
}

DONTHUC
Daoham (DONTHUC a)
{
  DONTHUC b;
  int c = a.somu;
  if (c != 0)
    {
      b.heso = a.heso * c;
      b.somu = c - 1;
    }
  return b;

}

void
TinhGiatri (DONTHUC a, int &x0)
{
  float k = a.heso * pow (x0, a.somu);
  printf ("\nTinh gia tri: %.2f", k);
}

int
main ()
{
  DONTHUC a, a1, a2;
  DONTHUC kq1, kq2, kq3;
  int x0;
  Nhap (a);
  Xuat (a);
  Nhap (a1);
  Nhap (a2);
  kq1 = Tich (a1, a2);
  printf ("Tich : %dx^%d", kq1.heso, kq1.somu);
  kq2 = Thuong (a1, a2);
  printf ("\nThuong: %dx^%d", kq2.heso, kq2.somu);
  kq3 = Daoham (a);
  if (a.somu != 0)
    {
      printf ("\nDao ham: %dx^%d", kq3.heso, kq3.somu);
    }
  else
    printf ("\nDao ham: 0");
  printf ("\nNhap x0: ");
  scanf ("%d", &x0);
  TinhGiatri (a, x0);
}

