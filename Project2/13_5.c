#include <stdio.h>
#define SUM(x,y) x+y
main(){
	int x,y;
	printf("Please enter in to integer x and y: ");
	scanf("%d%d",&x,&y);
	printf("The sum of x and y is %d",SUM(x,y));
}
