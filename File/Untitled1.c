#include <stdio.h>
#include <stdlib.h>
main(){
	FILE* fp=fopen("try.txt","r");
	char c;
	char ch[10];
	c=fgetc(fp);
	fgets(ch,10,fp);
	puts(ch);
	//putchar(c);
	printf("%c",c);
	fclose(fp);
	FILE* fin=fopen("ZYX.txt","w");
	char name[]="ZYX";
	int number = 37;
	int height = 180;
	fprintf(fin,"%s",name);
	fclose(fin);
}
