#include <stdio.h>
#define SIZE 100
int linearSearch(int array[],int key,int size)
{
    int end;
	end=size-1;
	if(array[end] == key && size>0)
	{
		return end;
	}
	if(size>0){
		return linearSearch(array,key,size-1);
	}
	else
	return -1;
	
	
}



int main(void)
{
  int a[SIZE]={1,2,3,5,7,8,9,4,6,45,99,84,75,41,56}; 
  int x;
  
 printf("Please enter integer search key: ");
 int Key,index; 
 scanf("%d", &Key);
 index = linearSearch(a,Key,SIZE);
 if (index != -1) {
 printf("Found value at index %d\n", index);
 }
 else {
 puts("Value is not found");
 }
 }
