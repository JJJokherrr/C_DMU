/*
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
main()
{
	//a
	float numbers[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	//b
	float* nPtr=0x00;
	float* ptr = numbers;
	//c
	int i = 0;
	for (i; i < 10; i++)
	{
		printf("%.1f\t", numbers[i]);
	}
	//d
	memcpy(nPtr, ptr, sizeof(float) * 10);
	//e
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%.1f\t", *(nPtr++));
	}
	//f
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%.1f\t", *(numbers + i));
	}
}
*/