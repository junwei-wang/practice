/*
 * Filename:      1005.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-16 20:46
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>

long int a[20];
long int dp[1000005] = {0};

long int max(long int, long int);

int main(void)
{
	int n, i, k;
	long int sum = 0, half_sum, min;

	scanf("%d", &n);
	 
	for (i=0; i<n; i++) {
		scanf("%ld", &a[i]);
		sum += a[i];
	}

	// 背包的容量为half_sum, 每件物品的权重和体积都是a[i]
	half_sum = sum / 2;
	for (i=0; i<n; i++) 
		for (k=half_sum; k>=a[i]; k--) 
			dp[k] = max(dp[k], dp[k-a[i]] + a[i]);

		
	printf("%ld\n", sum - 2*dp[half_sum]);

}

long int max(long int a, long int b)
{
	if (a > b)
		return a;
	return b;
}
