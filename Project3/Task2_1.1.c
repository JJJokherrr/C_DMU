#include <stdio.h>
#include <stdlib.h>
#define swap(t,x,y) t temp=x;x=y;y=temp;


 
 
int main(){
	char x = 'c', y = 'd';
	swap(char,x,y);
	printf("%c\r\n%c\n",x,y);
	return 0;
	
	
}
