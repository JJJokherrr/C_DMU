#include <stdio.h>
#include <math.h>
int SUMD(int a);

main(){
	int a,b;
	printf("Please enter in a integer: ");
	scanf("%d",&a);
	b = SUMD(a);
	printf("The sum of digits are %d",b);
}

int SUMD(int a){
	int b,i,j,k=0,sum=0;
	for(i=0;b>=0;i++){
		b = a - pow(10,i);
	}
	if(i==1)
	sum =a;
	else{
		for(j=i;j>0;j--){
		k = a/pow(10,(j-1));
		a = a-k*pow(10,(j-1));
		sum += k;
	}
	}
	
	return sum;
}

