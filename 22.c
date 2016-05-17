#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num[10], *p;
	int sum = 0;

	srand(time(NULL));
	for(p = num; p < num + 10; p++){
		printf("%d ", *p = rand() % 5);
	}
	printf("\n");
#if 0
	int i;
	for(p = num, i = 0; p + i < num + 10; i++)
		sum += *(p + i);
	printf(" sum = %d\n", sum);
#endif
	for(p = num; p < num +10; p++)
		sum += *p;
	printf("sum = %d\n",sum);
	return 0;
}
