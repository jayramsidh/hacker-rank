#include <stdio.h>



#include<stdlib.h>
int main(void) {
	int t,n,j,i,a[106];
	a[100]=0,a[101]=0;a[102]=0,a[103]=0;a[104]=0,a[105]=0;
	scanf("%d",&t);
	for(j=1;j<=t;j++)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;)
	    {
	        if(a[i]==0)
	        {
	         
	         i=i+1;
	         
	        }
	        if(a[i]==1)
	        {
	           if(a[i+1]==1||a[i+2]==1||a[i+3]==1||a[i+4]==1||a[i+5]==1)
	           {
	            printf("NO\n");
	            i=i+200;
	            }
	            else
	            {
	                i=i+1;
	            }
	        } 
	        
	    }
	     if(i==n) 
	    {
	        printf("YES\n");
	    }
	}
	return 0;
}


