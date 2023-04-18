#include <stdio.h>
#include <math.h>

float R_QE(float a,float b,float c);

void main(){

	float a,b,c,e,root1,root2;
	printf("Please enter in the coefficients of an equation like ax^2+bx+c=0: ");
	scanf("%f\t%f\t%f",&a,&b,&c);
	e = R_QE(a,b,c);
	printf("The discriminant is %f",e);
	if (e<0)
		printf("The roots are complex numbers.");
	if (e>0){
		printf("The roots are real.");
		root1 = (-b+e)/(2*a);
		root2 = (-b-e)/(2*a);
		printf("The roots are %f %f.",root1,root2);
	}
	if(e==0)
		printf("\nThe roots are real.");
		root1 = (-b+e)/(2*a);
		printf("\nThe roots is %f.",root1);
		
}

float R_QE(float a,float b,float c){
	float d;
	d = pow(b,2.0)-4.0*a*c;
	return d;
}
