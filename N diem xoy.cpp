
#include <stdio.h>
struct Diem{
    int x[100];
    int y[100];
    
};


int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    struct Diem A[100];
    for(int i=0;i<n;i++){
        printf("Nhap toa do diem thu %d: ", i);
        scanf("%d %d", &A[i].x, &A[i].y);
    }
    
    for(int i=0;i<n;i++){
        printf("\n Toa do diem (%d;%d)", A[i].x, A[i].y);
    }
    
    return 0;
}
