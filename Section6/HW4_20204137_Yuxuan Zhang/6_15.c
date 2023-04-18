#include <stdio.h>
main()
{
	int ax[10]= {1,2,3,4,5,6,7,8,9,10};
	int ay[10]= {9,1,3,8,5,6,7,8,78,15};
	
	
	
	// Now to use two for loops to read all 10*10 choise.
	int i,j,same1,same2;
	printf("The first array\tThe second array\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(ax[i]==ay[j])
			{
				same1=i;
				same2=j;
				printf("%dth\t\t%dth\tthe number is %d\n",same1+1,same2+1,ax[i]);
			}
			
		}
	}
}
