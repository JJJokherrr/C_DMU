#include <stdio.h>
#include <string.h>
main()
{
	char ch[500000];
	int p=0,i,j=1,end,k=0,leng[10000];
	printf("Please enter in a english text: ");
	//scanf("%[^\n]s",ch);
	while((ch[i]=getchar())>=0)
	{
		i++;
	}
	end = strlen(ch);
	ch[end] = ' ';
	//printf("%d\n",strlen(ch));
    //printf("%s\n",ch);
    
	for(i=0;i<=end;i++)
	{
		if ((ch[i]<='z'&&ch[i]>='a')|| (ch[i]<='Z'&&ch[i]>='A'))
			k++;
			
		if (ch[i] == ' ') 
		{
		leng[k]++;
		k=0;
		
		}
		
	}
	for(i=1;i<26;i++)
	{
		printf("length %d: %d occurrences.\n",i,leng[i]);
	}
}
