#include <stdio.h>

int main(void)
{
	int days_of_year[][13] = {
		{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
							 };
	int i, year, month, day, leapyear, sum;
	int flag;

	do{
		flag = 0;
		printf("请输入要查询的年月日, 如：2010-10-10: \n");
		scanf("%d-%d-%d", &year, &month, &day);
		if((year < 0)||(month < 0)||(month > 12)||(day < 0)||(day > 31)){
			printf(" 【警告】：输入错误！请重新输入！\n");
			flag = 1;
		}
	}while(flag);

	leapyear = ((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0);

	for(i = 1, sum = day; i < month; i++)
		sum += days_of_year[leapyear][i];

	printf("%4d-%02d-%02d 是这一年中的第 %d 天！\n", year, month, day, sum);

	return 0;
}
