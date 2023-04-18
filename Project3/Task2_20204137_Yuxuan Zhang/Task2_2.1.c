#include <stdio.h>
#define min(a,b) (a<=b)? a:b
int LCM(int a,int b)
{
	int trya;
	// printf("%d",max(a,b));
	for(trya=1;;trya++)
	{
		if( (trya%a==0) && (trya%b==0) )
		{
			break;
		}
	}
	return trya;
}
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",LCM(a,b));
}
