#include <stdio.h>
#include <stdlib.h>
// Players...
typedef struct players{
	char name[20];
	int counter;
	struct players* next_player;
}Player;
void Game_over()
{
	printf("Game Over You are the losser");
	exit(0);
}
void Game_begain()
{
	printf("Welcome to the Blac Jack game\n");
}
// Set the Players...(Over than 2)
Player* set_palyer(int n)
{
	Player* head,* next;
	int i;
	for(i=0;i<n;i++)
	{
	if(i==0)
	{
		head=
	}
		head->next_player=malloc(sizeof(Player));
		
	}
}
