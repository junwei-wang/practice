/*
 * Filename:      1820.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 18:20
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n, k;

int main(void)
{
	scanf("%d %d", &n, &k);
	
	if (n <= k) 
		printf("2\n");
	else if ((2 * n) % k == 0) 
		printf("%d\n", 2 * n / k);
	else
		printf("%d\n", 2 * n / k + 1);
}

