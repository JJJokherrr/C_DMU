#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int comparerun(const void *a,const void *b);
int comparekey(const void* a, const void* b);
int compareswim(const void *a,const void *b);
struct key
{
	char keyword[10];
	int run;
	int swim;
};
main(void)
{   
    int n,i;
	struct key array[3] = {{"Yuxan",95,25},{"Wp",13,14},{"c",67,68}};
	n=sizeof(array)/sizeof(array[0]);
	printf("Please choose a type to rise Key, 1 or 2: ");
	char ch[]=" ";
	scanf("%s",&ch);
	if (strcmp(ch,"1")==0)
	{
		qsort(array,n,sizeof(struct key),comparerun);
	    for (i=0;i<n;i++)
	    {
	        printf("%-15s %-10d %-10d\n", array[i].keyword, array[i].run, array[i].swim);	
	    }
	}
	if (strcmp(ch,"key")==0)
	{
		qsort(array,n,sizeof(struct key),comparekey);
	    for (i=0;i<n;i++)
	    {
	        printf("%-15s %-10d %-10d\n", array[i].keyword, array[i].run, array[i].swim);	
	    }
	}
	if (strcmp(ch,"2")==0)
	{
		qsort(array,n,sizeof(struct key),compareswim);
	    for (i=0;i<n;i++)
	    {
	        printf("%-15s %-10d %-10d\n", array[i].keyword, array[i].run, array[i].swim);	
	    }
	}
	
	
}
int comparerun(const void *a,const void *b)
{ // *a 
	//int *p1=(*(struct key*)a).run;
	//int *p2=(*(struct key*)b).run;
	return ((*(struct key*)a).run-(*(struct key*)b).run);
}
int comparekey(const void* a, const void* b)
{
 return strcmp(((struct key*)a)->keyword, ((struct key*)b)->keyword);
}
int compareswim(const void *a,const void *b)
{
	return ((*(struct key*)a).swim-(*(struct key*)b).swim);
}

