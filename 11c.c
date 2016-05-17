#include <stdio.h>

#define IABS(x) (x >= 0 ? x : -x) //定义一个计算绝对值的宏

void print(int size, char c) //size是菱形的半径，直径为size * 2 + 1
{
	int x, y;

	for(y = -size; y <= size; y++){
		for(x = -size; x <= size; x++){
			if(IABS(x) + IABS(y) <= size) 
				putchar(c);
			else
				putchar(' ');
		}
		putchar('\n');
	}
}

int main(void)
{
	int num;
	char c;
/*
 *这里如果先接受数字num，后接收字符c会出问题。因为输入缓冲区在接收完数字后，会接收回车\n，
 *当执行到第二个scanf函数时，%c会先去输入缓冲区中查看，而正好%c能接收字符\n,所以会直接返回
 *而无法接受用户输入的字符。但是像下面这样先接受字符就没有问题，这是因为：当执行到第二个
 *scanf函数的时候，%d不能接受输入缓冲区中遗留下来的\n，类型不匹配。所以不会结束。
 */
	printf("Input a charater : \n");
	scanf("%c", &c);
	printf("Enter a number : \n");
	scanf("%d", &num);

	print(num, c);

	return 0;
}
