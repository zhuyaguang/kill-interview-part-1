#include <stdio.h>

int main(void)
{
	int i;
	int count = 1;
	for(i = 1; i <= 200; i++){
		if(i % 3)
			printf("%3d,%c", i, (count++)%10 ? ' ' : '\n');
	}
	printf("\n");
	return 0;
}
