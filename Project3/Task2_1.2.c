#include <stdio.h>
#include <stdlib.h>
#define DPS(c,n) c&(0x01 << n) 

void main(){
	unsigned char a = 'c';
	printf("%d",DPS(a,0));
}

