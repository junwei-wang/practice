/*
 * Filename:      sort.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-04-20 07:35
 * Description:   Insertion Sort
 *                Selection Sort
 *
 */
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int[], int size);
void selection_sort(int[], int size);
int pick_min(int[], int start, int end);
void swap(int[], int, int);
void prt_arr(int[], int size);

int main(void)
{
	int arr[] = {11, 8, 15, 4, 22, 3};
	prt_arr(arr, sizeof(arr)/sizeof(int));

//	insertion_sort(arr, sizeof(arr)/sizeof(int));
	selection_sort(arr, sizeof(arr)/sizeof(int));
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
