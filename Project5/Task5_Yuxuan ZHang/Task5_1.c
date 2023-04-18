#include <stdio.h>
#include <stdlib.h>

void main()
{
	int arry[20]={8,47,56,9,8,4,1,3,5,7,8,85,7,45,89,21,45,78,95,1};
	// slection
	int i,j;
	int min,Posmin,Temp;
	for(i=0;i<20;i++)
	{
		Posmin=i;
		min=arry[i];
	    for (j=i+1;j<20;j++)
		{
			if(arry[Posmin]>arry[j])
			Posmin=j;
		} 
		Temp=arry[i];
		arry[i]=arry[Posmin];
		arry[Posmin]=Temp;
	} 
	for(i=0;i<20;i++)
	{
		printf("%d\n",arry[i]);
	}
	//bubble
	for(i=1;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			if(arry[j]>arry[j+1])
			{
				Temp=arry[j];
				arry[j]=arry[j+1];
				arry[j]=Temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<20;i++)
	{
		printf("%d\n",arry[i]);
	}
	//insert
	for(i=1;i<20;i++)
	{
		min=arry[i];
		Posmin=i-1;
		while((Posmin)>=0&&(min<arry[Posmin]))
		{
			arry[Posmin+1]=arry[Posmin];
			Posmin--;
		}
		arry[Posmin+1]=min;
	}
	printf("\n");
	for(i=0;i<20;i++)
	{
		printf("%d\n",arry[i]);
	}
}
