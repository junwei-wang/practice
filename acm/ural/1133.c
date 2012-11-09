/*
 * Filename:      1133.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-10-20 21:57
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 已知fi, fj, 用二分法

int swap(int *i, int *j)
{
	int tmp = *i;
	*i = *j;
	*j = tmp;
}

int swap(long long *i, long long *j)
{
	long long tmp = *i;
	*i = *j;
	*j = tmp;
}


int main(void)
{
	int i, j, n;
	long long fi, fj;
	int index;
	long long l = -3000000000, r = 3000000000, mid;

	scanf("%d %lld %d %lld %d", &i, &fi, &j, &fj, &n);
	
	if (i > j) {
		swap(&i, &j);
		swap(&fi, &fj);
	}

	while (l <= r) {
		mid = (l + r) / 2; 

		for (

	}

}
