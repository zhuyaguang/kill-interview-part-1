#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

void make_array(int a[], int len){
	
	srand(time(NULL));
	int i;
	for(i = 0; i < len; i++){
		a[i] = rand() % 100;
		printf("%d ", a[i]);
	}	
	printf("\n");
}

void find_max_min(int a[], int len){
	int i, max, min, max_index, min_index;
	max = min = a[0];
	for(i = 0; i < len; i++){
		if(max < a[i]){
			max = a[i];
			max_index = i;
		}	
		if(min > a[i]){
			min = a[i];
			min_index = i;
		}	
	}
	printf("--max[%d] = %d, min[%d] = %d\n",max_index, max, min_index, min);
}
int main(void)
{
	int arr[LEN];

	make_array(arr, LEN);
	find_max_min(arr, LEN);

	return 0;
}
