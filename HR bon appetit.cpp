#include<stdio.h>
int main ()
{
	int n,i,bc,ba,j=0,k,c[100000];
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
		j=j+c[i];
	}
	scanf("%d",&bc);
	ba=(j-c[k])/2;
	if(ba==bc)
	{
		printf("Bon Appetit");
	}
	else
	{
		printf("%d",bc-ba);
	}
}
