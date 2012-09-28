/*
 * Filename:      1877.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 17:40
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int m, n;

int main(void)
{
	scanf("%d", &m);
	scanf("%d", &n);

	if (m % 2 == 0 || n % 2 == 1) {
		printf("yes\n");
		exit(0);
	}
	printf("no\n");
}

