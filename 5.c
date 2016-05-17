#include <stdio.h>

int main(void)
{
	int num;
	int grade;
	
	printf("请输入考试分数：\n");
	scanf("%d", &num);

	grade = num / 10;
	switch(grade){
		case 10:
		case 9:
			printf("成绩为A\n");
			break;
		case 8:
			printf("成绩为B\n");
			break;
		case 7:
			printf("成绩为C\n");
			break;
		case 6:
			printf("成绩为D\n");
			break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
			printf("成绩为F\n");
			break;
		default:
			printf("成绩必须为0～100之间的自然数\n");
	}

	return 0;
}
