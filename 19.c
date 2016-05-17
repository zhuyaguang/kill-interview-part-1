#include <stdio.h>

int main(void)
{
	long long num;
	int i, digit[10] = {0};

	printf("Enter a number:\n");
	scanf("%lld", &num);

	do{
		i = num % 10;
		digit[i]++;
	}while(num /= 10);
#if 0
	for(i = 0; i < 10; i++){
		printf("%d ", i);
	}
	printf("\n");
#endif
	printf("0 1 2 3 4 5 6 7 8 9 \n");

	for(i = 0; i < 10; i++)
		printf("%d ", digit[i]);
	printf("\n");

	return 0;
}

