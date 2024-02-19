
#include <stdio.h>
struct Diem{
    int a,b;
};
struct Diem nhap(){
    struct Diem A;
    printf("Nhap toa do: ");
    scanf("%d %d",&A.a,&A.b);
    return A;
}
void xuat (struct Diem A){
    printf("Toa do diem la: (%d;%d)", A.a,A.b);
    
}
float Khoangcach(struct Diem A1, struct Diem A2){
    int k= (A2.a-A1.a)*(A2.a-A1.a)+ (A2.b-A1.b)*(A2.b-A1.b);
    return sqrt(k);
}
void DiemDoiXung(struct Diem A){
    if(A.a==0){
        printf("Khong co diem doi xung qua truc hoanh\n");
        printf("Diem doi xung qua truc tung: (0;%d)\n", -A.b);
    }else if(A.b==0){
        printf("Khong co diem doi xung qua truc tung\n");
        printf("Diem doi xung qua truc hoanh: (%d;0)\n", -A.a);
    }else{
        printf("Diem doi xung qua truc tung: (%d;%d)\n", -A.a,A.b);
        printf("Diem doi xung qua truc hoanh: (%d;%d)\n", A.a,-A.b);
        printf("Diem doi xung qua goc toa do: (%d;%d)\n", -A.a,-A.b);
    }
}
int main() {
    struct Diem A=nhap();
    struct Diem A1=nhap();
    struct Diem A2=nhap();
    xuat(A);
    printf("\n");
    xuat(A1);
    printf("\n");
    xuat(A2);
    printf("\n%f\n",Khoangcach(A1,A2));
    DiemDoiXung(A);
    return 0;
}
