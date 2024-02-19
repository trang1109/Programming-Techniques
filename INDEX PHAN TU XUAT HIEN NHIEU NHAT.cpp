#include<stdio.h>
#include<conio.h>
int main(){
	 
	int mangA[10001]={},soPhantu,mangdem[10001]={};
	
	scanf("%d",&soPhantu);
	//Nhap mang.
	for(int i=0;i<soPhantu;i++){
		if(i==0)
			
			printf("A[%d]",i);
			scanf("%d",&mangA[i]);
	}
	for(int i=0;i<soPhantu;i++){
		int dem =1;
		mangdem[i]=dem;
		for(int j=i+1;j<soPhantu;j++){
			if(mangA[i]==mangA[j]){
				mangdem[i]=++dem;
				for(int k=j;k<soPhantu;k++){
					mangA[k]=mangA[k+1];
				}
				soPhantu--;
				j--;
			}
		}
	}
	int max=0,vi_tri=0;
	for(int i=0;i<soPhantu;i++){
		if(mangdem[i]>max){
			max=mangdem[i];
			vi_tri=i;
		}
}
	int B[max];
	scanf("%d", B[soPhantu]);	
	printf(" %d ",mangdem[B[soPhantu]]);
	getch();
	return 0;
}
