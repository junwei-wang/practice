/*
 * Filename:      1319.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-18 13:22
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[101][101];

int main(void)
{
	int n, i, j, cnt = 1;

	scanf("%d", &n);
	
	for (i=1; i<=n; i++)
		for (j=1; j<=i; j++)
			a[j][n-i+j] = cnt++; 

	for (i=2; i<=n; i++)
		for (j=1; j<=n-i+1; j++)
			a[i+j-1][j] = cnt++;

	for (i=1; i<=n; i++) {
		for (j=1; j<=n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

