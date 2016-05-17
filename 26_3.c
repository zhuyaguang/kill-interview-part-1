#include <stdio.h>

char *my_nstrcpy(char *dest, const char *str, int num)
{
	int i, j = 0;
	for(i = num-1; str[i] != '\0'; i++, j++)
		dest[j] = str[i];
	dest[j] = '\0';
	return dest;
}
int main(void)
{
	char dest[20];
	char str[20];
	int num;
	printf("Enter a String : \n");
	scanf("%s", str);
	printf("Enter Start digit num: \n");
	scanf("%d", &num);
	printf("my_nstrcpy(dest, \"%s\", %d): %s\n", str, num, my_nstrcpy(dest, str, num));
	return 0; 
}
