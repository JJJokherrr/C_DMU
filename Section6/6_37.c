#include<stdio.h>

int recursiveMinimum(int*p,int*size)
{
	if(p<size)
	{
		if(p[0]<recursiveMinimum(p+1,size))
		return p[0];
		else
		return recursiveMinimum(p+1,size);
	}
	else
	    return p[0];
}

main()
{
	int a[]={5,8,7,95,74,85,74,82,412,0};
	printf("The min in array is %d",recursiveMinimum(a,&a[10]));
}
