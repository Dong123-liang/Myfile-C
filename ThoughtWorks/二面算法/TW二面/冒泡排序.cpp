#include<stdio.h>
int main()
{
	int temp,x,y,z;
	int i=0;
	int j=0;
				
	scanf("%d%d%d",&x,&y,&z);
	int a[3]={x,y,z};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(a[j+1]<a[j])
			 {
			 	temp=a[j];
			 	a[j]=a[j+1];
			 	a[j+1]=temp; 
			 }
		}
	}
 for(i=0;i<3;i++)
   printf("%d",a[i]);
   return 0; 	
}
