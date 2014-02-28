/*
 * Filename:      1009.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 13:53
 * Description:
 *
 */
#include <stdio.h>

int main(void)
{
	int n, k, i;
	scanf("%d%d", &n, &k);
	unsigned long dp[17][2];
	dp[0][0] = dp[0][1] = 0;
	dp[1][0] = 1;
	dp[1][1] = k - 1;

	for (i = 2; i <= n; i++) {
		dp[i][0] = dp[i-1][1];
		dp[i][1] = (k-1) * (dp[i-1][0] + dp[i-1][1]);
	}

	printf("%lu\n", dp[n][1]);
}

