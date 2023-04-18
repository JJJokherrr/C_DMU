/*	
	Introduction:This program plays a game of blackjack with you.The
computer is the dealer and you are the victimer,I mean player.The dealer 
gets a card that you can see.The dealer than asks if you want another 
card by asking "Hit"or"Stand".If you choose hit ,the dealer gives you 
another card.If you choose to stand ,the dealer draws or stands, and the 
game is played out according to the cards you and the dealer have.As with
real blackjack,the dealer stands on 17.The winner is announced only after
both the player's and the dealer's hands are finished.
*/ 

//ANSI C standard header files appear next
#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

//Defined constants appear next
#define BELL '\a'
#define DEALER 0
#define PLAYER 1

/*Must keep two sets of totals for dealer and for player.The first set counts 
Aces as 1 and the second counts Aces as 11. Unlike "real world" blackjack,this
program doesn't allow some Aces to be 1 while others Aces are 11 in the same hand.
*/
#define ACELOW 0
#define ACEHIGH 1

/*Only one global variable is used in this entire program.The variable holds 0,
which means false initially.Once the user enter his or her name in initCardsScreen(),
this variable is set to 1(for true), so the name is never asked for again the rest 
of the program.
*/
int askedForName=0;	//False initially


//This program's specific prototypes
void dispTitle(void);
void initCardsScreen(int cards[52],int playerPoints[2],int dealerPoints[2],int total[2],int *numCards);
int dealCard(int *numCards,int cards[52]);
void dispCard(int cardDrawn,int points[2]);
void totalIt(int points[2],int total[2],int who);
void dealerGetsCard(int *numCards,int cards[52],int dealerPoints[2]);
void playerGetsCard(int *numCards,int cards[52],int playerPoints[2]);
char getAns(char mesg[]);
void findWinner(int total[2]);

//main() function
main()
{
	int numCards;	//Equals 52 at beginning of each game
	int cards[52],playerPoints[2],dealerPoints[2],total[2];
	char ans;	//For user's Hit/Stand or Yes/No response
	do{
		initCardsScreen(cards,playerPoints,dealerPoints,total,&numCards);
		dealerGetsCard(&numCards,cards,dealerPoints);
		printf("\n");
		playerGetsCard(&numCards,cards,playerPoints);
		do{
			ans=getAns("Hit or stand (H/S)?");
			if(ans=='H')
			{
				playerGetsCard(&numCards,cards,playerPoints);	
			}
		}	while(ans!='S');
		totalIt(playerPoints,total,PLAYER);	//Player's total
		do{
			dealerGetsCard(&numCards,cards,dealerPoints);		
		}	while(dealerPoints[ACEHIGH]<17);	//17:dealer stops
		totalIt(dealerPoints,total,DEALER);	//Dealer's total
		findWinner(total);
		ans=getAns("\nPlay again(Y/N)?");
	}	while(ans=='Y');
	return;
}

/* This function initializes the face values of the deck of cards by putting four sets of 1~13 in the
52-card array.Also clears the screen and displays a title.
*/
void initCardsScreen(int cards[52],int playerPoints[2],int dealerPoints[2],int total[2],int *numCards)
{
	int sub,val=1;	//This function's work variables
	char firstname[15];	//Holds uesr's first name
	*numCards=52;	//Holds running total of number of cards
	for(sub=0;sub<=51;sub++)	//	Counts from 0 to 51,four sets of 1~13
	{
		val=(val==14)?1:val;	//	If val is 14,reset to 1
		cards[sub]=val;
		val++;
	}
	for(sub=0;sub<=1;sub++)	 //	Counts from 0 to 1
	{
		playerPoints[sub]=dealerPoints[sub]=total[sub]=0;
	}
	dispTitle();
	if(askedForName==0) 	//Name asked for only once
	{
		printf("\nwhat is your first name?");
		scanf("%s",firstname);
		askedForName=1;	//Don't ask prompt again
		printf("OK,%s,get ready for casino action!\n\n",firstname);
		/*The next "getchar()" is very important!
		Which can discard newline,
		so you can safely ignore compiler warning here
		*/
		getchar();
	}
	return;
}


