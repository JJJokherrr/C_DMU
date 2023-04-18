#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct iArry
{
	int mark;
	int content;
	struct iArry *next;
}iArry;

void show_iArry(iArry* head);
iArry* init(int n);
iArry* find_iArry(iArry* head, int n);
iArry* add_iArry(iArry* head,iArry* New,int n);
iArry* del_iArry(iArry* head,int n);

void main()
{
	// Initialize
	printf("Please enter in the int arry's size: ");
	int n,pos;
	scanf("%d",&n);
	struct iArry* head;
	struct iArry* next;
	head = init(n);
	//Search
	printf("Please enter in int Target position: ");
	scanf("%d",&pos); 
	iArry* Target;
	Target = find_iArry(head,pos);
	printf("%d\n",Target->content);
	//Add position
	printf("Please enter in the insert number position: ");
	scanf("%d",&pos);
	// New int number
	struct iArry New;
	int New_number;
	printf("Please enter in the insert number: ");
	scanf("%d",&New_number);
	New.content = New_number;
	struct iArry* New1;
	New1 =&New;
	// Add it
	head = add_iArry(head,New1,pos);
	show_iArry(head);
	//Del position
	printf("Please enter in the del number position: ");
	scanf("%d",&pos);
	head = del_iArry(head,pos);
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
			next->mark = i;
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
// Searching...
iArry* find_iArry(iArry* head, int n)
{
	
	if(n<1)
	{
		return NULL;
	}
	while(--n && head != NULL)
	{
		head = head->next;
	}
	return head;
}
// Add...
iArry* add_iArry(iArry* head,iArry* New,int n)
{
	if(n==1)
	{
		New->next = head;
		return New;
	}
	if(n>1)
	{
		iArry* itemp;
	itemp = find_iArry(head,n-1);
	if(itemp != NULL)
	{
		New->next = itemp->next;
		itemp->next = New;
		return head;
	}
	else
	{
		return NULL;
	}
	}
	
}
// Delete...
iArry* del_iArry(iArry* head,int n)
{
	iArry* old,* itmp;
	if(n==1)
	{
		head = head->next;
		return head;
	}
	else
	{
		itmp = find_iArry(head,n-1);
		old = itmp->next;
		itmp->next = old->next;
		return head;
	}
	
}
