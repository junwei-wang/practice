/*
 * Filename:      1014.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-18 16:37
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a[30];

int main(void)
{
	long n;
	int i, cnt = 0;
	scanf("%ld", &n);

	if (n == 0) {
		printf("10\n");
		exit(0);
	}
	if (n == 1) {
		printf("1\n");
		exit(0);
	}

	for (i = 9; i > 1; i--) {
		while (n % i == 0) {
			n = n / i;
			a[cnt++] = i;
		}
	}
	
	if (n > 9) {
		printf("-1\n");
		exit(0);
	}

	for (i = cnt - 1; i >= 0; i--)
		printf("%d", a[i]);

	printf("\n");
}

