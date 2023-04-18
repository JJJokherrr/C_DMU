#include <stdio.h>
main()
{
	int n,i,j;
    printf("Please enter in the size of your array: ");
    scanf("%d",&n);
    int arry[n],target;
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",&arry[i]);
	}
	printf("\nPlease enter in your target value: ");
	scanf("%d",&target);
	printf("\n");
	int* p=arry;
	for(i=0;i<=n-1;i++)
	{
		
		if (*p ==target )
		{
		    j++;
			printf("It is in the %dth position\r\n",i);	
		}
		p++;
		
	}
	if(j==0)
	{
		printf("Not Find!");
	}
}


