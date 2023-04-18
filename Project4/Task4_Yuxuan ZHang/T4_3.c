#include <stdio.h>
main()
{
	int a=1,b=2,c=3;
	int temp;
	
	
	temp=a;
	a=c;
	c=b;
	b=temp;
	printf("a=%db=%dc=%d",a,b,c);
	
}
