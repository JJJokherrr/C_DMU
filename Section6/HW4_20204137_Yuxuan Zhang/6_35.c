#include <stdio.h>
void printArray(int b[],int size)
{
	if(size>0)
	{
		printArray(b,size-1);
	}
	printf("%d",b[size]);
}
main(){
	int a[]={1,2,3,4,5};
	printArray(a,4);
}
