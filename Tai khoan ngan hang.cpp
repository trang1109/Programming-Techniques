#include<stdio.h>
int main(){
    int CustID, Withdrawals;
    char AccountType;
    fflush(stdin);
    scanf("%d", &CustID);
    fflush(stdin);
    scanf("%d", &Withdrawals);
    fflush(stdin);
    scanf("%c", &AccountType);
    double n = 2.50 * (Withdrawals - 4);
    if(CustID >= 1000 || CustID <= 9999){
        printf("CustID: %d\n", CustID);
    }else{ printf("Incorrect CustID\n"); }
    if(Withdrawals >= 0){
    	switch (AccountType){
            case 'S': 
				printf("BankCharge: %lf\n", 5.00 + n);
            	break;
            case 'C': 
				printf("BankCharge: %lf\n", 7.50 + n);
				break;
            default: 
				printf("BankCharge: 0.00\n");
				break;
        }
    }else{ printf("Incorrect Withdrawals\n"); }
    return 0;
}
    
    


    

