#include<stdio.h>
#include<string.h>
main()
{
	int i,j,k=0;
	char sentences[]="the cat sat on the mat";
	char word[]="the";
	int leng1=strlen(sentences);
	int leng2=strlen(word);
	//printf("%d",leng2);
	//printf("The word is %s\n",word);
	for(i=0;i<leng1-leng2+1;i++)
	{   
	    char test[]=" ";
	    //printf("1");
	    for(j=0;j<leng2;j++)
	    {
	    	test[j]=sentences[i+j];
	    	//printf("%s\n",test);
		}
		if(strcmp(word,test)==0)
		{
		   //printf("The word is %s\n",word);
		   k++;	
		   //printf("%d",k);
		}
		
	}
	if(k>0)
	{
		printf("The word is %s\n",word);
		printf("The sentence is %s\n",sentences);
		printf("The word occurs %d times.",k);
	}
	else
	{
		printf("The word is %s\n",word);
	    printf("The sentence is %s\n",sentences);
		printf("Not found!");
	}
	
	
}
