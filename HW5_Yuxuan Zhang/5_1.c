#include <stdio.h>
#include <stdlib.h>
typedef struct iArry
{
	int content;
	struct iArry *next;
}iArry;

void show_iArry(iArry* head);
iArry* init(int n);
iArry* rev_iArry(iArry* head);

main()
{
	iArry* head;
	int n;
	printf("How many structure will you type in (int): ");
	scanf("%d",&n);
	head = init(n);
	show_iArry(head);
	printf("Now we reverse the structure\n");
	head=rev_iArry(head);
	show_iArry(head);
}
// Show a iArry...
void show_iArry(iArry* head)
{
	int i;
	iArry* next=head;
	while(next != NULL)
	{
		printf("%d\n",next->content);
		next = next->next;
		//printf("%d\n",next->content);
		
	}
}
// Initiallize a iArry...
iArry* init(int n)
{
	struct iArry *next,*head;
	int content,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&content);
		if(i==0)
		{
			head = malloc(sizeof(iArry));
			next = head;
			next->content = content;
			
		} 
		if(i>0)
		{
			//printf("Next one: ");
			next->next=malloc(sizeof(iArry));
			next=next->next;
			next->content = content;
		}
	}
	next->next=NULL;
	return head;
}
// Reverse a structure
iArry* rev_iArry(iArry* head)
{

	iArry* prev=NULL;
	iArry* current=malloc(sizeof(iArry));
	current=head;
	prev = NULL;
	while( current != NULL)
	{
		iArry* next=malloc(sizeof(iArry));
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	free(current);
	return prev;
	
}
