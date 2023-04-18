#include <stdio.h>
#define swap(t,x,y)do{t temp=x;x=y;y=temp;}while(0)


	int main(void) {
	char ch[1000];
	int i = 0,j = 0;
	while (scanf("%c", &ch[i]) == 1) {
		i++;
	}
	for (; i >= 0; i--) {
		printf("%c", ch[i]);
	}
}

