#include <stdio.h>
main(){
	printf("Please enter in a few words: ");
	char ch;
	int a=0,e=0,i=0,o=0,u=0,rest=0,sum;
	while((ch=getchar())!= EOF){
		switch(ch){
			case'a':
			a++;break;
			case'e':
			e++;break;
			case'i':
			i++;break;
			case'o':
			o++;break;
			case'u':
			u++;break;
			default:
			rest++;break;
		}
	}
	sum = a+e+i+o+u+rest;
	printf("Number of charasters: \na\t%d;e\t%d;i\t%d;o\t%d;u\t%d;rest\t%d",a,e,i,o,u,rest);
	printf("\nPercentages of total: \na\t%d%%;e\t%d%%;i\t%d%%;o\t%d%%;u\t%d%%;rest\t%d%%",100*a/sum,100*e/sum,100*i/sum,100*o/sum,100*u/sum,100*rest/sum);
}
