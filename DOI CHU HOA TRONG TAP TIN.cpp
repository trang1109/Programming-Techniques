#include <stdio.h>
#include <process.h>

#include <ctype.h>
void transFile (FILE *fp, FILE *p){
	char ch;
	while (ch!= EOF){
		ch= fgetc(fp);
		ch = toupper (ch);
		if(!feof(fp)){
			fputc(ch, p);
		}else break;
	}
}
int main (int agrc, char *agrv[]){
    FILE *fp;
    FILE *p;
    char *q;
    char str[100];
    fp = fopen("D:/Upper.txt", "r");
    if(fp== NULL){
        printf("K mo duoc tep");
        exit(0);
    }
    
    p= fopen ("D:/Lower.txt", "w");
    if(p== NULL){
        printf("K mo duoc tep");
        exit(0);
    }
    transFile(fp,p);
    printf("Da in xong");
    fclose(fp);
    fclose(p);
}
