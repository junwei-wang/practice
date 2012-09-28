/*
 * Filename:      1457.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-27 22:24
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N;
int sum = 0;
int num;
int i;

int main(void)
{
	scanf("%d", &N);
	
	for (i=0; i<N; i++) {
		scanf("%d", &num);
		sum += num;
	}

	printf("%.6f\n", sum * 1.0 / N);
}

