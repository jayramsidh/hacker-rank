#include<stdio.h>
main ()

{
	int n,i,j,k=0,c[100],a[101];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	for(i=0;i<n;i++)
	{    a[c[i]]=0;
		for(j=i+1;j<n;j++)
		{    if(c[j]!=0)
		      {
			    
			if(c[i]==c[j])
			{
			   a[c[i]]++;
			   c[j]=0;	
			}
		}
		}k=k+(a[c[i]]+1)/2;
	}printf("%d",k);
}
