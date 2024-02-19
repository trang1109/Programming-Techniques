#include<stdio.h>
const int spt = 100;
void input(int A[], int &n){
    for(int i=0; i<n; i++){
        printf("Nhap phan tu thu A[%d] = ", i);
        scanf("%d", &A[i]);
    }
}
void output (int A[], int n){
    for(int i=0; i<n; i++){
        printf("Phan tu thu A[%d] = %d; ", i, A[i]);
    }
}
int max(int A[], int n){
    int max = A[0];
    for(int i=1; i<n; i++){
        if(A[i] > max){
            max = A[i];
        }
    }return max;
}
int min(int A[], int n){
    int min = A[0];
    for(int i=1; i<n; i++){
        if(A[i] < min){
            min = A[i];
        }
    }return min;
}
int search(int A[], int n, int v){
    int count =0;
    for(int i=0; i<n; i++){
        if(A[i] == v){
            count ++;
            if (count == 1){
                return i;
            }
        }
    }return -1;
}
void insert (int A[], int &n, int x, int k){
    if(n>= spt){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    printf("Nhap vi tri can chen: "); scanf("%d", &k);
    printf("Nhap gia tri can chen: "); scanf("%d", &x);
    
    if(k< 0){
        k =0;
    }
    if(k> n){
        k= n;
    }
    for(int i=n; i>k; i--){
        A[i] = A[i-1];
    }
    A[k]= x;
    n++;
    
}
void append(int A[], int &n, int x){
    if(n>= spt){
        printf("Nhap lai n: ");
        scanf("%d", &n);
    }
    printf("Nhap gia tri can bo sung: "); scanf("%d", &x);
    A[n]= x;
    n++;
}
void delete1 (int A[], int &n, int k){
    printf("Nhap vi tri can xoa: "); scanf("%d", &k);
    if(k<0){
        k =0;
    }
    if(k>n){
        k = n;
    }
    for(int i=k; i< n - 1; i++){
        A[i] =A[i+1];
    }
    n--;
}
void sort(int A[], int n){
	int temp;
    for(int i=0; i<n ; i++){
        for(int j = i+1; j< n; j++){
            if(A[i] > A[j]){
                temp = A[i];
                
                A[i] = A[j];
                A[j] = temp;
                
            }
            
        }
    }
}
int main(){
    int n, A[spt], luachon, k, v, x;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    while(n<= 0 || n> spt){
        printf("Nhap lai n:");
        scanf("%d", &n);
    }
    printf("1. Tao day so\n2. Hien thi day so\n3. Tim Max\n4. Tim Min\n5. Tim phan tu v\n6. Bo sung phan tu\n7. Chen phan tu vao vi tri k\n8. Xoa phan tu thu k\n9. Sap xep theo day so\n10. Thoat\n");
    printf("Chon chuc nang: ");
    scanf("%d", &luachon);
    switch (luachon){
        case 1: input (A, n);
            break;
        case 2: input (A, n);
			output (A, n);
            break;
        case 3: input (A, n);
			printf("Gia tri lon nhat la: %d", max(A, n));
            break;
        case 4: input (A, n);
			printf("Gia tri nho nhat la: %d", min(A,n));
            break;
        case 5: input (A, n);
			printf("Nhap gia tri can tim:");
            scanf("%d", &v);
            printf("Gia tri can tin o vi tri thu: %d", search(A,n,v));
            break;
        case 6: input (A, n);
			insert(A, n, x,k);
            printf("Mang sau khi chen la:\n");
            output(A,n);
            break;
        case 7: input (A, n);
			append(A, n, x);
            printf("Mang sau khi bo sung la:\n");
            output(A,n);
            break;
        case 8: input (A, n);
			delete1 (A, n, k);
            printf("Mang sau khi xoa la:\n");
            output(A,n);
            break;
        case 9: input (A, n);
			sort(A, n);
            printf("Mang sau khi sap xep la:\n");
            output(A,n);
            break;
        case 10: break;
    }
    return 0;
}

