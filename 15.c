#include <stdio.h>

#define ROW 5
#define COL 5
int main(void)
{
	int i, j, tmp;
	int num[ROW][COL] = {
		{1, 6, 2, 3, 7},
		{2, 7, 3, 2, 2},
		{3, 2, 5, 2, 6},
		{3, 2, 6, 4, 2},
		{4, 3, 7, 4, 8}};

	for(i = 0; i < ROW ; i++){
		for(j = 0; j < COL; j++){
			printf("%2d ", num[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < ROW; i++){
		for(j = i+1; j < ROW; j++){
			tmp = num[i][j];
			num[i][j] = num[j][i];
			num[j][i] = tmp;
		}
	}
	printf("转化以后：\n");
	for(i = 0; i < ROW ; i++){
		for(j = 0; j < COL; j++){
			printf("%2d ", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
