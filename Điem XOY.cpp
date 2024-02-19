
#include <stdio.h>
struct ToaDo{
    int x,y;
};


struct ToaDo nhap(){
    struct ToaDo A;
    printf("Nhap toa do: ");
    scanf("%d %d", &A.x,&A.y);
};
void XuatDiem(struct ToaDo A){
    printf("(%d;%d)", A.x,A.y);
}
int main() {
    struct ToaDo A = nhap();
    struct ToaDo B = nhap();
    struct ToaDo C = nhap();
    XuatDiem(A);
    printf("\n");
    XuatDiem(B);
    printf("\n");
    XuatDiem(C);
    printf("\n");
    
    return 0;
}
