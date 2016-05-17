#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	char p[20]; 
	printf("Enter a String: \n");	
	scanf("%s", str);
	
	printf("strcpy(dest, \"%s\"):%s\n", str, strcpy(p, str));
	return 0;
}
