#include<stdio.h>
#include<conio.h>
main ()
{
int i,j,k,a[10]={1,2,3,5,4,7,6,9,8,10}
; for(i=1;i<=9;i++)
{
for(j=i-1;j>=0;j++)
{
if(a[i]<a[j])
{
k=a[j];
a[j]=a[i];
a[i]=k;
}}
}
for(i=0;i<=9;i++)
{
printf("%d  ",a[i]);
}
getch();
return 0;
}