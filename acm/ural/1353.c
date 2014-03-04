/*
 * Filename:      1353.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 22:35
 * Description:   dp[i][j] 有i位非零，表示j有多少中方法
 * dp[i][j] = dp[i-1][j-0] +... +dp[i-1][j-9]
 *
 */
#include <stdio.h>

int main(void)
{
	int n;
	int dp[10][82];
	memset(dp, 0, 820);
	scanf("%d", &n);

	if (n == 1)
		return 10;
	if (n == 90)
		return 9;

	if (n > 40)
		n = 81 - n;

	dp[1][1] = 9;
	for (i = 1; i <= 9; i++)
		for (j = 2; j <= 40; j++)
			for (k = 0; k <= 9; k++)
				if (j >= k)
					dp[i][j] += dp[i-1][j-k];
				
}

