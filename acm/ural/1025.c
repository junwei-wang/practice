/*
 * Filename:      1025.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-16 22:09
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[101];

void quick_sort(int[], int, int);

int main(void)
{
	int n, i, sum = 0;
	scanf("%d", &n);

	for (i=0; i<n; i++)
		scanf("%d", &a[i]);
	quick_sort(a, 0, n-1);

	for (i=0; i<=n/2; i++) 
		sum += a[i] /2 + 1;	
		
	printf("%d\n", sum);
}

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
