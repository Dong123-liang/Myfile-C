#include <stdio.h>

int main()
{

    enum color { red=1, green, blue }favorite_color;

    /* ask user to choose color */
    printf("��������ϲ������ɫ: (1. red, 2. green, 3. blue): ");
    scanf("%d", &favorite_color);

    /* ������ */
    switch (favorite_color)
    {
    case red:
        printf("��ϲ������ɫ�Ǻ�ɫ");
        break;
    case green:
        printf("��ϲ������ɫ����ɫ");
        break;
    case blue:
        printf("��ϲ������ɫ����ɫ");
        break;
    default:
        printf("��û��ѡ����ϲ������ɫ");
    }

    return 0;
}
