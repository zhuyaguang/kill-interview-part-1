#include <stdio.h>

char *my_strcpy(char *dest, char *str){
	int i;
	for(i = 0; (dest[i] = str[i]); i++)
		;
	return dest; 
}
int main(int argc, char *argv[])
{
	char dest[20];
	//my_strcpy(dest, argv[1]);
	printf("my_strcpy(\"%s\"): %s\n", argv[1], my_strcpy(dest, argv[1]));
	return 0;
}
