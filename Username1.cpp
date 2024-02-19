#include<stdio.h>
#include<conio.h>
#define userID 'a'
#define passID 'b'
int main(){
    
    char username, password;
    do{
        
        printf("Nhap username:" ); scanf("%c", &username);
        fflush(stdin);
        printf("Nhap password:"); scanf("%c",&password );
    }while(username != userID && password != passID);
    printf("Success. Go mail inbox!");
    getch();
    return 0;
}

    
