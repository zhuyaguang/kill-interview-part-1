#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	//e.g.  a + b 这里的符号是：argv[2]
	switch(*argv[2]){
		case '+':
			printf("add = %d\n", atoi(argv[1]) + atoi(argv[3]));
			break;
		case '-':
			printf("sub = %d\n", atoi(argv[1]) - atoi(argv[3]));
			break;
		case 'x':
			printf("mul = %d\n", atoi(argv[1]) * atoi(argv[3]));
			break;
		case '/':
			printf("div = %d\n", atoi(argv[1]) / atoi(argv[3]));
			break;
		default:printf("输入错误！！！\n");
				break;
	}
	return 0;
}
