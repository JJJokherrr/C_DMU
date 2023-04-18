#include <stdio.h>
#include <string.h>

main(){
	//arry[]={1,2,3,4,5,6,7,8};
	int size_arry,i;
	printf("Please enter in a size of the arry: ");
	scanf("%d",&size_arry);
	//int *arry = (int*)malloc(size_arry*sizeof(int));
	int arry[size_arry];
	for(i=0;i<size_arry;i++){
		scanf("%d",&arry[i]);
		//printf("%d",)
	}
	// TEST !!!
	/*for(i=0;i<size_arry;i++){
		//printf("%d",arry);
		printf("%d\t",arry[i]);
	}*/
	//free(arry);
	printf("Your arry is: \n");
	for(i=0;i<size_arry;i++)
	{
		printf("%d\t",arry[i]);
	}
} 
