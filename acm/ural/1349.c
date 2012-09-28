/*
 * Filename:      1349.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 21:46
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 不定方程

int main(void)
{
	int n;
	scanf("%d", &n);

	if (n == 1)
		printf("1 2 3\n");
	else if (n == 2)
		printf("3 4 5\n");
	else
		printf("-1\n");
}

