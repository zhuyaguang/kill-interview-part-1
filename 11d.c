#include <stdio.h>

#define IABS(x) (x >= 0 ? x : -x) //定义一个计算绝对值的宏

void print(int size, char c) //size是菱形的半径，直径为size * 2 + 1
{
	int x, y;

	for(y = -size; y <= size; y++){
		for(x = -size; x <= size; x++){
			if(IABS(x) + IABS(y) <= size)  //|x| + |y| <= size
				putchar(c + (size - IABS(x) - IABS(y)));
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

	printf("Input a charater : \n");
	scanf("%c", &c);
	printf("Enter a number : \n");
	scanf("%d", &num);

	print(num, c);

	return 0;
}
