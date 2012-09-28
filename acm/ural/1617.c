/*
 * Filename:      1617.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 21:39
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
int cnt[105];
int data;
int i;
int sum = 0;

int main(void)
{
	scanf("%d", &n);

	for (i=0; i<n; i++) {
		scanf("%d", &data);
		cnt[data-600]++;
	}

	for (i=0; i<101; i++) {
		sum += cnt[i] / 4;
	}

	printf("%d\n", sum);
}
