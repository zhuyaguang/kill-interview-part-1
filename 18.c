#include <stdio.h>

int main(void)
{
	int num , i = 0;
	int digit[10] = {0};
	
	printf("Enter a number:\n");
	scanf("%d", &num);

	do{
		digit[num %10]++;
	}while(num /= 10);
	
	while(i != 10){
		if(digit[i] > 1){
			printf("%d  ", i);
		}
		i++;
	}
	printf("\n");

	return 0;
}
