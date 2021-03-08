#include<stdio.h>
int main()
{
    int n,a=0;
    while(scanf("%d",&n)!=EOF)
    {
        a=0;
        for(int i=1;i<=n;i++)
            a+=i;
        printf("%d\n",a);
    }
    return 0;
}
