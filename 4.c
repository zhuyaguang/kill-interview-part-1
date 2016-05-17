#include <stdio.h>

int main(void)
{
	int a, b, c, d, max, min;
	printf("请输入4个整数：\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	printf("四个数中最大值为：%d\n", max);
	
	min = (a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	printf("最小值为：%d\n", min);

	return 0;
}
