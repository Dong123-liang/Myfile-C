#include<stdio.h> 
int main()
{
	int n,i; 
	int s1=1;
	int s2=2;
	printf("�������е�����n:\n");
	scanf("%d",&n);
	int a[n];
	a[0]=s1;
	a[1]=s2;
	
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];
		
   }
   printf("���������е��±ꣻ\n");
   scanf("%d",&i);
   printf("%d",a[i - 1]);	
}
