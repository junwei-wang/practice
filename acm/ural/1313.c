/*
 * Filename:      1313.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-18 12:37
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[101][101];

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i=1; i<=n; i++)
		for (j=1; j<=n; j++)
			scanf("%d", &a[i][j]);

	for (i=2; i<=n+1; i++)
		for(j=1; j<=i-1; j++) 
			printf("%d ", a[i-j][j]);
	
	for (i=n+2; i<=2*n; i++)
		for (j=i-n; j<=n; j++)
			printf("%d ", a[i-j][j]);

	printf("\n");
}

