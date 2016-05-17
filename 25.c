#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char *myitoa(int n, char *p)
{
	char temp;
	int i = 0, j = 0;

	if(n < 0){ //如果为负数，那么首地址应该存负号
		n = -n;
		p[i++] = '-';
		j = 1;
	}
	do{
		p[i++] = n % 10 + '0';
	}while(n /= 10);
	p[i] = '\0';

	for(--i; j <= i; i--,j++){
		temp = p[j];
		p[j] = p[i];
		p[i] = temp;
	}

	return p;
}
int main(void)
{
	int num;
	char str[10];

	printf("Enter a number:\n");	
	scanf("%d", &num);
	printf("output String : %s\n", myitoa(num, str));

	return 0;
}
