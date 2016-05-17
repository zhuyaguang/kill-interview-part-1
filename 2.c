#include <stdio.h>

int main(void)
{
	int i = 0;
	int a[32];
	int num; 

	printf("请输入你要转换的数十进制正整数：\n");
	scanf("%d", &num);
	while(num != 0){
		a[i] = num % 16;
		num = num / 16; 
		i++; 
	} 
	printf("转为十六进制为：0x");
	for(i--; i >= 0; i--){
		switch(a[i]){
			case 10:
				printf("A");
				break;
			case 11:
				printf("B");
				break;
			case 12:
				printf("C");
				break;
			case 13:
				printf("D");
				break;
			case 14:
				printf("E");
				break;
			case 15:
				printf("F");
				break;
			default:
				printf("%d", a[i]);
		}
	}

	printf("\n");
	return 0;
}
