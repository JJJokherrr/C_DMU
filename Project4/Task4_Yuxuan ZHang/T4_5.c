#include<stdio.h>
main(){
	char ch[]=" ";
	int i;
	int arry[10];
	printf("Please enter in a arry with ten numbers: ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arry[i]);
	}
	printf("Please enter in a flag: ");
	scanf("%s",&ch);
	if(strcmp(ch,"-r")!=0)
	{
		int i;
    int *p=arry[0],min=0,j,minarry,q;
    for(i=0;i<9;i++)
    {   
	    min=i;
    	minarry=arry[i];
    	for(j=i+1;j<10;j++)
    	{
    	
    	    if(arry[j]<minarry)
    	    {
    	    minarry = arry[j]; 
    	    min = j;
		    }
		
	    }
    	arry[min]=arry[i];
		arry[i]=minarry;
	
    }
    for(q=0;q<10;q++)
		{
		printf("%d\t",arry[q]);
		}
		printf("\n");
	}
	else
	{
	int *p=arry[0],max=0,j,maxarry,q;
    for(i=0;i<9;i++)
    {   
	    max=i;
    	maxarry=arry[i];
    	for(j=i+1;j<10;j++)
    	{
    	
    	    if(arry[j]>maxarry)
    	    {
    	    maxarry = arry[j]; 
    	    max = j;
		    }
		
	    }
    	arry[max]=arry[i];
		arry[i]=maxarry;
	
    }
    for(q=0;q<10;q++)
		{
		printf("%d\t",arry[q]);
		}
		printf("\n");
	}
}
