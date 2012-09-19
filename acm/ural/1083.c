/*
 * Filename:      1083.c
 * Author:        Junwei Wang(wakemecn@gmail.com)
 * Last Modified: 2012-09-17 07:34
 * Description:
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, len, res = 1, mod;
	char  k[22];

	scanf("%d %s", &n, k);
	len = (int)strlen(k);

	while (n > 0) {
		res *= n;
		n -= len;
	}

	printf("%d\n", res);
}

