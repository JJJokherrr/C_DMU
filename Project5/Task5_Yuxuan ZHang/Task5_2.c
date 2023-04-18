#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void main()
{
	FILE *fp_r1,*fp_r2;
	fp_r1=fopen("5_2test1.txt","r");
	fp_r2=fopen("5_2test2.txt","r");
	char f1[MAX],f2[MAX];
	int k;
	while( fgets(f1,MAX,fp_r1)!=NULL && fgets(f2,MAX,fp_r2)!=NULL )
	{
		//k++;
		
		if(strcmp(f1,f2)!=0)
		{
			printf("%s",f1);
			printf("%s\n",f2);
		}
	}
	//printf("%d",k);
}
