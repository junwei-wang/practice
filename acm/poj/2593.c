/*
 * Filename:      2593.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-26 16:51
 * Description:
 *
 */
#include <stdio.h>

int main(void)
{
	int n, i, j, a[100000]; 
	long b[100000], c[100000];
	scanf("%d", &n);

	while (n != 0) {
		scanf("%d", &a[0]);
		long max = b[0] = a[0];
		for (i = 1; i < n; i++) {
			scanf("%d", &a[i]);
			if (b[i-1] > 0)
				b[i] = b[i-1] + a[i];
			else
				b[i] = a[i];

			if (max < b[i] && i <= n - 2)
				max = b[i];
		}

		for (i = 1; i < n; i++) {
			if (b[i] < b[i-1])
				b[i] = b[i-1];
		}

		c[n-1] = a[n-1];
		max += c[n-1];
		for (i = n - 2; i > 0; i--) {
			if (c[i+1] > 0)
				c[i] = c[i+1] + a[i];
			else
				c[i] = a[i];

			if (c[i] + b[i-1] > max)
				max = c[i] + b[i-1];
		}
		printf("%ld\n", max);

		scanf("%d", &n);
	}

	return 0;
}

