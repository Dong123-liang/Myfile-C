#include<stdio.h>
int main()
{
	int i,j,n,m,a=0;
	int s[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]); 
	}
	for(i=0;i<n-1;j++)
	{
		if(s[i]==s[j])
		{
			a++;
		}
	}
	printf("%d",a);
}
