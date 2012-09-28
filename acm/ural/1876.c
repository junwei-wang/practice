/*
 * Filename:      1876.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 20:56
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b;
int i, j;

int main(void)
{
	scanf("%d %d", &a, &b);
	i = 120 + (b-40) * 2;
	j = 78 + 40 + 2*(a-40) + 1;
	if (i> j)
		printf("%d\n", i);
	else
		printf("%d\n", j);
}
