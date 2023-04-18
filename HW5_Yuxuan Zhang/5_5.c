#include <stdio.h>
main()
{
	char ch1[100],ch2[100],ch3[100],ch4[100],ch5[100],ch6[100];
	printf("Please enter in six numbers: ");
	scanf("%s%s%s%s%s%s",&ch1,&ch2,&ch3,&ch4,&ch5,&ch6);
	int i1,i2,i3,i4,i5,i6;
	sscanf(ch1,"%d",&i1);
	sscanf(ch2,"%d",&i2);
	sscanf(ch3,"%d",&i3);
	sscanf(ch4,"%d",&i4);
	sscanf(ch5,"%d",&i5);
	sscanf(ch6,"%d",&i6);
	printf("%d\t%d\t%d\t%d\t%d\t%d",i1,i2,i3,i4,i5,i6);
	int sum=i1+i2+i3+i4+i5+i6;
	double average=(double)sum/6;
	printf("\nThe sum is %d and the average is %f",sum,average);
}
