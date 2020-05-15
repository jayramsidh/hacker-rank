#include<stdio.h>
int main ()
{
	int i,j,n,m,s=1,k=0,a[10],b[6]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=5;i++)
	
	{k=0;
		for(j=0;j<n;j++)
		
		{
			if(a[j]==i)
			{
				k++;
			}		
	}b[i]=k;    }
	m=b[1];
for(i=1;i<=5;i++)
{
	if(m<b[i]) 
	{
		m=b[i];
		s=i;
		
	}
}
printf("%d",s);



}
