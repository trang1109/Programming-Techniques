#include<stdio.h>
#include<conio.h>
int main(){
	
	int mangA[50]={},soPhantu,mangdem[50]={};
	
	scanf("%d",&soPhantu);
	
	for(int i=0;i<soPhantu;i++){
		if(i==0)
			
		scanf("%d",&mangA[i]);
	}
	for(int i=0;i<soPhantu;i++){
		int dem =1;
		mangdem[i]=dem;
		for(int j=i+1;j<soPhantu;j++){
			if(mangA[i]==mangA[j]){
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
		printf("%d",vi_tri+1,max);
	getch();
	return 0;
}
