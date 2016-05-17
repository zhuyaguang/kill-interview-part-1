#include <stdio.h>
#include <math.h>

double myround(double n)
{
	if((n - floor(n)) > 0.5)
		return ceil(n);
	return floor(n);
}

int main(void)
{
	double num;

	printf("Enter a fractional: \n");
	scanf("%lf", &num);

	printf("myrounf(%f) = %f\n", num, myround(num));

	return 0;
}
