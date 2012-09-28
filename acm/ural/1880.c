/*
 * Filename:      1880.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 19:32
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 集合求并集，交集
// 可以使用二分法查找，可以使用归并的方法
//
int n1, n2, n3;
int a1[4000], a2[4000], a3[4000];
int tmp;
int i, j, k;
int pos;
int start;

// 二分查找
int in_arr(const int arr[], int start, int end, int key)
{
	int mid;

	while(start <= end) {
		mid = (start + end) / 2;

		if (arr[mid] == key)
			return mid;
		if (arr[mid] > key)
			end = mid - 1;
		else
			start = mid + 1;
	}

	return -1;
}

int main(void)
{
	scanf("%d", &n1);
	for (i=0; i<n1; i++) 
		scanf("%d", &a1[i]);

	
	scanf("%d", &n2);
	j = 0;
	start = 0;
	for (i=0; i<n2; i++) {
		scanf("%d", &tmp);
		pos = in_arr(a1, start, n1-1, tmp);
			
		if (pos >= 0) {
			a2[j++] = tmp;
			start = pos + 1;
		}
	}


	scanf("%d", &n3);
	k = 0;
	start = 0;
	for (i=0; i<n3; i++) {
		scanf("%d", &tmp);
		pos = in_arr(a2, start, j-1, tmp);


		if (pos >= 0) {
			a3[k++] = tmp;
			start = pos + 1;
		}
	}


	printf("%d\n", k);
}

