/*
 * Filename:      sort.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-17 07:27
 * Description:   Insertion Sort
 *                Selection Sort
 *
 */
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int[], int size);
void selection_sort(int[], int size);
void quick_sort(int[], int begin, int end);
int pick_min(int[], int start, int end);
void swap(int[], int, int);
void prt_arr(int[], int size);

int main(void)
{
	int arr[] = {11, 8, 15, 4, 22, 3};
	prt_arr(arr, sizeof(arr)/sizeof(int));

//	insertion_sort(arr, sizeof(arr)/sizeof(int));
//	selection_sort(arr, sizeof(arr)/sizeof(int));
	quick_sort(arr, 0, sizeof(arr)/sizeof(int) - 1);
	prt_arr(arr, sizeof(arr)/sizeof(int));

	exit(0);
}

/*
 * Insertion Sort
 */
void insertion_sort(int arr[], int size)
{
	int i, j;
	int key;

	for (j=1; j<size; j++) {
		key = arr[j];
		i = j - 1;
		while (i>=0 && arr[i]>key) {
			arr[i+1] = arr[i];
			i--;
		}

		arr[i+1] = key;
	}
}

/*
 * Selection Sort
 */
void selection_sort(int arr[], int size)
{
	int i;
	int min_pos;

	for (i=0; i<size-1; i++) {
		min_pos = pick_min(arr, i, size);
		swap(arr, i, min_pos);
	}
}

/*
 * Quick Sort
 */
void quick_sort(int arr[], int begin, int end)
{
	int low = begin, high = end;
	int key = arr[begin];

	if (low >= high)
		return;
	
	while (low < high) {
		while (low < high && arr[high] > key)
			high--;
		if (low < high)
			arr[low++] = arr[high];

		while (low < high && arr[low] < key)
			low++;
		if (low < high)
			arr[high--] = arr[low];
	}

	arr[low] = key;
	if (begin < low - 1)
		quick_sort(arr, begin, low - 1);
	if (low + 1 < end)
		quick_sort(arr, low + 1, end);
}

/*
 * pick out the minimum element int arrlist arr[start]...arr[end]
 */
int pick_min(int arr[], int start, int end)
{
	int i, min, pos;
	
	min = arr[start];
	pos = start;

	for (i=start+1; i<end; i++)
		if (arr[i] < min) {
			min = arr[i];
			pos = i;
		}

	return pos;
}

/*
 * swap arr[i] and arr[j]
 */
void swap(int arr[], int i, int j)
{
	int tmp;

	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

/*
 * print the element int array
 */
void prt_arr(int arr[], int size)
{
	int i;

	printf("print array\n");
	for (i=0; i<size; i++)
		printf("%d\n", arr[i]);
}
