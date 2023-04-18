#include <stdio.h>
float CRH(int hour){
	float charge;
	int t;
	t=hour;
	if(hour<8)
	charge = 25+0.5*t;
	if(hour>=8 && hour<13)
	charge = 25+5*(t-8)+0.5*t;
	if(hour>=13 && hour<24)
	charge = 50+0.5*t;
	if(hour>=24 && hour<34)
	charge = 50+5*(t-24)+0.5*t;
	if(hour>=34 && hour<48)
	charge = 100+0.5*t;
	if(hour>=48 && hour<58)
	charge = 100+5*(t-48)+0.5*t;
	if(hour>=58 && hour<=72)
	charge = 150+0.5*t;
	return charge;
}

main(){
	int a,b,c,n;
	float charge;
	printf("Please enter in three car's time: ");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("\nCar\tHours\tCharge\t");
	for(n=1;n<=3;n++){
		if(n==1){
		charge = CRH(a);
		printf("\n%d\t%d\t%f",n,a,charge);	
		}
		if(n==2){
		charge = CRH(b);
		printf("\n%d\t%d\t%f",n,b,charge);	
		}
		if(n==3){
		charge = CRH(c);
		printf("\n%d\t%d\t%f",n,c,charge)	;
		}
		
	}
	printf("\nTOTAL\t%d\t%f",a+b+c,CRH(a)+CRH(b)+CRH(c));
}
