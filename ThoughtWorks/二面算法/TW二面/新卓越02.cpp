#include<stdio.h>
int main(){
	int a=1,b=2,c=3;
	if(a>b) swap(a,b);//swap就是交换两个数
	if(a>c) swap(a,c);
	if(b>c) swap(b,c);
	cout<<a<<' '<<b<<' '<<c;
	return 0;
}
