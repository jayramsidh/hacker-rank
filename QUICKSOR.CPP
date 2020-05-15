#include<stdio.h>
#include<conio.h>
int partition(int* a,int start,int end)
{
int pivot=a[end];
int k,i,pindex=start;
for(i=start;i<=end-1;i++)
{
  if(a[i]<=pivot)
  {
  k=a[pindex];
  a[pindex]=a[i];
  a[i]=k;pindex++;
  }
}
k=a[pindex];
a[pindex]=a[end];
a[end]=k;
return pindex;
}

void quicksort(int* a,int start,int end)
{
int pindex;
if(start<end)
{
pindex=partition(a,start,end);
quicksort(a,start,pindex-1);
quicksort(a,pindex+1,end);
}
}
main ()
{
int a[]={1,4,2,6,5,11,9,8,0,3},i;

int size=sizeof(a)/sizeof(a[0]);
quicksort(a,0,size-1);
for(i=0;i<=9;i++)
{
printf("%d  ",a[i]);
}
getch();
return 0;
}
