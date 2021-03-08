#include<stdio.h>
int f(int n)
{
 if(n==1)
   
   return 1;
      
   else if(n==2){
    return 2;
                 }
  else{
    return f(n-1)+f(n-2);
      }  
}

 int main()  
{
  int n;
  int b;
  printf("ÇëÊäÈënÖµ:");
  scanf("%d",&n);
  b=f(n);
  printf("b=%d",b);
  return 0; 
}
