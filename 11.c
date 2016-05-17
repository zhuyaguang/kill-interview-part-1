#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int len;
	printf("请输入一个奇数：");
	scanf("%d", &len);

	for(i = 0; i < len; i++){
		if(i <= len/2){
			for(j = 0; j < i+1; j++)
				printf("*");
			printf("\n");
		}else{
			for(j = len-i; j > 0; j--)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}
