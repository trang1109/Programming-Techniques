#include<stdio.h>
#include<math.h>
int main(){
    int luachon;
    
    printf("Chuong trinh tinh dien tich cac hinh co ban\n1. Hinh tam giac\n2. Hinh tron\n3. Thoat\nBam chon so\n");
    scanf("%d", &luachon);
    switch(luachon){
        case 1: 
            int a,b,c;
            if(a>0 && b>0 && c>0 && (a +b >c || b+a>c || a+c>b)){
                double p= (a+b+c)/2;
                double area= p*(p-a)*(p-b)*(p-c);
                printf("%lf", sqrt(area));
            }else {printf("3 so khong phai 3 canh tam giac"); }
            
            break;
        case 2:
            double r;
            scanf("%lf", &r);
            printf("Dt hinh tron: %lf", 3.14*r*r*2);
            break;
        case 3: break;
        
        
    }
    
    return 0;
}
    
    


    

