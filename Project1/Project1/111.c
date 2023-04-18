# include <stdio.h>
main()
{
	double a;
	long double ADD(long double a){
		a = a + (long double)1;
		return a;
	}
	a = 1;
	a=ADD(a);
	printf("%f\n",a);
	int sizeofa;
	sizeofa = sizeof(a);
	printf("%d\n",sizeofa);
	sizeofa = sizeof(ADD(a));
	printf("%d\n",sizeofa);
}
