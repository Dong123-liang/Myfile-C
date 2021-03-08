#include <stdio.h>
int main()
{
    int n, i;
    printf("请输入一个正整数：");
    scanf("%d", &n);
    while (n != 1)
    {
        for (i = 2; i <= n ; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
                break;
            }
        }
        n = n / i;
    }
    printf("\n");
    return 0;
}
