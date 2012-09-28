/*
 * Filename:      1149.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-26 16:32
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int N, i, j;

void print(int n)
{
	for (j=1; j<n; j++) {
		printf("sin(%d", j);
		
		if (j % 2 == 1)
			printf("-");
		else 
			printf("+");
	}
	printf("sin(%d", n);

	for (j=0; j<n; j++)
		printf(")");
}

int main(void)
{
	scanf("%d", &N);

	for (i = 0; i < N-1; i++)
		printf("(");

	for (i = 0; i < N; i++) {
		print(i + 1);

		printf("+%d", N - i);
		if (i != N-1)
			printf(")");
	}

	printf("\n");
}

