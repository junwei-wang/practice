/*
 * Filename:      1015.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 11:20
 * Description:
 *
 */
#include <stdio.h>
#include <string.h>

int dp[21][801], path[21][801];

int not_selected(int i, int j, int k, int * a) 
{
	while (i > 0 && path[i][j] != k) {
		j -= a[path[i][j]];
		i--;
	}

	return i ? 0 : 1; 
}

int main(void)
{
	int n, m, d, p;
	int a[201], b[201];
	int i, j, k;
	int fix, cnt;
	int res[21];

	while (scanf("%d %d", &n, &m) && n) {
		for (i = 0; i < n; i++) {
			scanf("%d %d", &d, &p);
			a[i] = d - p;
			b[i] = d + p;
		}

		memset(dp, -1, 21 * 801);
		memset(path, -1, 21 * 801);
		fix = 20 * m;
		dp[0][fix] = 0;

		for (i = 1; i <= m; i++)
			for (j = 0; j <= 2 * fix; j++)
				if (dp[i-1][j] >= 0)
					for (k = 0; k < n; k++)
						if ((dp[i][j+a[k]] < dp[i-1][j] + b[k]) && not_selected(i-1 ,j, k, a)) {
							dp[i][j+a[k]] = dp[i-1][j] + b[k];
							path[i][j+a[k]] = k;
						}

		printf("Jury #%d\n", ++cnt);

		for (i = 0; i <= 2*fix; i++)
			if (dp[m][fix + i] > 0 || dp[m][fix-1] > 0)
				break;
		int pos = (dp[m][fix+i] > dp[m][fix-i]) ? (fix+i) : (fix - i); 
		printf("Best jury has value %d for prosecution and value %d for defence:\n",
				(dp[m][pos] +  pos - fix)/2, (dp[m][pos] - pos + fix)/2);

		for (i = 0, j = m; i < m; i++, j--) {
			res[i] = path[j][pos];
			pos -= a[res[i]];
		}

		int tmp;
		for (i = m-1; i > 0; i--)
			for (j = 0; j < i; j++) 
				if (res[j] > res[j+1]) {
					tmp = res[j];
					res[j] = res[i];
					res[i] = tmp;
				}

		for (i = 0; i < m; i++)
			printf(" %d", res[i] + 1);

		printf("\n");
	}
}
