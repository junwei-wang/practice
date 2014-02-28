/*
 * Filename:      1119.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 18:43
 * Description:   DP
 *
 */
#include <stdio.h>
#include <string.h>
#include <math.h>

int c[100][2];

int search(int k, int a, int b)
{
	int i;
	for (i = 0; i < k; i++)
		if (c[i][0] == a && c[i][1] == b) 
			return 1;

	return 0;
}

int main(void)
{
	int n, m, k, i, j, dp[1001][1001];
	scanf("%d %d %d", &n, &m, &k);
	memset(dp, 0, sizeof(dp));

	for (i = 0; i < k; i++) 
		scanf("%d %d", &c[i][0], &c[i][1]);

	int tmp;
	for (i = 0; i <= n; i++)
		for (j = 0; j <= m; j++) 
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (!search(k, i, j))
				dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
			else {
				tmp = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
				dp[i][j] = (tmp > dp[i-1][j-1]+1) ? tmp : (dp[i-1][j-1]+1);
			}

	printf("%d\n", (int)round((n + m - 2*dp[n][m] + dp[n][m] * sqrt(2)) * 100));
}

