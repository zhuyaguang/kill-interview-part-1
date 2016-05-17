#include <stdio.h>

int main(void)
{
	int i,j;
	int len;
	do{
		printf("请输入一个奇数:");
		scanf("%d", &len);
	}while(len % 2 == 0);

	for(i = 0; i < len; i++){
		if(i <= len / 2){
			for(j = 0; j < i * 2 + 1; j++){
				printf("*");
			}
			printf("\n");
		}else{
			for(j = (len-i) * 2 - 1; j > 0; j--){
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
