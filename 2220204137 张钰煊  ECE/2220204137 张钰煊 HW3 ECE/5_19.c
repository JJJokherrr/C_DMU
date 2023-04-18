#include <stdio.h>
void ROA(int i,int j){
	int save;
	save = j;
	
	for(;i!=0;i--){
		j=save;
		for(;j!=0;j--){
			printf("*");
		}
	printf("\n");	
	}
}
main(){
	int s1,s2;
	printf("Please enter in side1 and side2: ");
	scanf("%d%d",&s1,&s2);
	ROA(s1,s2);
}
