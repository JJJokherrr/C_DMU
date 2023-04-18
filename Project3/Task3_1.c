#include <stdio.h>
#define a 1

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
	for(i=0;i<=n-1;i++)
	{
		if (arry[i] ==target )
		{
		    j++;
			printf("It is in the %dth position\r\n",i);	
		}
		
		
	}
	if(j==0)
	{
		printf("Not Find!");
	}
	
}
