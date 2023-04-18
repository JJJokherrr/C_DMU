#include<stdio.h>
#include<stdlib.h>

void copystr(char* init, char* copy, int size);
main()
{
	char ch1[100];
	printf("Please enter in a string: ");
	scanf("%s",&ch1);
	char ch2[sizeof(ch1)];
	copystr(ch1,ch2,sizeof(ch1));
	printf("The copy one is:\n");
	int i;
	printf("%s",ch2);
	
}
void copystr(char* init, char* copy, int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*(copy+i)=*(init+i);
	}
}
