#include <stdio.h>

//菜鸟的写法，容易想到,该方法建议遗忘。
int main(void)
{
	int num, j, i = 0;
	int tmp_len = 0;
	char tmp[30];

	printf("请随意输入一个数：\n");
	scanf("%d", &num);
	do{
		tmp[i] = (num % 10) + '0';
		i++;
	}while(num /= 10);

	tmp_len = i;

	for(i = 0;i < tmp_len; i++){
		for(j = i+1; j < tmp_len; j++){
			if(tmp[i] == tmp[j]){
				printf("所输入的数组中，重复出现了：%c\n", tmp[i]);
				break;
			}
		}
	}

	return 0;
}
