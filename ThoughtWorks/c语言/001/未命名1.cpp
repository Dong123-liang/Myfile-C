#include<stdio.h>
typedef struct{
 int a;
 double b;
 char C;
 short d;
}A;
typedef struct {
	char C;
	short d;
	int a;
	double b;
}B;
int main()
{
	printf("A�Ĵ�С��%d\n",sizeof(A));
    printf("B�Ĵ�СΪ��%d\n",sizeof(B)); 
	return 0;
}

