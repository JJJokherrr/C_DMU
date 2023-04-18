#include<stdio.h>
for(i=1;i<number;i++)
	{
		int iTemp;
		iTemp=a[i];
		int iPos=i-1;
		while((iPos>=0) && (iTemp<a[iPos]))
		{
			a[iPos+1]=a[iPos];
			iPos--;
		}
		a[iPos+1]=iTemp;
	}
