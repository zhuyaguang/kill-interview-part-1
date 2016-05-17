#include <stdio.h>


int is_leap_year(int year){

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}
int main(void)
{
	int year;
	printf("Enter a year:\n");
	scanf("%d", &year);

	int tmp = is_leap_year(year);
	if(tmp == 1)
		printf("The year \"%d\" is a leapYear!\n", year);
	else
		printf("The year \"%d\" is Not a leapYear!\n", year);

	return 0;
}
