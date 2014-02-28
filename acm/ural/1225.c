/*
 * Filename:      1225.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 13:24
 * Description:   DP for Fibonacci
 * Attention:     使用unsigned long, 使用long long 不正确
 *
 */

#include <stdio.h>

int main(void)
{
	int n; 
	unsigned long dp[50];
	int i;
	scanf("%d", &n);

	dp[0] = 0;
	dp[1] = 2;
	for (i = 2; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];

	}

	printf("%lu\n", dp[n]);
}

