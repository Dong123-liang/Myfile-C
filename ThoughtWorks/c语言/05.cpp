#include<stdio.h>
int main()
{
	int t,i,n;
	int a=2;
	int b=1;
	printf("���������еĵ�n��:\n");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
	{
		t=a+b;
		b=a;
		a=t;
   }
   printf("��n���ֵΪ%d",t);
   return 0; 
	 
}
