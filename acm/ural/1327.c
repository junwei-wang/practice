/*
 * Filename:      1327.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 21:51
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b;

int main(void)
{
	scanf("%d %d", &a, &b);

	if (a % 2 == 0 && b % 2 == 0)
		printf("%d\n", (b-a)/2);
	else
		printf("%d\n", (b-a)/2+1);
}

