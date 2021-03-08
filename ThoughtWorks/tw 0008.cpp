#include<stdio.h>
int main()
{
	int t,i,n;
	int a=2;
	int b=1;
	printf("请输入数列的第n项:\n");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		t=a+b;
		b=a;
		a=t;
   }
   printf("第n项的值为%d",t);
   return 0; 
	 
}
