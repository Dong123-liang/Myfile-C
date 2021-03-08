#include<stdio.h>
int f(long long n)
{
 if(n==1||n==2)
   
   return 1;
      
   else if(n==3){
    return 2;
                 }
  else{
    return f(n-1)+f(n-2);
      }  
}
 int main()  
{
  long long n,i,b[1000],x;
  long long  count=0;
  scanf("%lld",&x);
  for(i=0;i<x;i++)
  {
   scanf("%lld",&n);
   b[i]=f(n); 
 }
  for(i=0;i<x;i++)
  {
  	count=0;
  	while(b[i]!=0)
  	{
	  b[i]=b[i]%10;
	   count++;
    }
     printf("%d\n",count);
  }
  return 0; 
}
