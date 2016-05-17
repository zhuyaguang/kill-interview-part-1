#include <stdio.h>

void dis(int a, char c)
{
	int b = a / 2;
	int i, j, k;
	for(i = 1; i <= a; i++){
		if(i % 2 == 1){
			for(j = 0; j < b; j++)
				printf("  ");
			for(k = 0; k < i; k++)
				printf("%c ", c);
			b--;
			printf("\n");
		}
	}

	int m = 1;
	for(i = a - 2; i > 0; i--){
		if(i % 2 == 1){
			for(j = 0; j < m; j++)
				printf("  ");
			for(k = i; k > 0; k--)
				printf("%c ", c);
			m++;
			printf("\n");
		}
	}
}

int main(void)
{
	int d; 
	char c;
/*
 *这里如果先接受数字num，后接收字符c会出问题。因为输入缓冲区在接收完数字后，会接收回车\n，
 *当执行到第二个scanf函数时，%c会先去输入缓冲区中查看，而正好%c能接收字符\n,所以会直接返回
 *而无法接受用户输入的字符。但是像下面这样先接受字符就没有问题，这是因为：当执行到第二个
 *scanf函数的时候，%d不能接受输入缓冲区中遗留下来的\n，类型不匹配。所以不会结束。
 */
	printf("please input a character\n");
	scanf("%c", &c);
	printf("Enter a number for rows\n");
	scanf("%d", &d);

	while(d % 2 == 0){
		printf("%d % 2 == 0 please enter a odd number!\n", d);
		scanf("%d", &d);
	}

	dis(d, c);

	return 0;
}
