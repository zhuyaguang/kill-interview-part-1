#include <stdio.h>

int main(void)
{
	char str[30];
	int i, count = 0;

	printf("Enter a String:\n");
	scanf("%s", str);

	for(i = 0; str[i] != '\0'; i++){
		count++;	
	}
	for(i = count; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");

	return 0;
}

