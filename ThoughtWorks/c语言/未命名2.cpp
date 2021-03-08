#include<stdio.h>
int main()
{
	int n,i=0,sum=0;
    while(scanf("%d",&n)!=EOF)
    { 
	 if(i<=n) 
	 {
	 
		sum=i+sum;
		i++;
		printf("%d",sum);
     }
    }
	
	return 0;
}
