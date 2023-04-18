#include <stdio.h>
#include <math.h>
void SeD(int a);

void main(){
	int a,b,c,d,e,k[6];
	/*printf("Please enter in two integers a and b: ");
	scanf("%d",&a);
	scanf("%d",&b);
	c = a/b;
	d = a%b;
	printf("\n%d",c);
	printf("\n%d\n",d);*/
	printf("Please enter in integer e: ");
	scanf("%d",&e);
    SeD(e);
} 

void SeD(int a){
	int b,i,j,k,sum=0;
	for(i=0;b>=0;i++){
		b = a - pow(10,i);
	}
	if(i==1)
	printf("%d",a);
	else{
		for(j=i;j>0;j--){
		k = a/pow(10,(j-1));
		a = a-k*pow(10,(j-1));
		if(j!=i)
		printf("%d\t",k);
	}
	}
}
