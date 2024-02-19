#include<stdio.h>
#include<math.h>
int prime(int n){
    int m=sqrt(n);
    if(n<2){ return 0; }
    for (int i=2; i<=m; i++){
        if(n%i==0){
            return 0;}
    } 	
	return 1;
	
	
   
}
int validDate(int d, int m, int y){
    int maxd=31;
    if(d<1 || d>31|| m<1 || m>12){ return 0; }
    if(m==4 || m==6 || m==9 ||m==11 || y<1){
        maxd=30;
    }if(m==2){
        if(y%400==0 || (y%4==0 && y%100!=0)){
            maxd=29;
        }else{ maxd=28;}
    }
    return d<=maxd;
}

int main(){
    int luachon,n;
    printf("Nhap chon 1 so:\n1. Bai tap 47\n2. Bai tap 48\n3. Thoat\n");
    scanf("%d", &luachon);
    switch(luachon) {
    	case 1: 
    		do{
        		scanf("%d", &n);
    		}while(n<=0);
    			for(int i=2; i<=n; i++ ){
    				if(prime(i)){
        				printf("%d ", i);}
    				}
    		break;
    		
    	case 2: 
    	    int d, m,y, maxd;
    		printf("Nhap ngay thang nam: ");
    		scanf("%d/ %d/ %d", &d, &m, &y);
    		if(validDate(d,m,y)){
        		printf("valid date");
        
    		}else{
        	printf("Invalid date");
    		}
    		break;
    	case 3: break;
    }
    
    
    return 0;
}
