#include <stdio.h>

int main(void)
{
	char str[30], a;
	int i, count = 0;

	printf("Enter a String and a char: e.g. happy p\n");
	scanf("%s %c", str, &a);

	for(i = 0; str[i] != '\0'; i++){
		if(str[i] == a)
			count++;
	}
	printf("The '%c' appeared %d times in \"%s\"!\n", a, count, str);

	return 0;
}
