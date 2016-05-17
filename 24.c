#include <stdio.h>

int main(void)
{
	char operator;
	int a, b;
	printf("请输入一个运算符：\n");
	scanf("%c", &operator);

	printf("请输入参加运算的两个数：\n");
	scanf("%d %d", &a, &b);

	switch(operator){
		case '+':
			printf("运算结果为：%d\n", a+b);
			break;
		case '-':
			printf("运算结果为：%d\n", a-b);
			break;
		case '*':
			printf("运算结果为：%d\n", a*b);
			break;
		case '/':
			printf("运算结果为：%d\n", a/b);
			break;
	}
	return 0;
}
