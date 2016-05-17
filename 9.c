#include <stdio.h>

int main(void)
{
	int num, max;
	printf("请输入任意一自然数，输入0或负数终止: ");
	scanf("%d", &num);
	max = num;

	while(1){
		printf("请输入任意一自然数，输入0或负数终止: ");
		scanf("%d", &num);
		if(num <= 0)
			break;
		if(num > max)
			max = num;
	}
	printf("所输入的数中最大为：%d\n", max);
	return 0;
}
