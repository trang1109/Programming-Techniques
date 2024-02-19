#include<stdio.h>
int main()
{
	unsigned int n;
	scanf("%d", &n);
	int count=0;
	int i=2;
	if(n==1){
		printf("1 = 2^0" ); }
	if(n>1){
		printf("%d = ", n);
		while(n>1) {
			if(n%i==0) {
				count++;
				if(count==1) {
						printf("%d", i); }
				if(n==i){
					 
				
					if(count>1)  {
						printf("%d ^ %d", i, count); }
				}	
				n/=i;
			 }
			 	
			else {
				if(count>1) {
					printf("%d ^ %d x ", i, count ); }
				else {
					printf("%d x ", i );}
				count=0; 
				i++;
			}
		}	
	}
	return 0;
}
