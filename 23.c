#include <stdio.h>

int main(void)
{
	char str[2][20];
	int i, j;

	printf("Enter 2 String:\n");
	scanf("%s %s", str[0], str[1]);

	char max = str[0][0];
	for(i = 0; i < 2; i++)
		for(j = 0; str[i][j] != '\0'; j++)
			if(max < str[i][j])
				max = str[i][j];
	
	printf("The bigest char is : %c\n", max);
	return 0;
}
