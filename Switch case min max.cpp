#include<stdio.h>



int findMax(int a, int b)
{
	
	//a>b : 1
	//b>a: -1
	//a==b: 0
	switch (res) {
	case 1:
		return a;
	case -1:
		return b;
	default:
		return 0;
	}
		

}
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int result= findMax(a,b);
	if(a==b) {
		printf("Khong co gia tri lon nhat"); }
	
	else {
		printf("Max: %d\n", result); }
	return 0;
}
	
