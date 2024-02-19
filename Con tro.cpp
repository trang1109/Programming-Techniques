#include <stdio.h>
int  main() 
{	int a[10],*pa,x;
	
	a[0]=11; a[1]=22; a[2]=33; a[3]=44; 
	pa=&a[0]; 
	x=*pa; //gia tri mang = x = phan tu a[0]
	printf("\n*%X", (a+a[1]));
	printf("\n*%X", (pa+1));
	printf("\n%d", pa); //2424336
	pa++; // con tro tro den dia chi ke tiep
	printf("\n%d", pa); // 2424340
	x=*pa; // gan x = gia tri cua con tro pa; 
	printf("\n%d", x); //x=22
	
	x=*pa+1; // 22+1=23
	printf("\n%d", x);
	
	
	x=*(pa+1); // con tro tro den dia chi ke tiep -> lay gia tri chua trong dia chi nay == *(++pa)
 	printf("\n%d", x); // 33
 	//*pa=22;
	x=*++pa; // con tro tro den dia chi ke tiep -> lây gia tri ch?a trong dia chi nay;
	//*pa=33;
	printf("\n%d", x); //33
	
	x=++*pa; //lây gia tri ch?a trong dia chi nay - > +1
	printf("\n%d", x);//34
	//*pa=34
	printf("\n*%d", *pa);
	x=*pa++; // lay gia tri -> tro di dau thi tro
	printf("\n%d", x);//34
	printf("\n%d", *pa);//44
	// ++ vua tro ke tiep, vua gan
} 


