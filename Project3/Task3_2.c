#include <stdio.h>

void rev();

main()
{
	printf("Please enter in a strings:");
	rev();
}

void rev()
{
	char ch;
	if((ch=getchar())!=EOF)
	{
		rev();
		putchar(ch);
	}
	
}


