#include <stdio.h>
#include <math.h>
int SORT(int a,int b,int c){
	int d;
	if(pow(a,2)+pow(b,2)==pow(c,2)||pow(c,2)+pow(b,2)==pow(a,2)||pow(a,2)+pow(c,2)==pow(b,2))
	return 1;
	else
	return 0;
	
}
main(){
	int a,b,c,judge;
	printf("Please enter in three sides of triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	judge = SORT(a,b,c);
	printf("%d\n",judge);
	if(judge==1)
	printf("It is a right-triangle");
	else
	printf("It is not a right-triangle");
}
