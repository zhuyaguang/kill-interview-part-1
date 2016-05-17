#include <stdio.h>

int func(int n)
{
	int count = 0;
	while(n != 0){
		if(n % 2 == 1)
			count++;
		n = n / 2;
	}
	return count;
}
int main(void)
{
	int num;
	printf("请输入一个自然数（非负整数）：\n");
	scanf("%d", &num);
	int i = func(num);
	printf("将该自然数转化为二进制数，含有%d个1\n", i);
	return 0;
}
