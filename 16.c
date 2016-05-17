#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int year, mon, day;
	int days_year[][12] = {
		{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
		{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
	int sum, i;
	do{	
		printf("请输入要查询的年月日: ");
		scanf("%d %d %d", &year, &mon, &day);
	}while((year <= 0)||(mon > 12)||(mon < 1)||(day > 31)||(day < 1));

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		for(i = 0, sum = day; i < mon-1;i++)
			sum += days_year[1][i];
	}else{
		for(i = 0, sum = day; i < mon-1;i++)
			sum += days_year[0][i];
	}
	printf("%4d-%02d-%02d 是这一年的第 %d 天！\n", year, mon, day, sum);
	return 0;
}
