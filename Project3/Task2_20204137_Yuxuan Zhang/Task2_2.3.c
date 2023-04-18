#include <stdio.h>
unsigned long long int fibonacci(unsigned int n)
{   
	int i,fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (i=2;i<=n;i++)
    {
    	fib[i] = fib[i-1]+fib[i-2];
	}
	return fib[n-1];
	
}
main()
{
	unsigned int n;
	unsigned long long int i;
	scanf("%d",&n);
	printf("%llu",fibonacci(n));
	/*for (i=1000000;;i++)
	{
		printf("1");
		if(fibonacci(i)<0)
		{
			break;
			
			
		}
	}
	printf("The lagest number is %llu",fibonacci(i-1));*/
}
	
	

