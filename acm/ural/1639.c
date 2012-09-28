/*
 * Filename:      1639.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 20:26
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

	if (a%2==0 || b%2==0)
		printf("[:=[first]\n");
	else
		printf("[second]=:]\n");
}

