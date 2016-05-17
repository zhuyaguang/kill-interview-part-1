#include <stdio.h>

//不能解决负数的问题。

int func(int n)
{
	int i = 0;
	do{
		n = n / 10;
		i++;

	}while(n > 0);
	return i;
}

int main(void)
{
	int num;
	printf("请输入任意一个自然数：\n");
	scanf("%d",&num);
	int a = func(num);
	printf("这个数是一个%d位数\n", a);
	return 0;
}

