#include <stdio.h>

int main(void)
{
	int i, m;
	int count = 1;
	printf("1～100之间的素数有：\n");
	for(i = 2; i <= 100; i++){
		for(m = 2; m < i; m++){
			if(i % m == 0)
				break;
		}
		if(m >= i)
			printf("%2d %c", i, (count++) % 10 ? ' ' : '\n');
	} 
	printf("\n");

	return 0;
}