/*This function gets a card for the player and updates the player's points
*/
void playerGetsCard(int *numCards,int cards[52],int playerPoints[2])
{
	int newCard;
	newCard=dealCard(numCards,cards);
	printf("You draw: ");
	dispCard(newCard,playerPoints);
}

/*This function gets a card for the dealer and updates the dealer's points
*/
void dealerGetsCard(int *numCards,int cards[52],int dealerPoints[2])
{
	int newCard;
	newCard=dealCard(numCards,cards);
	printf("The dealer draws: ");
	dispCard(newCard,dealerPoints);
}

/* This function gets a card from the deck and stores it in
either the dealer's or the player's hold of cards
*/
int dealCard(int *numCards,int cards[52])
{
	int cardDrawn,subDraw;
	time_t t;	//Gets time for a random value
	srand(time(&t));	//Seeds random-number generator
	subDraw=(rand()%(*numCards));	//From 0 to numcards
	cardDrawn=cards[subDraw];
	//Puts top card in place of drawn one
	cards[subDraw]=cards[*numCards-1];
	(*numCards)--;
	return cardDrawn;
}

/*Displays the last-drawn card and updates points with it
*/ 
void dispCard(int cardDrawn,int points[2])
{
	switch(cardDrawn)
	{
		case(11):printf("%s\n","Jack");
		points[ACELOW]+=10;
		points[ACEHIGH]+=10;
		break;
		
		case(12):printf("%s\n","Queen");
		points[ACELOW]+=10;
		points[ACEHIGH]+=10;
		break;
		
		case(13):printf("%s\n","King");
		points[ACELOW]+=10;
		points[ACEHIGH]+=10;
		break;
		
		default:points[ACELOW]+=cardDrawn;
		
		if(cardDrawn==1)
		{
			printf("%s\n","Ace");
			points[ACEHIGH]+=11;
		}
		else
		{
			points[ACEHIGH]+=cardDrawn;
			printf("%d\n",cardDrawn);
		}
	}
	return;
}

/*Figures the total for player or dealer to see who won.
This function takes into account the fact that Ace is either
1 or 11
*/
void totalIt(int points[2],int total[2],int who)
{
/*The following routine first looks to see if the total points
counting Aces as 1 is equal to the total points  counting Ace as
11. If so,or if the total points counting Aces as 11 is more than
21,the program uses the total with Aces as 1 only.
*/
	if((points[ACELOW]==points[ACEHIGH])||(points[ACEHIGH]>21))
	{
		total[who]=points[ACELOW];	//Keep all Aces as 1
	}
	else
	{
		total[who]=points[ACEHIGH];	 //Keep all Aces as 11
	}
	
	if(who==PLAYER)	//Determines the message printed
	{
		printf("You have a total of %d\n\n",total[PLAYER]);
	}
	else
	{
		printf("The house stands with a total of %d\n\n",total[DEALER]);
	}
	return;
}

//Prints the winning player.
void findWinner(int total[2])
{
	if(total[DEALER]==21)
	{
		printf("The house wins.\n");
		return;
	}
	if((total[DEALER]>21)&&(total[PLAYER]>21))
	{
		printf("%s","Nobody wins.\n");
		return;
	}
	if((total[DEALER]>=total[PLAYER])&&(total[DEALER]<21))
	{
		printf("The house wins.\n");
		return;
	}
	if((total[PLAYER]>21)&&(total[DEALER]<21))
	{
		printf("The house wins.\n");
		return;
	}
	printf("%s%c","You win!\n",BELL);
		return;
}


//Gets the user's uppercase,single-character response
char getAns(char mesg[])
{
	char ans;
	printf("%s",mesg);	//Prints the prompt message passed
	ans=getchar();
	/*The next "getchar()" is very important!
	Which can discard newline,
	so you can safely ignore compiler warning here
	*/
	getchar();	
	// Next is convert the lowercase letters to upper case letters.
	return toupper(ans);	
}


//Clear everything off the screen
void dispTitle(void)
{
	int i=0;
	while(i<3)
	{
		printf("\n");
		i++;
	}
	printf("\n\n*Step right up to the Blackjack tables*\n\n");
	return;
}
