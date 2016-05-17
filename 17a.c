#include <stdio.h>

int main(void)
{
	int i, num;
	int digit[10] = {0};

	printf("Enter a Number: ");
	scanf("%d", &num);

	do{
		i = num % 10;
		digit[i]++;//or digit[num % 10]++;
	}while(num /= 10);

	for(i = 0; i < 10; i++){
		if(digit[i] != 0){
			printf("数字中%d出现了%d次\n", i, digit[i]);
		}
	}

	return 0;
}
