/*
 * Filename:      2479.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-26 16:42
 * Description:
 *
 */
#include <stdio.h>

int main(void)
{
	int t, n, i, j, a[50000], b[50000], c[50000];
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		scanf("%d", &a[0]);
		int max = b[0] = a[0];
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
		printf("%d\n", max);
	}

	return 0;
}

