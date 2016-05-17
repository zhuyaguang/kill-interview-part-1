#include <stdio.h>

int main(void)
{
	int num, i = 0;
	int count = 0;

	printf("请输入1～100之间任意一个数:\n");
	scanf("%d", &num);

	for(i = 0; i <= num; i++){
		if(i % 10 == 9)
			count++;
		if((i / 10) == 9)
			count++;
	}
#if 0
	for(i = 1, count = 0; i <= num; i++)
		for(tmp = i; tmp != 0; tmp /= 10)
			if(tmp % 10 == 9)
				count++;
#endif
	printf("1 ~ %d之间的数中共有%d个9\n", num, count);	

	return 0;
}
