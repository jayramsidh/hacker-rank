#include<stdio.h>
#include<conio.h>
main ()
{
long int i=0,j,x,e=9,s=0,m,a[10]={1,2,3,4,5,6,7,8,9,32768}
;m=(s+e)/2;
scanf("%ld",&x);
while(s<=e)
{
if(a[m]==x)
{
printf("the index of %ld is %ld",a[m],m+1);
i=1;
break;
}
if(a[m]<x)
s=m+1;
if(a[m]>x)
e=m-1 ;
m=(s+e)/2;
}
if(i==0)
printf("sorrrryyyy");
getch();
return 0;
}