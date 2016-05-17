#include <stdio.h>

int main(void)
{
	int i = 0;
	int tmp = 0;
	for(i = 1; i <= 200; i++){
		if(i % 3 != 0){
			printf("%3d  ", i);
			tmp++;
		}
		if(tmp == 10){
			printf("\n");
			tmp = 0;
		}
	}
	printf("\n");
	return 0;
}



