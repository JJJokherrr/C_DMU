#include <stdio.h>
#include <stdlib.h>
// Selection Sort
main(){
	int i;
	int arry[10];
	printf("Please enter in a arry with ten numbers: ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arry[i]);
	}
	
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
		
		for(q=0;q<10;q++)
		{
		printf("%d\t",arry[q]);
		}
		printf("\n");	
		
    }
    // 10 9 8 7 6 5 4 3 2 1
	
} 
