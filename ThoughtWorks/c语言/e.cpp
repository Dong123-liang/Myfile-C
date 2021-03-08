#include<stdio.h>
int main()
{
   int i,j,n; 
   int x=1;
   int z=0;
   scanf("%d",&n);
   int haitao[n];
   if(x<n)
   {
     scanf("%d",&x);
   }
    
	for(i=0;i<n;i++)
     {
	 for(j=0;j<n;j++)
      {
	   while(haitao[i]==haitao[j]&&i<j)
       z++;
       
      }
     }
     printf("%d",z);
     return 0;
}
   
	
	
 
