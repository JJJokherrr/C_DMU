#include <stdio.h>
#include <stdlib.h>
main(){
	int ip,i=0;
	printf("Please enter in a positive integer value: ");
	scanf("%d",&ip);
	if(ip<1){
		printf("Error");
		exit(0);
	}
    printf("\nInital value is %d",ip);
	while(ip!=1){
		if(ip%2==0){
			ip=ip/2;
		printf("\nNext value is %d",ip);
		}
		else{
		    ip = 3*ip+1;
		    printf("\nNext value is %d",ip);
		}
		i +=1;
	}
	if(ip==1)
		printf("\nFinal value 1, number of steps %d",i);	

}
