#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_arr(int arr[][5],int row)
{
	int i, j;
	srand(time(NULL));

	for(i = 0; i < row; i++){
		for(j = 0; j < 5; j++)
			printf("%2d ", arr[i][j] = rand() % 100);
		printf("\n");
	}
}

void turn_arr(int a[][5], int row)
{
	int i, j, tmp;

	for(i = 0; i < row; i++){
		for(j = i + 1; j < 5; j++){
			tmp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = tmp;
		}
	}
	printf("End change array is :\n");
	for(i = 0; i < row; i++){
		for(j = 0; j < 5; j++)
			printf("%2d ", a[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int row = 5;
	int arr[row][5];

	init_arr(arr, row);
	turn_arr(arr, row);

	return 0;
}
