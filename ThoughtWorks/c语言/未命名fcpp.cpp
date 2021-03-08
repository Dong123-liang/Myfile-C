#include<stdio.h>
int main() 
{
	int n;
	int i=1,j;
	scanf("%d",&n);
	if(i<=n)
	{
	  for(j=2;j<=n;j++)
	    {
		   if(i%j==0)
		    {
			printf("%d",i);
		    i++;
		    }
	    }
    } 
    return 0;
}
