#include<stdio.h>

enum a 
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} day;
int main()
{
	int day;
    // ����ö��Ԫ��
    for (day = MON; day <= SUN; day++) {
        printf("ö��Ԫ�أ�%d \n", day);
    }
}
