#include<stdio.h>
#include<utility>

std ::pair <int,int>timX(int A[][100], int n, int x){
    if(n<1) 
		return {-1,-1};
    else{
    	for(int j=0;j<n;j++){
            if(A[n-1][j]==x) return {n-1,j};
        }
        for(int i=0;i<n;i++){
            if(A[i][n-1]==x) return {i,n-1};
        }
        return timX(A,n-1,x);
        return {-1,-1};
    	
    }	
    	
}
void intput(int A[][100], int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d]= ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
}

int main(){
    int A[100][100], n,x;
    do{
        scanf("%d", &n);
    }while(n>100);
    printf("Nhap x: ");
    scanf("%d", &x);
    intput(A,n);
    std::pair<int,int>rs=timX(A,n,x);
    printf("hang %d, cot %d", rs.first, rs.second);
    return 0;
}

