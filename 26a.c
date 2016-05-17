#include <stdio.h>


int main(int argc, char *argv[])
{
	char dest[50];
	int i;
	for(i = 0; (dest[i] = argv[1][i]); i++)
		;
	printf("%s\n", dest);
	return 0;
}
