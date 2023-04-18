#include<stdio.h>
#define MAX 100
main()
{
	FILE *fp_r,*fp_w;
	fp_r=fopen("4_4.txt","r");
	int n=5,k=0,i=0;
	
	char array[MAX+1],array1[MAX+1];
	while(fgets(array,MAX+1,fp_r)!=NULL)
	{
		k++;
		
	}
	//printf("%d",k);
	FILE *fp;
	fp=fopen("4_4.txt","r");
	
	while(fgets(array1,MAX+1,fp)!=NULL)
	{
		
		if(k-i-1<n)
		{
			//fputs(array,stdout);
			printf("%s\n",array1);
		}
		i++;
		//printf("%d\n",i);
		
	}
	
}
