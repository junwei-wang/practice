/*
 * Filename:      1203.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2014-02-28 21:53
 * Description:   DP，在时间上枚举(i时间可以参加n个报告)。
 *                根据每个报告额结束时间排序
 *                dp[i] = max(dp[i-1], dp[start[i]-1] + 1)
 *                start[i] 表示在在i时间结束的最晚开始的报告的开始时间
 *
 */
#include <stdio.h>

int ts[101001], te[101001], dp[30001];
int order[101001];

int search(int time, int n)
{
	//printf("%d\n", n);
	int i;
	for (i = 0; i < n; i++)
		if (te[order[i]] == time) {
			return ts[order[i]];
		}

	return -1;
}

int compare(const void * a, const void * b)
{
	return (te[*(int *)a] > te[*(int *)b]) || ((te[*(int *)a] == te[*(int *)b]) && (ts[*(int *)a] < ts[*(int *)b]));
}

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	int max = 0;
	for (i = 0; i < n; i++) {
		scanf("%d %d", &ts[i], &te[i]);
		order[i] = i;
		if (te[i] > max)
			max = te[i];
	}

	qsort(order, n, sizeof(int), compare);
	//int tmp;
//	for (i = n-1; i > 0; i--) 
//		for (j = 0; j < i; j++) 
//			if ((te[j] > te[j+1]) || ((te[j] == te[j+1]) && (ts[j] < ts[j+1]))) {
//				tmp = order[j];
//				order[j] = order[j+1];
//				order[j+1] = tmp;
//			}
//	for (i=0;i<n; i++)
//		printf("@@%d %d\n", ts[order[i]], te[order[i]]);

	for (i = 0; i < te[order[0]]; i++)
		dp[i] = 0;
	dp[te[order[0]]] = 1;

	int t;
	for (i = te[order[0]] + 1; i <= max; i++) {
		t = search(i, n);

		if (t == -1)
			dp[i] = dp[i-1];
		else 
			dp[i] = ( dp[i-1] > dp[t-1] + 1) ? dp[i-1] : (dp[t-1] + 1);
	}

	printf("%d\n", dp[max]);
	
	return 0;
}

