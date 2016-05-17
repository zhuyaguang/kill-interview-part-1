#include <stdio.h>

int main(void)
{
	int a, b;
	char c;

	printf("Input Formula e.g. 3 + 4\n");
	scanf("%d %c %d", &a, &c, &b);

	switch(c){
		case '+':
			printf("The answer is %d\n", (a + b));
			break;
		case '-':
			printf("The answer is %d\n", (a - b));
			break;
		case '*':
			printf("The answer is %d\n", (a * b));
			break;
		case '/':
			printf("The answer is %d\n", (a / b));
			break;
		case '%':
			printf("The answer is %d\n", (a % b));
			break;
		default:
			printf("只能输入+-*/这四种运算符\n");
	}

	return 0;
}

