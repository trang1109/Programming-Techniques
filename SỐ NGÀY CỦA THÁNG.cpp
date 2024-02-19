#include<stdio.h>
int main()
{
	int m, y;
	scanf("%d%d", &m, &y);
	int ngay;
	switch(m){
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngay=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngay=30;
			break;
		case 2:
			if ((y %4==0 && y%100 !=0) || y% 400==0) { ngay=29;}
			else { ngay=28; }
			break;
		default: printf("Khong hop le");
		}
	printf("Thang %d cua nam %d co %d ngay", m, y, ngay);
	return 0;
			
			
			
		
		
}
