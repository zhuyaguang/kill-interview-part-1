#include <stdio.h>

int main(void)
{
	char str[50];
	char cpystr[50];
	printf("Enter a String: \n");
	scanf("%s", str);

	int i = 0;
	while(str[i] != '\0'){
		printf("%c", cpystr[i] = str[i]);
		i++;
	}
	printf("\n");
	return 0;
}
