#include <stdio.h>

long long sum(long long n)
{
	if(n == 0)
		return 0;
	else
		return (n + sum(n - 1));
}

int main(void)
{
	long long num;

	printf("Enter a num: \n");
	scanf("%lld", &num);

	printf("1+2+3+...+%lld = %lld\n", num, sum(num));
	printf("sum = (%lld+1)*%lld/2 = %lld\n", num, num, (num + 1) * num / 2);
	
	return 0;
}
