#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[] = {17, 3, 5, 1, 7, 9, 23, 11, 15, 13};
	int len = sizeof(arr)/sizeof(arr[0]);
	int i, max, min;
	int index_max, index_min;
	max = arr[0];	
	for(i = 0; i < len; i++){
		if(max < arr[i]){
			max = arr[i];
			index_max = i;
		}
	}
	printf("数组最大值为：%d,其下标为：%d\n", max, index_max);
	min = arr[0];
	for(i = 0; i < len; i++){
		if(min > arr[i]){
			min = arr[i];
			index_min = i;
		}
	}
	printf("数组最小值为：%d,其下标为：%d\n", min, index_min);
	return 0;
}
