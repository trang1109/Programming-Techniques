#include <stdio.h>
void Nhap(int *a, int &n){
	for(int i=0; i<n; i++){
		printf("\na[%d] = ", i);
        scanf("%d", (a+i));
	}
}
void Xuat(int *a, int n){
	for(int i=0; i<n; i++){
		printf("a[%d]= %d\n", i,*(a+i));
	}
}
int* DiachiGTLN(int *a, int n){
	int *maxvalue= a;
        
    for(int i=0; i<n; i++){
     	if(*(a+i) > *maxvalue){
     
         maxvalue= (a+i); 
		}
        
    }
    return maxvalue;
}
int GTLN(int *a, int n){
	int *maxvalue= a;
        
    for(int i=0; i<n; i++){
     	if(*(a+i) > *maxvalue){
     
         maxvalue= (a+i); 
		}
        
    }
    return *maxvalue;
}
int inDexGTLN(int *a, int n){
	int maxvalue= GTLN(a,n);
        
    for(int i=0; i<n; i++){
     	if(*(a+i) == maxvalue){
     
         return i; 
		}
        
    }
    
}
void maxAm(int *a, int n){
	int max,i;
	for(i=0;i<n;i++){
		if(*(a+i)<0){
			max= *(a+i);
			break;
		}
	}
	if(i==n) printf("\nK co so am");
	
	for(int j=i+1; i<n;i++){
		if(*(a+j)<0 && *(a+j) >max){
			max = *(a+j);
		}
		printf("\nGia tri am lon nhat: %d", max);
	}
	
}
int minDuong(int *a, int n){
	int min,i;
	for( i=0;i<n;i++){
		if(*(a+i)>0){
			min= *(a+i);
			break;
		}
	}
	if(i==n) return -1;
	for(int j=i+1; i<n;i++){
		if(*(a+j)>0 && *(a+j) < min){
			min = *(a+j);
		}
	}
	return min;

}
void sapTang(int *a,int n){
	for(int i=0;i<n-1; i++){
		for(int j=i+1; j<n;j++){
			if(*(a+i) > *(a+j)){
				int temp = *(a+i);
				*(a+i) =*(a+j);
				*(a+j)=temp;
			}
		}
	}
}
void chenViTri(int *a,int &n){
	int k,i;
	printf("Nhap so muon chen: ");
	scanf("%d", &k);
	for(i=0;i<n;i++){
		if(*(a+i)>k) break;
	}
	for(int j=n-1;j>=i;j--){
		*(a+j+1)=*(a+j);
	}
	*(a+i)=k;
	n++;
}
int main()
{
    int n, a[100];
    printf("Nhap n: ");
    scanf("%d", &n);
    Nhap(a,n);
    Xuat(a,n);
    printf("Dia chi so lon nhat: %p", DiachiGTLN(a,n));
    printf("\nChi so gia tri lon nhat: %d", inDexGTLN(a,n));
    printf("\nGia tri lon nhat: %d", GTLN(a,n));
    maxAm(a,n);
    printf("\nGia tri duong nho nhat: %d", minDuong(a,n));
    sapTang(a,n);
    printf("\nMang sau khi sx:\n");
    Xuat(a,n);
    chenViTri(a,n);
    printf("\nMang sau khi chen:\n");
    Xuat(a,n);
    return 0;
}
