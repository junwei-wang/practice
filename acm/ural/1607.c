/*
 * Filename:      1607.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 20:23
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c, d;

int main(void)
{
	scanf("%d %d %d %d", &a, &b, &c, &d);

	while (a <= c) {
		if (a + b <= c)
			a += b;
		else {
			printf("%d\n", c);
			exit(0);
		}

		if (c - d >= a)
			c -= d;
		else {
			printf("%d\n", a);
			exit(0);
		}
	}
	printf("%d\n", a);
}

