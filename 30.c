#include <stdio.h>

int main(void)
{
	int i, n, sum = 0;

	printf("Enter a Number: \n");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		sum += i;
	printf("====result : num = %d\n", sum);

	return 0;
}
