#include <stdio.h>
#include <string.h>
/*int testPalindrome(char* c)
{
	char *end,*s,*s_end;
	int i,length;
	length=strlen(c);
	end = c+strlen(c)-1;
	s = c+1;
	s_end = end-1;
	if(length==1 || length==0)
	return 1;
	char a[strlen(c)-2];
	for(i=1;i<=length-2;i++)
	{
		a[i-1] = *s;
		s++;
	}
	printf("%s\n",a);
	if (*c==*end && (testPalindrome(a)==1))
	{
		return 1;
	}
	else
	return -1;
	
}*/



int testPalindrome(char c[])
{
	int i,k;
	int length = strlen(c);
	/*for(k=0;k<=strlen(c)-1;k++)
	{
		if(c[k]==' '||c[k]==','||c[k]=='.')
		{
			for(i=k;k<=strlen(c)-1;)
		}
	}*/
	length = strlen(c);
	char a[strlen(c)-2];
	if(length==1 || length==0)
	return 1;
	for(i=0;i<=length-3;i++)
	{
		a[i] = c[i+1];
	}
	a[length-2]='\0';
	if ((c[0]==c[length-1]) && (testPalindrome(a)==1))
	{
		//printf("1\n");
		return 1;
	}
	else
	return 0;
	
}

main()
{
	char c[]="asdfghjklkjhgfdsa";
	printf("%s\n",c);
	//printf("%d",strlen(c));
	printf("%d",testPalindrome(c));
}
