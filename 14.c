#include <stdio.h>
#include <stdlib.h>

#define LEN 64

int main(void)
{
	char str[LEN], max_char;
	int i, max_index;

	printf("Enter a String:    ");
	scanf("%s", str);
	max_char = str[0];
	
	for(i = 0; str[i] != 0; i++){
		if(max_char < str[i]){
			max_char = str[i];
			max_index = i;
		}
	}
	for(i = max_index - 1; i >= 0; i--){
		str[i+1] = str[i];
	}

	str[0] = max_char;
	printf("End Strig is:    %s\n", str);

	return 0;
}
