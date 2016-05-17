#include <stdio.h>

void turns(int num, int radix)
{
	int i = 0; char str[30];
	char table[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	//char table[] = "0123456789ABCDEF";
	do{
		str[i++] = table[num % radix];
	}while(num /= radix);

	switch(radix){
		case 8:
		printf("0");
			break;
		case 16:
		printf("0x");
			break;
	}

	for(--i; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
}
int main(void)
{
	int num;
	int radix;
	printf("Enter a Number: \n");
	scanf("%d", &num);
	printf("Enter the radix: \n");
	scanf("%d", &radix);
	
	turns(num, radix);
	return 0;
}
