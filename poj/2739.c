/*
 * Filename:      2739.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-03-17 10:34
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX	10001

int main(void)
{
	int	i, j, tmp, n, sum, cnt;
	int	prime[MAX];

	// init a prime array less than MAX
	for (i=0; i<MAX; i++)
		prime[i] = 1;
	for (i=2; i<MAX/2; i++) {
		if (prime[i]) {
			tmp = MAX / i;
			for (j=2; j<=tmp; j++)
				prime[i*j] = 0;
		}
	}
	
	while (scanf("%d", &n) && n != 0) {
		cnt = 0;

		if (prime[n])
			cnt++;

		for (i=2; i<n/2; i++) {
			if (!prime[i])
				continue;
			sum = i;
			for (j=i+1; j<n; j++) {
				if (!prime[j])
					continue;
				sum += j;
				if (sum == n) {
					cnt++;
					break;
				}
				if (sum < n)
					continue;
				if (sum > n)
					break;
			}
		}
		printf("%d\n", cnt);
	}

	exit(0);
}



