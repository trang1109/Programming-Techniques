#include<stdio.h>
#include<math.h>
const int spt = 100;
int songuyento(int k){
    int x = sqrt(k);
    if(k<2) return 0;
    for(int i = 2; i<=x; i++){
        if(k % x == 0){
            return 0;
        }return 1;
    }
    
}
int sochinhphuong(int k){
	
    if(k < 2) return 0;
    
    int x = sqrt(k);
    if(k == x*x) return 1;
        
    return 0;
}
int sodoixung(int k){
    int reverse = 0, rem, temp;
    
    temp = k;
    while(temp != 0)
    {
        rem = temp % 10;
        temp /= 10;
        reverse = reverse*10 + rem;}
    if(reverse == k) return 1;
    return 0;
}
int soboi3(int k){
    int sum=0;
    while(k>0){
        int digit = k%10;
        k/= 10;
        sum += digit;
        
    }
    if(sum % 3 == 0) return 1;
    else return 0;

}
void Array(int a[], int n){
    
    for(int i=0; i< n; i++){
        printf("Nhap phan tu A[%d]=",i);
        scanf("%d", &a[i]);
    }    
    
}

int songuyentotrongA(int a[], int n ){
	printf("Cac phan tu la so nguyen to:\n");
    for(int i=0; i<n; i++){
        if(songuyento(a[i])){
        	
            if((i+1)%10 !=0){
        	    printf("a[%d] = %d; ", i, a[i] );
            }else printf("a[%d] = %d\n", i, a[i]);
        }
    }
    
}
void tongsochinhphuong(int a[], int n){
    int sum =0;
    for(int i=0; i<n; i++){
        if(sochinhphuong(a[i])){
            sum += a[i];
        }
    }
    printf("\nTong so chinh phuong: %d\n", sum);
}
void demsodoixung(int a[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(sodoixung(a[i])){
            count ++;
        }
    }
    printf("\nSo luong cac so doi xung: %d\n", count);
}
float average(int a[], int n){
    int count = 0;
    float sum=0;
    for(int i=0; i<n; i++){
        if(soboi3(a[i])){
            count ++;
            sum += a[i];
        }
    float avg = sum/count; 
    return avg;
    
    }
}

 
int main(){
    int a[spt], n;
    printf("Nhap so luong phan tu:");
    do{
        
        scanf("%d", &n);
        if(n <= 0 || n > spt){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > spt);
    Array(a, n);
    songuyentotrongA(a,n);
    tongsochinhphuong(a,n);
    demsodoixung (a,n);
    printf("\nTrung binh cong so boi: %f\n", average(a,n));
    
    return 0;
    
    
}



