/*
 * Filename:      1785.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 16:47
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

int main(void)
{
	scanf("%d", &n);

	if (n <= 4)
		printf("few\n");
	else if (n <= 9)
		printf("several\n");
	else if (n <= 19)
		printf("pack\n");
	else if (n <= 49)
		printf("lots\n");
	else if (n <= 99)
		printf("horde\n");
	else if (n <= 249)
		printf("throng\n");
	else if (n <= 499)
		printf("swarm\n");
	else if (n <= 999)
		printf("zounds\n");
	else
		printf("legion\n");
}

