#include <stdio.h>

int main(void)
{
	int i = 0;
	int num[5];
	printf("input 5 number, end each one with \"Enter\": \n");
	do{
		scanf("%d", &num[i++]);
	}while(i != 5);

#if 0
	for(i = 0; i < 5; i++)
		printf("%d", num[i]);
	printf("\n");
#endif
	printf("turn to stack is :\n");
	for(i = 4; i >= 0; i--){
		printf("%d  ", num[i]);
	}
	printf("\n");

	return 0;
}
