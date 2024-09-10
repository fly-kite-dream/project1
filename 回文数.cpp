#include<stdio.h>
int main()
{
	int a;
	printf("请输入一个整数来判段是否为回文数");
	scanf_s("%d", &a);
	int A = a;//保留原始值
	int c = 0;
	while(a!=0)//这一段循环是重点！！！！！！
	{
		int b = a % 10;
		c = c * 10 + b;
		a = a / 10;
	}
	if(c==A)
	{
		printf("YES");
	}
	else if(c!=A)
	{
		printf("NO");
	}
	return 0;
}
