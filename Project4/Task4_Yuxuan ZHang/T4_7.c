#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a,const void *b);
int comparech(const void *a,const void *b);
void insort(void* a,int sizefarry,int size,int(*Function)(const void*,const void*))
{
int i,iPos;
//char* arrTemp;
char* arrTemp=(char *)malloc(size);
for (i=1;i<sizefarry;i++)
{
iPos=i-1;

//*arrTemp=((char*)a+size*(i-1));
memcpy(arrTemp,(char*)a+size*(i),size);
// printf("%d",*arrTemp);
while((iPos>=0) && ((*Function)( (char*)a+size*(iPos),(char *)arrTemp ) ) >0 ) 
{
//((char*)a+size*(iPos))==((char*)a+size*(iPos-1));
memcpy((char *)a+size*(iPos+1),(char *)a+size*(iPos),size);
iPos--;
}
//((char*)a+size*(i-1))==*arrTemp;
memcpy((char *)a+size*(iPos+1),arrTemp,size);

}
free(arrTemp);


}
// int compareChar(const void *a,const void *b)
// {
// return (*(char*)a<*(char*)b);
// }

main()
{
int a[]={1,5,7,2,3,43,23,12};
char b[]="agdsfgdjicxof";
int n1=sizeof(a)/sizeof(int);
int n2=sizeof(b)/sizeof(char)-1;
//printf("%d\n",n2);
//printf("%d\n",sizeof(b));
insort(a,n1,sizeof(int),compare);
insort(b,n2,sizeof(char),comparech);
int i;
for(i=0;i<n1;i++)
{
printf("%d\t",a[i]);
}
// printf("\n");
printf("%s",&b[0]);

}
int compare(const void *e1,const void *e2)
{

return *(int*)e1-*(int*)e2;
}
int comparech(const void *a,const void *b)
{
return (*(char*)a-*(char*)b);
}
void swap(char*e1,char*e2,int with)
{
char temp = *e1;
* e1=* e2;
*e2 = temp;
e1++;
e2++;
}
