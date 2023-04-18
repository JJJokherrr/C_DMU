#include <stdio.h>
int isPerfect(int num)
{
	int trynum,count=0;

	for(trynum=num-1;trynum>=1;trynum--)
	{
		if(num%trynum==0)
		{
			count += trynum; 
		}
	}
	if(count==num)
		return num;
}

main()
{
	int num=1000,i,trynum,j;
	for (i=1;i<=num;i++)
	{
		trynum=isPerfect(i);
		if (trynum==i)
		{
			printf("The number %d is a perfect number \r\n",i);
	        for (j=1;j<i;j++)
	        {
	        	if (i%j==0)
	        	printf("%d\r\n",j);
			}

		}
	        
		else
		    printf("The number %d is not a perfect number\r\n",i);
	}
	
}
