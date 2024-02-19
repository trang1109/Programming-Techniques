#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *p;
	FILE *fp;
	char ch;
	
	p= fopen("D:/Upper.txt", "r");
	if(p == NULL){
		printf("K mo dc tep");
		exit(1);
	}
	fp= fopen ("D:/fname.txt", "w");
	if(fp == NULL){
		printf("K the mo tep nay");
		exit(2);
	}

	while(1){
		ch = fgetc(p);
		if(ch == EOF) break;
		else {
			if (ch <128) ch += 128;
			else if (ch>128) ch -=128;
			fputc(ch,fp);
		}
		
	}
	fclose(p);
	fclose (fp);
	fp= fopen ("D:/fname.txt", "r");
	if(fp == NULL){
		return 0;
	}
	p= fopen("D:/Upper.txt", "w");
	if(p== NULL) return 0;
	
	while(1){
		ch = fgetc(fp);
		if(ch == EOF) break;
		else {
			fputc(ch,p);
			printf("%c", ch);
		}
		
	}
	printf("\nDa ma hoa\n");
	
	fclose (fp);
	fclose(p);
	
	p= fopen("D:/Upper.txt", "r");
	if(p == NULL){
		printf("K mo dc tep");
		exit(0);
	}
	fp= fopen ("D:/fname.txt", "w");
	if(fp == NULL){
		printf("K the mo tep nay");
		exit(0);
	}
	
	while(1){
		ch = fgetc(p);
		if(ch == EOF) break;
		else {
			if (ch <128) ch -= 128;
			else if (ch>128) ch +=128;
			fputc(ch,fp);
			printf("%c", ch);
		}
		
	}
	printf("\nDa giai ma");
	//printf("\nFile %s decrypted successfully", str);
	fclose(p);
	fclose (fp);
	
}
