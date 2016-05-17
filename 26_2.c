#include <stdio.h>

char *my_strcpy(char *dest, const char *str){
	int i;
	for(i = 0; (dest[i] = str[i]); i++)
		;
	return dest;
}
int main(void)
{
	char str[20];
	char dest[20];
	printf("Enter a String:\n");
	scanf("%s", str);

	printf("my_strcpy(dest, \"%s\"): %s\n", str, my_strcpy(dest, str));
	
	return 0;
}
