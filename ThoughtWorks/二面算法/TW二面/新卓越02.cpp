#include<stdio.h>
int main(){
	int a=1,b=2,c=3;
	if(a>b) swap(a,b);//swap���ǽ���������
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	cout<<a<<' '<<b<<' '<<c;
	return 0;
}
