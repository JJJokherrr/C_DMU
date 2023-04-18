#include<stdio.h>
main()
{
	double value1=20.4568,value2;
	//a
	double* dPtr;
	//b
	dPtr=&value1;
	//c
	printf("%f\n",*dPtr);
	//d
	value2=*dPtr;
	//e
	printf("%f\n",value2);
	//f
	printf("%d\n",&value1);
	//g
	printf("%d",dPtr);
	//They are the same.
}
