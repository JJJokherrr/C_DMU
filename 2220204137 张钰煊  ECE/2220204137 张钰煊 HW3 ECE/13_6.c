#include <stdio.h>
#define HIB(x,y) x<y? x:y
main(){
	int x,y;
	printf("Enter in two integer to get a smaller one: ");
	scanf("%d%d",&x,&y);
	printf("The smaller one is %d",HIB(x,y));
} 
