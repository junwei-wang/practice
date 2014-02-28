/*
 * Filename:      1146.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 19:31
 * Description:
 *
 */
#include <stdio.h>

int main(void)
{
	int dp[100][100], data[100][100];
	int n, i, j, k, l;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &data[i][j]);

	//int a,b,c,d;
	int max = data[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = i; k < n; k++)
				for (l = j; l < n; l++) {
					if (k == i && l == j)
						dp[k][l] = data[i][j];
					else if (k == i && l > j) 
						dp[k][l] = dp[k][l-1] + data[k][l];
					else if (l == j && k > i) 
						dp[k][l] = dp[k-1][l] + data[k][l];
					else 
						dp[k][l] = dp[k-1][l] + dp[k][l-1] + data[k][l] - dp[k-1][l-1];
					if (dp[k][l] > max) {
						max = dp[k][l];
	//					a=i;b=j;c=k;d=l;
					}
				}

	//printf("%d %d %d %d\n", a, b, c, d);
	printf("%d\n", max);
}

